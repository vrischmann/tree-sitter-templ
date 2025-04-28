const GO = require("tree-sitter-go/grammar")

// NOTE: This grammar is based on the Go grammar because a templ file is essentially a Go file with additional components and CSS expressions.
//
// If you see a rule mentioned below but do not find it in the rules, refer to the Go grammar for its definition.

module.exports = grammar(GO, {
    name: 'templ',

    externals: $ => [
        $.css_property_value,
        $.element_text,
        $.element_comment,
        $.style_element_text,
        $.script_block_text,
        $.script_element_text,
        $.switch_element_text,
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
        component_import: $ => prec.right(1, seq(
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
            seq(
                field('name', $._component_identifier),
                field('arguments', $.argument_list)
            ),
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
            field('name', $.element_identifier),
            'html',
            '>'
        ),

        style_element: $ => choice(
            seq(
                $.style_tag_start,
                repeat($.style_element_text),
                $.style_tag_end,
            ),
            $.self_closing_style_tag,
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

        _attribute: $ => choice(
            $.attribute,
            $.spread_attributes,
            $.conditional_attribute_if_statement,
        ),

        attribute: $ => seq(
            field('name', $.attribute_name),
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

        script_element: $ => choice(
            seq(
                '<',
                field('name', 'script'),
                repeat($.attribute),
                '>',
                optional($.script_element_text),
                '</',
                'script',
                '>'
            ),
            seq(
                '<',
                field('name', 'script'),
                repeat($.attribute),
                '/>',
            ),
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
