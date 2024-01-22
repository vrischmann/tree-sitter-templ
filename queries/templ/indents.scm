; inherits: go

[
  (component_block)
] @indent.begin

(component_block
  "}" @indent.branch)

;
; HTML specific
; Taken from https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/html_tags/indents.scm
;

((element
  (tag_start
    (element_identifier) @_not_void_element))
  (#not-any-of? @_not_void_element
    "area" "base" "basefont" "bgsound" "br" "col" "command" "embed" "frame" "hr" "image" "img"
    "input" "isindex" "keygen" "link" "menuitem" "meta" "nextid" "param" "source" "track" "wbr")) @indent.begin

(element
  (self_closing_tag)) @indent.begin

((tag_start
  (element_identifier) @_void_element)
  (#any-of? @_void_element
    "area" "base" "basefont" "bgsound" "br" "col" "command" "embed" "frame" "hr" "image" "img"
    "input" "isindex" "keygen" "link" "menuitem" "meta" "nextid" "param" "source" "track" "wbr")) @indent.begin

(element
  (tag_end
    ">" @indent.end))

(element
  (self_closing_tag
    "/>" @indent.end))

(element
  (tag_end) @indent.branch)

[
 ">"
 "/>"
] @indent.branch

(element_comment) @indent.ignore
