module.exports = grammar({
    name: 'templ',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.package_declaration,
            $.component_declaration,
        ),

        package_declaration: $ => seq(
            'package',
            $._package_identifier,
        ),

        component_declaration: $ => seq(
            'templ',
            field('name', $._component_identifier),
            $.parameter_list,
            $.block,
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

        block: $ => seq(
            '{',
            repeat(choice(
                $.element,
            )),
            '}',
        ),

        element: $ => seq(
            $.open_tag,
            repeat($.element_content),
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
            '="',
            field('value', $.attribute_value),
            '"',
        ),
        element_content: $ => choice(
            $.element,
            'FOO',
            // $.statement
            // $.expression,
        ),
        close_tag: $ => seq(
            '</',
            field('name', $.element_identifier),
            '>',
        ),

        identifier: $ => /[a-zA-Z0-9_]+/,
        _package_identifier: $ => alias($.identifier, $.package_identifier),
        _component_identifier: $ => alias($.identifier, $.component_identifier),
        _parameter_identifier: $ => alias($.identifier, $.parameter_identifier),

        element_identifier: $ => /[a-z0-9\-]+/,

        // Taken from https://github.com/tree-sitter/tree-sitter-html/blob/master/grammar.js
        attribute_name: _ => /[^<>"'/=\s]+/,
        attribute_value: _ => /[^<>"'=\s]+/,
    },
});
