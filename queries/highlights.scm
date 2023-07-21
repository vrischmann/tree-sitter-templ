(component_declaration
  name: (component_identifier) @function)

(open_tag
  name: (element_identifier) @tag)
(close_tag
  name: (element_identifier) @tag)

(attribute
  name: (attribute_name) @attribute
  value: (attribute_value) @string)

[
  "package"
  "templ"
] @keyword
