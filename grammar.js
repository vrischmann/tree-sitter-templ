const GO = require("tree-sitter-go/grammar")

// NOTE(vincent): we base this grammar on the Go grammar because a templ file is basically a Go file except for components and css expressions.
//
// If you see a rule mentioned below but do _not_ see it in the rules, go look at the Go grammar.

module.exports = grammar(GO, {
    name: 'templ',

    word: $ => $.identifier,

    externals: $ => [
        $.css_property_value,
        $.element_text,
        $.style_element_text,
        $.script_element_text,
    ],

    conflicts: ($, original) => [
        ...original,
        [$.expression, $.dynamic_class_attribute_value],
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
        //     <h1>{ title }</h1>
        //
        // Note that we use $._expression which is from the Go grammar.
        expression: $ => seq(
            '{',
            optional($._expression),
            '}',
        ),

        //
        // Component stuff
        //

        // This matches the entire component:
        //
        //     templ Name(a int, b string, ...) {}
        //
        // Note that we use $.parameter_list which is from the Go grammar.
        component_declaration: $ => seq(
            'templ',
            field('name', $._component_identifier),
            $.parameter_list,
            $.component_block,
        ),

        // This matches block of a component.
        component_block: $ => seq(
            '{',
            repeat($._component_node),
            '}',
        ),
        _component_node: $ => choice(
            $.element,
            $.style_element,
            $.component_if_statement,
            $.component_for_statement,
            $.component_switch_statement,
            $.component_import,
            $.component_render,
            $.component_children_expression,
            $.expression,
            $.element_text,
        ),

        // This matches an if statement in a component block.
        //
        // Based on the $.if_statement rule of the Go grammar
        // We can't directly use the Go grammar because it uses $.block and we need to use our $.component_block
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
                    $.if_statement)
                )
            ))
        ),

        // This matches a for statement in a component block.
        //
        // Based on the $.for_statement rule of the Go grammar
        // We can't directly use the Go grammar because it uses $.block and we need to use our $.component_block
        component_for_statement: $ => seq(
            'for',
            optional(choice($._expression, $.for_clause, $.range_clause)),
            field('body', $.component_block)
        ),

        // This matches a switch statement in a component block.
        //
        // Based on the $.expression_switch_statement rule of the Go grammar
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
            optional($._component_node),
        )),
        component_switch_default_case: $ => prec.right(seq(
            'default',
            ':',
            optional($._component_node),
        )),

        // This matches an import statement:
        //
        //     @Foobar(a, b, c)
        //     @Foobar(a, b, c) { ... }
        //
        // Note that we use $.argument_list which is from the Go grammar.
        component_import: $ => prec.right(seq(
            '@',
            field('name', $._component_identifier),
            field('arguments', $.argument_list),
            optional(field('body', $.component_block)),
        )),

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

        // a templ element, which is basically a HTML node

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
            repeat($.attribute),
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
            repeat($.attribute),
            '/>',
        ),

        doctype: $ => seq(
            '<!',
            field('name', $.element_identifier),
            'html',
            '>'
        ),

        style_element: $ => seq(
            '<',
            field('name', 'style'),
            repeat($.attribute),
            '>',
            $.style_element_text,
            '</',
            'style',
            '>'
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
            commaSep(choice(
                $._string_literal,
                $._expression,
            )),
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
            $.script_element_text,
            '}',
        ),

        //

        identifier: $ => /[a-zA-Z0-9_]+/,
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _css_identifier: $ => alias($.identifier, $.css_identifier),
        _script_identifier: $ => alias($.identifier, $.script_identifier),

        element_identifier: $ => /[a-zA-Z0-9\-]+/,

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^<>"'=\s]+/,
        quoted_attribute_value: $ => choice(
            seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
            seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
        ),
        text: _ => /[^<>&{}\s]([^<>&{}]*[^<>&\s{}])?/,
    },
});

// Taken from https://github.com/tree-sitter/tree-sitter-go/blob/master/grammar.js#L909-L915

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
