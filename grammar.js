const GO = require("tree-sitter-go/grammar")

// NOTE: This grammar is based on the Go grammar because a templ file is essentially a Go file with additional components and CSS expressions.
//
// If you see a rule mentioned below but do not find it in the rules, refer to the Go grammar for its definition.

module.exports = grammar(GO, {
    name: 'templ',

    externals: $ => [
        $.css_property_value,
        $.script_block_text,
        $.switch_element_text,
        $.element_text,
    ],

    conflicts: ($, original) => [
        ...original,
        [$._expression, $.dynamic_class_attribute_value],
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
            $.style_element,
            $.script_element,
            $.component_if_statement,
            $.component_for_statement,
            $.component_switch_statement,
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
            $.style_element,
            $.script_element,
            $.component_if_statement,
            $.component_for_statement,
            $.component_switch_statement,
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
            repeat(seq(
              '.',
              field('name', $._component_member)
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
            field('name', $.element_identifier),
            repeat($._attribute),
            '>',
        ),
        tag_end: $ => seq(
            '</',
            field('name', $.element_identifier),
            '>',
        ),
        self_closing_tag: $ => seq(
            '<',
            field('name', $.element_identifier),
            repeat($._attribute),
            '/>',
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
        attribute: $ => seq(
            field('name', choice(
                $.expression,
                $.attribute_name,
            )),
            optional(seq(
                '=',
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
            '\n',
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
        css_property_name: $ => /[a-zA-Z\-]+/,

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
                optional($.script_element_text),
                $.script_tag_end,
            ),
            $.self_closing_script_tag,
        ),
        // Rule to capture the text content *between* <script> and </script> tags.
        // Requires at least one character to be present.
        // Example: In `<script> alert('Hi'); </script>`, this matches ` alert('Hi'); `
        script_element_text: $ => repeat1(
            choice(
                // Option A: Match one or more characters that are NOT '<'.
                // Consumes text chunks (including newlines) until a '<' is encountered.
                /[^<]+/,
                // Option B: Match '<' *only if* it's followed by a character that is NOT '/'.
                // Allows '<' within the script content but prevents matching the start
                // of the closing tag '</script>'. Fails when '</' is seen.
                /<[^/]/
            )
            // The repetition stops just before '</script>' because neither choice A nor B
            // can match that sequence.
        ),
        script_tag_start: $ => seq(
            '<',
            field('name', 'script'),
            repeat($.attribute),
            '>',
        ),
        script_tag_end: $ => seq(
            '</',
            'script',
            '>'
        ),
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
            optional($._statement_list),
            '}}',
        ),

        //

        package_identifier: $ => alias($.identifier, $.package_identifier),
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _css_identifier: $ => alias($.identifier, $.css_identifier),
        _script_identifier: $ => alias($.identifier, $.script_identifier),

        element_identifier: $ => /[a-zA-Z0-9\-]+/,

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^{}<>"'=\s]+/,
        quoted_attribute_value: $ => choice(
            seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
            seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
        ),
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
