; TODO(vincent): can we use injection ? I can't get it working

; A bunch of these are taken from:
; * https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/go/highlights.scm
; * https://github.com/tree-sitter/tree-sitter-go/blob/master/queries/highlights.scm

(package_identifier) @namespace

(parameter_declaration (identifier) @parameter)
(variadic_parameter_declaration (identifier) @parameter)

(function_declaration
  name: (identifier) @function)

(type_spec name: (type_identifier) @type.definition)
(type_identifier) @type
(field_identifier) @property
(identifier) @variable

;
; These are Templ specific
;

(component_declaration
  name: (component_identifier) @function)

(tag_start) @tag
(tag_end) @tag
(self_closing_tag) @tag

(attribute_value) @string

(element_text) @string.special

(css_property
  name: (css_property_name) @attribute)

(expression) @function.method

(component_import
  name: (component_identifier) @function)

[
  "@"
] @operator

[
  "func"
  "var"
  "const"
  "templ"
  "css"
  "type"
  "return"
  "struct"
] @keyword

[
  "import"
  "package"
] @include

[
  "else"
  "case"
  "switch"
  "if"
] @conditional

"for" @repeat

[
  (interpreted_string_literal)
  (raw_string_literal)
  (rune_literal)
] @string
