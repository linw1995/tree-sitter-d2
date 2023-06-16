;-------------------------------------------------------------------------------

(container_key) @string.special
(shape_key) @variable
(attr_key) @property
(reserved) @error
[
  (keyword_style)
  (keyword_classes)
  (keyword_class)
] @keyword
(class_name) @constant

; Literals
;-------------------------------------------------------------------------------

(string) @string
(container_key (string (string_fragment) @string))
(shape_key (string (string_fragment) @string))
(escape_sequence) @string.escape
(label) @text.title
(attr_value) @string
(integer) @number
(float) @float
(boolean) @boolean

; Comments
;-------------------------------------------------------------------------------

[
  (language)
  (line_comment)
  (block_comment)
] @comment

; Punctiation
;-------------------------------------------------------------------------------

(arrow) @operator

[
  (dot)
  ":"
  ";"
] @punctuation.delimiter

[
  "["
  "]"
  "{"
  "}"
  "|"
] @punctuation.bracket

; Special
;-------------------------------------------------------------------------------

(ERROR) @error
