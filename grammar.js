const GO = require("tree-sitter-go/grammar")

// NOTE: This grammar is based on the Go grammar because a templ file is essentially a Go file with additional components and CSS expressions.
//
// If you see a rule mentioned below but do not find it in the rules, refer to the Go grammar for its definition.

module.exports = grammar(GO, {
    name: 'templ',

    externals: $ => [
        $._switch_element_text_chunk,
        $._element_text_chunk,
        $._script_element_text_chunk,
        $._script_go_expression_start,
        $._script_tag_end,
    ],

    conflicts: ($, original) => [
        ...original,
        [$._expression, $.dynamic_class_attribute_value],
        // A '<' + void element name could open either a void_element
        // (e.g. <br>) or a tag_start / self_closing_tag (e.g. <br/>). The
        // closing token decides, so this is resolved by GLR.
        [$.void_element, $._element_name],
    ],

    rules: {
        _top_level_declaration: ($, original) => choice(
            original,
            $.component_declaration,
            $.css_declaration,
            $.script_declaration,
        ),

        // This matches a templ expression:
        //
        // Example:
        //
        //     <h1>{ title }</h1>
        //
        // Note: $._expression is inherited from the Go grammar.
        expression: $ => seq(
            '{',
            optional($._expression),
            '}',
        ),

        // Component stuff
        //
        // This matches the entire component:
        //
        // Examples:
        //
        //     templ Name(a int, b string, ...) {}
        //     templ (a Foobar) Name(a int, b string, ...) {}
        //     templ Name[V WithName](objects []V) {}
        //
        // Note: $.parameter_list and $.type_parameter_list are inherited from the Go grammar.
        component_declaration: $ => seq(
            'templ',
            optional(
                field('receiver', $.parameter_list)
            ),
            field('name', $._component_identifier),
            optional(
                field('type_parameters', $.type_parameter_list),
            ),
            $.parameter_list,
            $.component_block,
        ),

        // This matches block of a component.
        //
        // Examples:
        //
        //    templ Name(a int, b string, ...) {
        //      <h1>{ title }</h1>
        //    }
        //
        component_block: $ => seq(
            '{',
            repeat($._component_node),
            '}',
        ),
        _component_node: $ => choice(
            $.element,
            $.void_element,
            $.style_element,
            $.script_element,
            $.component_if_statement,
            $.component_for_statement,
            $.component_switch_statement,
            $.component_type_switch_statement,
            $.component_import,
            $.rawgo_block,
            $.component_render,
            $.component_children_expression,
            $.expression,
            $.element_text,
            $.element_comment,
            prec.right(1, $.comment),
        ),
        _switch_component_node: $ => choice(
            $.element,
            $.void_element,
            $.style_element,
            $.script_element,
            $.component_if_statement,
            $.component_for_statement,
            $.component_switch_statement,
            $.component_type_switch_statement,
            $.fallthrough_statement,
            $.component_import,
            $.rawgo_block,
            $.component_render,
            $.component_children_expression,
            $.expression,
            alias($.switch_element_text, $.element_text),
            $.element_comment,
            prec.right(1, $.comment),
        ),


        // This matches an entire HTML comment, including its content.
        //
        // Example:
        //
        //    <!-- This is a comment -->
        element_comment: $ => seq(
            '<!--',
            repeat(
                choice(
                    // Option A: Match one or more characters that are NOT hyphens '-'.
                    // Consumes chunks of text, including newlines, up until a hyphen is encountered.
                    /[^-]+/,
                    // Option B: Match a hyphen '-' followed immediately by
                    // any single character that is NOT a closing angle bracket '>'.
                    // This rule allows hyphens within the comment content,
                    // as long as they are not part of the closing '-->' sequence.
                    // For example, it matches '-- ' or '-a' but will fail to match
                    // the '-' if the next character is '>'.
                    /-[^>]/
                )
                // The 'repeat' means the parser will repeatedly try 'Option A' then 'Option B'
                // to consume as much content as possible. It stops when it encounters
                // the sequence '-->' because:
                // - Option A `/[^-]+/` fails immediately (sees '-').
                // - Option B `/-[^>]/` consumes the first '-', looks at the second '-',
                //   consumes it (since '-' is not '>'), then looks at '>'. Now `/-[^>]/` fails
                //   because the character following the hyphen *is* '>'.
                // Since neither choice matches, the 'repeat' block finishes.
            ),
            '-->'
        ),

        // This matches an if statement in a component block.
        //
        // Example:
        //
        //   if shouldBeUsed {
        //     <p>...</p>
        //   }
        //
        // Note: based on the $.if_statement rule in the Go grammar.
        // We can't directly use the Go grammar because it uses $.block and we need to use our $.component_block.
        component_if_statement: $ => seq(
            'if',
            optional(seq(
                field('initializer', $._simple_statement),
                ';'
            )),
            field('condition', $._expression),
            field('consequence', $.component_block),
            optional(seq(
                'else',
                field('alternative', choice(
                    $.component_block,
                    $.component_if_statement)
                )
            ))
        ),

        // This matches a for statement in a component block.
        //
        // Example:
        //
        //  for i := 0; i < 10; i++ {
        //    <p>...</p>
        //  }
        //
        // Note: based on the $.for_statement rule in the Go grammar.
        // We can't directly use the Go grammar because it uses $.block and we need to use our $.component_block.
        component_for_statement: $ => seq(
            'for',
            optional(choice($._expression, $.for_clause, $.range_clause)),
            field('body', $.component_block)
        ),

        // This matches a switch statement in a component block.
        //
        // Example:
        //
        //  switch foo {
        //    case 1:
        //      <p>...</p>
        //    case 2:
        //      <p>...</p>
        //    default:
        //      <p>...</p>
        //  }
        //
        // Note: based on the $.expression_switch_statement rule in the Go grammar.
        // We can't directly use the Go grammar because it uses $.expression_switch_statement and we need to use our $.component_switch_statement.
        component_switch_statement: $ => prec.right(seq(
            'switch',
            optional(seq(
                field('initializer', $._simple_statement),
                ';'
            )),
            field('value', optional($._expression)),
            '{',
            repeat(choice(
                $.component_switch_expression_case,
                $.component_switch_default_case,
            )),
            '}',
        )),
        component_switch_expression_case: $ => prec.right(seq(
            'case',
            field('value', $.expression_list),
            ':',
            repeat($._switch_component_node),
        )),
        component_switch_default_case: $ => prec.right(seq(
            'default',
            ':',
            repeat($._switch_component_node),
        )),

        // This matches a type switch statement in a component block.
        //
        // Example:
        //
        //  switch v := v.(type) {
        //    case int:
        //      <p>...</p>
        //    case string:
        //      <p>...</p>
        //    default:
        //      <p>...</p>
        //  }
        //
        // Note: based on the $.type_switch_statement rule in the Go grammar,
        // reusing its $._type_switch_header shape but with component-style case
        // bodies (see $._switch_component_node).
        component_type_switch_statement: $ => prec.right(seq(
            'switch',
            optional(seq(
                field('initializer', $._simple_statement),
                ';'
            )),
            optional(seq(field('alias', $.expression_list), ':=')),
            field('value', $._expression),
            '.',
            '(',
            'type',
            ')',
            '{',
            repeat(choice(
                $.component_switch_type_case,
                $.component_switch_default_case,
            )),
            '}',
        )),
        component_switch_type_case: $ => prec.right(seq(
            'case',
            field('type', commaSep1($._type)),
            ':',
            repeat($._switch_component_node),
        )),

        // This matches an import statement:
        //
        //     @Foobar(a, b, c)
        //     @Foobar(a, b, c) { ... }
        //     @pkg.Foobar(a, b, c)
        //     @pkg.Foobar(a, b, c) { ... }
        //     @pkg.Foo.Bar(a, b, c)
        //     @pkg.Foo.Bar(a, b, c) { ... }
        //     @pkg.Foo{}.Bar(a, b, c)
        //     @pkg.Foo{}.Bar(a, b, c) { ... }
        //
        // Note: we use $._package_identifier and $.argument_list which are from the Go grammar.
        component_import: $ => prec.right(5, seq(
            '@',
            optional(seq(
              field('package', $._package_identifier),
              '.',
            )),
            field('name', $._component_member),
            repeat(choice(
              seq('.', field('name', $._component_member)),
              field('call', $.argument_list),
            )),
            optional(field('body', $.component_block)),
        )),

        _component_member: $ => choice(
            seq(
                field('name', $._component_identifier),
                field('body', $.literal_value)
            ),
            prec.right(2, seq(
                field('name', $._component_identifier),
                optional(field('type_arguments', $.type_arguments)),
                field('arguments', $.argument_list)
            )),
            prec.right(-1, $._component_identifier)
        ),

        // This matches a render statement:
        //
        //     {! myComponent }
        //     {! Component(foo, bar) }
        //
        // See https://templ.guide/syntax-and-usage/template-composition
        component_render: $ => seq(
            '{!',
            field('expression', $._expression),
            '}'
        ),

        // This matches a children expression:
        //
        //     { children... }
        //
        // See https://templ.guide/syntax-and-usage/template-composition
        component_children_expression: $ => seq(
            '{',
            'children...',
            '}'
        ),

        // This is a Templ element which is a basically a HTML element.
        //
        // Example:
        //
        //    <div>
        //      <p>...</p>
        //    </div>
        //
        element: $ => choice(
            seq(
                $.tag_start,
                repeat($._component_node),
                $.tag_end,
            ),
            $.self_closing_tag,
            $.doctype,
        ),
        tag_start: $ => seq(
            '<',
            field('name', $._element_name),
            repeat($._attribute),
            '>',
        ),
        tag_end: $ => seq(
            '</',
            field('name', $._element_name),
            '>',
        ),
        self_closing_tag: $ => seq(
            '<',
            field('name', $._element_name),
            repeat($._attribute),
            '/>',
        ),

        // This matches a void HTML element, which never has a closing tag.
        //
        // Example:
        //
        //    <br>
        //    <input name="q">
        //    <hr>
        //
        // The name is restricted to the set of HTML void elements (the same
        // set the templ parser treats as self-closing, see parser/v2/types.go)
        // so that normal open/close elements (e.g. <div></div>) keep working.
        void_element: $ => seq(
            '<',
            field('name', alias($._void_element_name, $.element_identifier)),
            repeat($._attribute),
            '>',
        ),
        _void_element_name: $ => choice(
            'area', 'base', 'br', 'col', 'command', 'embed',
            'hr', 'img', 'input', 'keygen', 'link', 'meta',
            'param', 'source', 'track', 'wbr',
        ),

        doctype: $ => seq(
            '<!',
            // Case insensitive "doctype"
            /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,
            choice(
                'html',
                'HTML PUBLIC "http://www.w3.org/TR/html4/loose.dtd"',
            ),
            '>'
        ),

        // This matches a complete style element.
        //
        // Example:
        //
        //   <style>
        //     body {
        //       color: red;
        //     }
        //   </style>
        //
        // or the self closing tag like this:
        //
        //   <style href="" />
        style_element: $ => choice(
            seq(
                $.style_tag_start,
                optional($.style_element_text),
                $.style_tag_end,
            ),
            $.self_closing_style_tag,
        ),
        // Rule to capture the text content *between* <style> and </style> tags.
        // It requires at least one character to be present.
        // Example: In `<style> body { color: red; } </style>`, this matches ` body { color: red; } `
        style_element_text: $ => repeat1(
            choice(
                // Option A: Match one or more characters that are NOT '<'.
                // This consumes chunks of text (including whitespace and newlines) efficiently up until a '<' is found.
                /[^<]+/,
                // Option B: Match a '<' character *only if* it is immediately followed by a character that is NOT '/'.
                // This allows '<' characters within the style content (e.g., in selectors like `a < b`),
                // but prevents the rule from matching the start of the closing tag '</style>'.
                // When the parser sees '</', this rule fails because the character after '<' *is* '/'.
                /<[^/]/
            )
            // The repetition stops just before '</style>' because neither choice A nor B
            // can match that sequence.
        ),
        style_tag_start: $ => seq(
            '<',
            'style',
            repeat($._attribute),
            '>'
        ),
        style_tag_end: $ => seq(
            '</',
            'style',
            '>',
        ),
        self_closing_style_tag: $ => seq(
            '<',
            'style',
            repeat($._attribute),
            '/>',
        ),

        // This matches any type of attribute.
        // See https://templ.guide/syntax-and-usage/attributes
        _attribute: $ => choice(
            $.attribute,
            $.spread_attributes,
            $.conditional_attribute_if_statement,
        ),

        // This matches a simple attribute.
        //
        // Example:
        //
        //   <div { "dynamic"+"-attr-key" }={ "hello world" }>
        //   <div class="foo">
        //   <div name={ `foo` }>
        //   <div class={ templ.SafeCSS(`color: red`) }>
        //   <div { attrs... }>
        //   <div noshade?={ false }>
        attribute: $ => seq(
            field('name', choice(
                $.expression,
                $.attribute_name,
            )),
            optional(seq(
                choice('=', '?='),
                field('value', choice(
                    $.expression,
                    $.attribute_value,
                    $.quoted_attribute_value,
                    $.dynamic_class_attribute_value,
                )),
            )),
        ),

        // This matches spread attributes.
        // See https://templ.guide/syntax-and-usage/attributes#spread-attributes
        //
        // It's the part between the curly braces ending with three dots:
        //
        //     <div
        //       disabled
        //       { attrs... }
        //     </div>
        //
        // Or
        //
        //     <hr
        //       if shouldBeUsed {
        //         { attrs... }
        //       }
        //     />
        //
        spread_attributes: $ => seq(
            '{',
            field('name', $._expression),
            '...',
            '}',
        ),

        // This matches the block for a if or else statement in a conditional attribute.
        // See https://templ.guide/syntax-and-usage/attributes#conditional-attributes
        //
        // It's the part between the curly braces:
        //
        //   <div
        //     if shouldBeUsed {
        //       <p>...</p>
        //     }
        //   </div>
        conditional_attribute_block: $ => seq(
            '{',
            optional('\n'),
            repeat(choice(
                $.attribute,
                $.spread_attributes,
                $.conditional_attribute_if_statement,
            )),
            '}',
        ),

        // This matches a conditional attribute.
        // See https://templ.guide/syntax-and-usage/attributes#conditional-attributes
        //
        //    <div
        //      if shouldBeUsed {
        //        <p>...</p>
        //      }
        //    </div>
        conditional_attribute_if_statement: $ => seq(
            token(prec(10, 'if')),
            optional(seq(
                field('initializer', $._simple_statement),
                ';'
            )),
            field('condition', $._expression),
            field('consequence', $.conditional_attribute_block),
            optional(seq(
                token(prec(10, 'else')),
                field('alternative', choice(
                    $.conditional_attribute_block,
                    $.conditional_attribute_if_statement,
                )),
            )),
        ),

        // CSS stuff

        css_declaration: $ => seq(
            'css',
            field('name', $._css_identifier),
            $.parameter_list,
            $._css_block,
        ),
        _css_block: $ => seq(
            '{',
            repeat($.css_property),
            '}',
        ),
        css_property: $ => seq(
            field('name', $.css_property_name),
            ':',
            field('value', choice(
                $.expression,
                $.css_property_value
            )),
            ';'
        ),
        css_property_name: $ => /[a-zA-Z\-][a-zA-Z0-9\-]*/,
        css_property_value: $ => token(prec(1, /[^\s;{}][^;{}]*/)),

        // This matches a dynamic class attribute.
        // See https://templ.guide/syntax-and-usage/css-style-management#dynamic-classes
        //
        //     <div class={ `foo`, templ.SafeCSS(`color: red`), templ.KV("is-primary", true), myCssClass() }
        //
        dynamic_class_attribute_value: $ => prec(-1, seq(
            '{',
            seq(
                commaSep(choice(
                    $._string_literal,
                    $._expression,
                )),
                optional(','),
            ),
            '}',
        )),

        // JavaScript stuff

        script_declaration: $ => seq(
            'script',
            field('name', $._script_identifier),
            $.parameter_list,
            $.script_block,
        ),
        script_block: $ => seq(
            '{',
            optional($.script_block_text),
            '}',
        ),
        script_block_text: $ => repeat1(choice(
            $._script_block_fragment,
            $._script_brace_group,
        )),
        _script_block_fragment: _ => token.immediate(prec(1, /[^{}]+/)),
        _script_brace_group: $ => seq(
            token.immediate('{'),
            repeat(choice($._script_block_fragment, $._script_brace_group)),
            token.immediate('}'),
        ),

        // This matches a complete script element
        //
        // Example:
        //
        //   <script>
        //   ...
        //   </script>
        //
        // or the self closing tag like this:
        //
        //   <script src="..." />
        script_element: $ => choice(
            seq(
                $.script_tag_start,
                repeat(choice(
                    $.script_element_text,
                    $.script_go_expression,
                )),
                $.script_tag_end,
            ),
            $.self_closing_script_tag,
        ),
        // Rule to capture the text content *between* <script> and </script> tags.
        // Text stops before a Go expression interpolation or the closing tag.
        script_element_text: $ => $._script_element_text_chunk,
        script_go_expression: $ => seq(
            $._script_go_expression_start,
            optional($._expression),
            '}}',
        ),
        script_tag_start: $ => seq(
            '<',
            field('name', 'script'),
            repeat($.attribute),
            '>',
        ),
        script_tag_end: $ => $._script_tag_end,
        self_closing_script_tag: $ => seq(
            '<',
            field('name', 'script'),
            repeat($.attribute),
            '/>',
        ),

        // rawgo block
        // https://templ.guide/syntax-and-usage/raw-go
        // Example:
        // package main
        //
        // templ nameList(items []Item) {
        //     {{ first := items[0] }}
        //     <p>
        //         { first.Name }
        //     </p>
        // }
        rawgo_block: $ => seq(
            '{{',
            optional($.statement_list),
            '}}',
        ),

        //

        package_identifier: $ => alias($.identifier, $.package_identifier),
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _css_identifier: $ => alias($.identifier, $.css_identifier),
        _script_identifier: $ => alias($.identifier, $.script_identifier),

        element_identifier: $ => /[a-zA-Z0-9\-:]+/,

        // Accepts any element name, including the HTML void element names.
        // The void names are aliased to element_identifier so the parse tree
        // stays consistent, but they remain a distinct token. This lets the
        // void_element rule (which only matches void names) coexist with
        // tag_start / self_closing_tag via GLR: both paths can consume the same
        // name token, and the closing ('>', '/>' or a paired '</name>') decides
        // which form wins.
        _element_name: $ => choice(
            $.element_identifier,
            alias($._void_element_name, $.element_identifier),
        ),

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^{}<>"'=\s]+/,
        // NOTE: the content is given a higher lexical precedence than Go's
        // `comment` token (which is inherited as an extra). Without it, a value
        // beginning with `//` or `/*` (e.g. title="// note") is swallowed by the
        // comment extra, because the comment matches to end of line and beats
        // the content token on longest match. prec(1) makes the content win.
        quoted_attribute_value: $ => choice(
            seq('\'', optional(alias(token(prec(1, /[^']+/)), $.attribute_value)), '\''),
            seq('"', optional(alias(token(prec(1, /[^"]+/)), $.attribute_value)), '"'),
        ),
        element_text: $ => prec.right(choice(
            $._element_text_chunk,
            seq(
                repeat1($._element_text_import_punctuation),
                optional($._element_text_chunk),
            ),
        )),
        switch_element_text: $ => prec.right(choice(
            $._switch_element_text_chunk,
            seq(
                repeat1($._element_text_import_punctuation),
                optional($._switch_element_text_chunk),
            ),
        )),
        _element_text_import_punctuation: _ => token(prec(-1, /[.()\[\]]/)),
        text: _ => /[^<>&{}\s]([^<>&{}]*[^<>&\s{}])?/,

        // Taken from https://github.com/tree-sitter/tree-sitter-go/blob/master/grammar.js

        literal_value: $ => seq(
            '{',
            optional(
                seq(
                    commaSep(choice($.literal_element, $.keyed_element)),
                    optional(','))),
            '}',
        ),

        literal_element: $ => choice($._expression, $.literal_value),
    },
});

// Taken from https://github.com/tree-sitter/tree-sitter-go/blob/master/grammar.js#L909-L915

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
    return optional(commaSep1(rule))
}
