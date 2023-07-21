module.exports = grammar({
    name: 'templ',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.package_definition,
            $.component_definition,
        ),

        package_definition: $ => seq(
            'package',
            $.package_identifier,
        ),
        package_identifier: $ => /[a-z_]+/,

        component_definition: $ => seq(
            'templ',
            $.component_identifier,
            $.component_parameter_list,
            $.component_block,
        ),
        component_identifier: $ => /[a-zA-Z0-9_]/,
        component_parameter_list: $ => seq(
            '(',
            // TODO
            ')',
        ),
        component_block: $ => seq(
            '{',
            // TODO
            '}',
        ),
    },
});
