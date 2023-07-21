(component_declaration
  name: (component_identifier) @function)

(open_tag) @tag
(close_tag) @tag

(attribute_value) @string

(text) @string.special

(css_property
  name: (css_property_name) @attribute)

(expression) @function.method

[
  "package"
  "templ"
  "css"
] @keyword
