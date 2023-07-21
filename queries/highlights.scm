(component_declaration
  name: (component_identifier) @function)

(tag_start) @tag
(tag_end) @tag
(self_closing_tag) @tag

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
