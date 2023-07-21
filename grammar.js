module.exports = grammar({
    name: 'templ',

    word: $ => $.identifier,

    externals: $ => [
        $.expression,
        $.css_property_value,
    ],

    rules: {
        source_file: $ => seq(
            $.package_declaration,
            repeat($._definition),
        ),

        _definition: $ => choice(
            $.component_declaration,
            $.css_declaration,
        ),

        package_declaration: $ => seq(
            'package',
            $._package_identifier,
        ),

        // Component stuff

        component_declaration: $ => seq(
            'templ',
            field('name', $._component_identifier),
            $.parameter_list,
            $._block,
        ),

        parameter_list: $ => seq(
            '(',
            repeat(seq(
                $.parameter_declaration,
                optional(','),
            )),
            ')'
        ),
        parameter_declaration: $ => prec.left(seq(
            field('name', $._parameter_identifier),
            field('type', $.parameter_type),
        )),
        parameter_type: $ => /[a-zA-Z0-9\[\]]+/,

        _block: $ => seq(
            '{',
            repeat(choice(
                $.element,
            )),
            '}',
        ),

        element: $ => seq(
            $.open_tag,
            repeat($._element_content),
            $.close_tag,
        ),
        open_tag: $ => seq(
            '<',
            field('name', $.element_identifier),
            repeat($.attribute),
            '>',
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
        close_tag: $ => seq(
            '</',
            field('name', $.element_identifier),
            '>',
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
        _package_identifier: $ => alias($.identifier, $.package_identifier),
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _parameter_identifier: $ => alias($.identifier, $.parameter_identifier),
        _css_identifier: $ => alias($.identifier, $.css_identifier),

        element_identifier: $ => /[a-z0-9\-]+/,

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^<>"'=\s]+/,
        text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
    },
});
