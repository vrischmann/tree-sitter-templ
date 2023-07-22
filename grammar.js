const GO = require("tree-sitter-go/grammar")

module.exports = grammar(GO, {
    name: 'templ',

    word: $ => $.identifier,

    externals: $ => [
        $.expression,
        $.css_property_value,
    ],

    rules: {
        _top_level_declaration: ($, original) => choice(
            original,
            $.component_declaration,
            $.css_declaration,
        ),

        // Component stuff

        component_declaration: $ => seq(
            'templ',
            field('name', $._component_identifier),
            $.parameter_list,
            $.component_block,
        ),

        component_block: $ => seq(
            '{',
            repeat(choice(
                $.element,
                $.component_if_statement,
            )),
            '}',
        ),

        // Based on the if_statement of the Go grammar
        // Not sure if it can be reused because the Go grammar uses $.block; we want our $._block
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

        element: $ => choice(
            $._tag,
            $.self_closing_tag,
        ),
        _tag: $ => seq(
            $.tag_start,
            repeat($._element_content),
            $.tag_end,
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

        attribute: $ => seq(
            field('name', $.attribute_name),
            '=',
            field('value', $._attribute_value),
        ),
        _attribute_value: $ => choice(
            $.expression,
            seq(
                '"',
                $.attribute_value,
                '"',
            ),
        ),

        _element_content: $ => choice(
            $.element,
            $.text,
            // $.statement
            // $.expression,
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

        //

        identifier: $ => /[a-zA-Z0-9_]+/,
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _css_identifier: $ => alias($.identifier, $.css_identifier),

        element_identifier: $ => /[a-z0-9\-]+/,

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^<>"'=\s]+/,
        text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
    },
});
