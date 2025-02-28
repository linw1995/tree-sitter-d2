#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 291
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 3
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  aux_sym__identifier_token1 = 8,
  aux_sym__identifier_token2 = 9,
  aux_sym__identifier_token3 = 10,
  anon_sym_RPAREN2 = 11,
  aux_sym__identifier_token4 = 12,
  aux_sym_text_block_token1 = 13,
  sym_language = 14,
  anon_sym_direction = 15,
  anon_sym_shape = 16,
  anon_sym_label = 17,
  anon_sym_constraint = 18,
  anon_sym_icon = 19,
  anon_sym_link = 20,
  anon_sym_tooltip = 21,
  anon_sym_width = 22,
  anon_sym_height = 23,
  anon_sym_vertical_DASHgap = 24,
  anon_sym_horizontal_DASHgap = 25,
  anon_sym_grid_DASHgap = 26,
  anon_sym_grid_DASHcolumns = 27,
  anon_sym_grid_DASHrows = 28,
  anon_sym_3d = 29,
  anon_sym_opacity = 30,
  anon_sym_fill = 31,
  anon_sym_fill_DASHpattern = 32,
  anon_sym_stroke = 33,
  anon_sym_stroke_DASHwidth = 34,
  anon_sym_stroke_DASHdash = 35,
  anon_sym_border_DASHradius = 36,
  anon_sym_double_DASHborder = 37,
  anon_sym_font = 38,
  anon_sym_font_DASHsize = 39,
  anon_sym_font_DASHcolor = 40,
  anon_sym_shadow = 41,
  anon_sym_multiple = 42,
  anon_sym_animated = 43,
  anon_sym_italic = 44,
  anon_sym_bold = 45,
  anon_sym_underline = 46,
  anon_sym_text_DASHtransform = 47,
  sym__text_attr_key = 48,
  anon_sym_source_DASHarrowhead = 49,
  anon_sym_target_DASHarrowhead = 50,
  sym_keyword_underscore = 51,
  sym_keyword_classes = 52,
  sym_keyword_class = 53,
  sym_keyword_style = 54,
  sym__dash = 55,
  sym_colon = 56,
  sym_arrow = 57,
  sym_dot = 58,
  aux_sym__unquoted_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_DQUOTE = 61,
  sym__unescaped_single_string_fragment = 62,
  sym__unescaped_double_string_fragment = 63,
  sym_escape_sequence = 64,
  anon_sym_true = 65,
  anon_sym_false = 66,
  sym_integer = 67,
  sym_float = 68,
  sym_line_comment = 69,
  sym__eol = 70,
  anon_sym_SEMI = 71,
  sym__text_block_start = 72,
  sym__text_block_end = 73,
  sym__text_block_raw_text = 74,
  sym_block_comment = 75,
  sym_source_file = 76,
  sym__root_definition = 77,
  sym_connection = 78,
  sym__referencing_full_connection_path = 79,
  sym__referencing_end = 80,
  sym_index = 81,
  sym__full_connection_path = 82,
  sym__connection_path = 83,
  sym__connection_block = 84,
  sym_classes = 85,
  sym__classes_block = 86,
  sym__classes_item = 87,
  sym__classes_item_block = 88,
  sym__classes_item_attribute = 89,
  sym_container = 90,
  sym__container_block = 91,
  sym__container_block_definition = 92,
  sym_shape = 93,
  sym_shape_key = 94,
  sym__identifier = 95,
  sym_text_block = 96,
  sym__text_block_attrs = 97,
  sym__root_attribute = 98,
  sym__root_attr_key = 99,
  sym__shape_attribute = 100,
  sym__class_attribute = 101,
  sym_class_list = 102,
  sym__class_name = 103,
  sym__base_shape_attribute = 104,
  sym__shape_attr_key = 105,
  sym__shape_list_attr_key = 106,
  sym__style_attribute = 107,
  sym__style_attribute_block = 108,
  sym__inner_style_attribute = 109,
  sym__grid_attr_key = 110,
  sym__style_attr_key = 111,
  sym__common_style_attr_key = 112,
  sym__text_shape_attribute = 113,
  sym__connection_attribute = 114,
  sym__connection_arrowhead_attribute = 115,
  sym__connection_arrowhead_attr_key = 116,
  sym_label = 117,
  sym_attr_value_list = 118,
  sym_attr_value = 119,
  aux_sym__unquoted_string = 120,
  sym_string = 121,
  sym_boolean = 122,
  sym__end = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym__full_connection_path_repeat1 = 125,
  aux_sym__connection_path_repeat1 = 126,
  aux_sym__connection_block_repeat1 = 127,
  aux_sym__classes_block_repeat1 = 128,
  aux_sym__classes_item_block_repeat1 = 129,
  aux_sym__container_block_repeat1 = 130,
  aux_sym__identifier_repeat1 = 131,
  aux_sym__text_block_attrs_repeat1 = 132,
  aux_sym_class_list_repeat1 = 133,
  aux_sym__style_attribute_block_repeat1 = 134,
  aux_sym_attr_value_list_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
  alias_sym_class_name = 137,
  alias_sym_container_key = 138,
  alias_sym_reserved = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [anon_sym_RPAREN2] = ")",
  [aux_sym__identifier_token4] = "_identifier_token4",
  [aux_sym_text_block_token1] = "text_block_token1",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_link] = "link",
  [anon_sym_tooltip] = "tooltip",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_vertical_DASHgap] = "vertical-gap",
  [anon_sym_horizontal_DASHgap] = "horizontal-gap",
  [anon_sym_grid_DASHgap] = "grid-gap",
  [anon_sym_grid_DASHcolumns] = "grid-columns",
  [anon_sym_grid_DASHrows] = "grid-rows",
  [anon_sym_3d] = "3d",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_fill_DASHpattern] = "fill-pattern",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_double_DASHborder] = "double-border",
  [anon_sym_font] = "font",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [anon_sym_text_DASHtransform] = "text-transform",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym_keyword_underscore] = "keyword_underscore",
  [sym_keyword_classes] = "keyword_classes",
  [sym_keyword_class] = "keyword_class",
  [sym_keyword_style] = "keyword_style",
  [sym__dash] = "_dash",
  [sym_colon] = "colon",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__referencing_full_connection_path] = "referencing",
  [sym__referencing_end] = "_referencing_end",
  [sym_index] = "index",
  [sym__full_connection_path] = "_full_connection_path",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym_classes] = "classes",
  [sym__classes_block] = "block",
  [sym__classes_item] = "_classes_item",
  [sym__classes_item_block] = "class_block",
  [sym__classes_item_attribute] = "_classes_item_attribute",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
  [sym__text_block_attrs] = "block",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__class_attribute] = "attribute",
  [sym_class_list] = "class_list",
  [sym__class_name] = "_class_name",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__shape_list_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__grid_attr_key] = "_grid_attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__text_shape_attribute] = "attribute",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value_list] = "attr_value_list",
  [sym_attr_value] = "attr_value",
  [aux_sym__unquoted_string] = "_unquoted_string",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__full_connection_path_repeat1] = "_full_connection_path_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__classes_block_repeat1] = "_classes_block_repeat1",
  [aux_sym__classes_item_block_repeat1] = "_classes_item_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__text_block_attrs_repeat1] = "_text_block_attrs_repeat1",
  [aux_sym_class_list_repeat1] = "class_list_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_attr_value_list_repeat1] = "attr_value_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_container_key] = "container_key",
  [alias_sym_reserved] = "reserved",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [aux_sym__identifier_token4] = aux_sym__identifier_token4,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_tooltip] = anon_sym_tooltip,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_vertical_DASHgap] = anon_sym_vertical_DASHgap,
  [anon_sym_horizontal_DASHgap] = anon_sym_horizontal_DASHgap,
  [anon_sym_grid_DASHgap] = anon_sym_grid_DASHgap,
  [anon_sym_grid_DASHcolumns] = anon_sym_grid_DASHcolumns,
  [anon_sym_grid_DASHrows] = anon_sym_grid_DASHrows,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_fill_DASHpattern] = anon_sym_fill_DASHpattern,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_double_DASHborder] = anon_sym_double_DASHborder,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_text_DASHtransform] = anon_sym_text_DASHtransform,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym_keyword_underscore] = sym_keyword_underscore,
  [sym_keyword_classes] = sym_keyword_classes,
  [sym_keyword_class] = sym_keyword_class,
  [sym_keyword_style] = sym_keyword_style,
  [sym__dash] = sym__dash,
  [sym_colon] = sym_colon,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__referencing_full_connection_path] = sym__referencing_full_connection_path,
  [sym__referencing_end] = sym__referencing_end,
  [sym_index] = sym_index,
  [sym__full_connection_path] = sym__full_connection_path,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym_classes] = sym_classes,
  [sym__classes_block] = sym__connection_block,
  [sym__classes_item] = sym__classes_item,
  [sym__classes_item_block] = sym__classes_item_block,
  [sym__classes_item_attribute] = sym__classes_item_attribute,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
  [sym__text_block_attrs] = sym__connection_block,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = sym__root_attr_key,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__class_attribute] = sym__root_attribute,
  [sym_class_list] = sym_class_list,
  [sym__class_name] = sym__class_name,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__shape_list_attr_key] = sym__root_attr_key,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__grid_attr_key] = sym__grid_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__text_shape_attribute] = sym__root_attribute,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = sym__root_attr_key,
  [sym_label] = sym_label,
  [sym_attr_value_list] = sym_attr_value_list,
  [sym_attr_value] = sym_attr_value,
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__full_connection_path_repeat1] = aux_sym__full_connection_path_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__classes_block_repeat1] = aux_sym__classes_block_repeat1,
  [aux_sym__classes_item_block_repeat1] = aux_sym__classes_item_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__text_block_attrs_repeat1] = aux_sym__text_block_attrs_repeat1,
  [aux_sym_class_list_repeat1] = aux_sym_class_list_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_attr_value_list_repeat1] = aux_sym_attr_value_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_container_key] = alias_sym_container_key,
  [alias_sym_reserved] = alias_sym_reserved,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHcolumns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHrows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill_DASHpattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double_DASHborder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text_DASHtransform] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_classes] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_class] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_style] = {
    .visible = true,
    .named = true,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__referencing_full_connection_path] = {
    .visible = true,
    .named = true,
  },
  [sym__referencing_end] = {
    .visible = false,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym__full_connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym_classes] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item] = {
    .visible = false,
    .named = true,
  },
  [sym__classes_item_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_block_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__class_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_class_list] = {
    .visible = true,
    .named = true,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_list_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__grid_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__text_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__unquoted_string] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__full_connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classes_item_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_block_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reserved] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_reserved,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
  [3] = {
    [0] = alias_sym_class_name,
  },
  [4] = {
    [0] = sym__root_attr_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 3,
    sym_shape_key,
    alias_sym_class_name,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    alias_sym_reserved,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 9,
  [12] = 9,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 26,
  [27] = 26,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 36,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 44,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 55,
  [63] = 60,
  [64] = 54,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 54,
  [69] = 61,
  [70] = 65,
  [71] = 55,
  [72] = 67,
  [73] = 60,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 35,
  [87] = 36,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 79,
  [95] = 78,
  [96] = 84,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 102,
  [116] = 116,
  [117] = 112,
  [118] = 116,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 119,
  [123] = 123,
  [124] = 120,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 116,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 129,
  [133] = 126,
  [134] = 134,
  [135] = 135,
  [136] = 116,
  [137] = 116,
  [138] = 120,
  [139] = 121,
  [140] = 140,
  [141] = 141,
  [142] = 119,
  [143] = 143,
  [144] = 116,
  [145] = 112,
  [146] = 146,
  [147] = 126,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 129,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 116,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 103,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 108,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 252,
  [254] = 254,
  [255] = 252,
  [256] = 251,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 254,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 272,
  [278] = 271,
  [279] = 279,
  [280] = 276,
  [281] = 269,
  [282] = 272,
  [283] = 271,
  [284] = 284,
  [285] = 276,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\f'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\t'}, {0x0b, '\f'}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange aux_sym__identifier_token3_character_set_1[] = {
  {' ', ' '}, {'"', '"'}, {'$', '$'}, {'\'', '('}, {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        ')', 271,
        '-', 349,
        '.', 356,
        ':', 353,
        ';', 394,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 291,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 282,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 281,
        'u', 295,
        'v', 284,
        'w', 290,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 2,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 351,
        '.', 356,
        ':', 353,
        ';', 394,
        '<', 26,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(2);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 2,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 28,
        '.', 356,
        ':', 353,
        ';', 394,
        '<', 26,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(2);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 4,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 352,
        '.', 356,
        ':', 353,
        ';', 394,
        '\\', 244,
        ']', 273,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(4);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 4,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 265,
        '.', 356,
        ':', 353,
        ';', 394,
        '\\', 244,
        ']', 273,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(4);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '#', 392,
        ')', 271,
        '-', 350,
        '.', 356,
        '3', 74,
        ':', 353,
        ';', 394,
        '<', 26,
        ']', 273,
        'a', 154,
        'b', 167,
        'd', 168,
        'f', 117,
        'i', 229,
        'l', 123,
        'm', 245,
        'o', 187,
        's', 114,
        't', 54,
        'u', 155,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(7);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '#', 392,
        ')', 271,
        '-', 27,
        '.', 356,
        '3', 74,
        ':', 353,
        ';', 394,
        '<', 26,
        ']', 273,
        'a', 154,
        'b', 167,
        'd', 168,
        'f', 117,
        'i', 229,
        'l', 123,
        'm', 245,
        'o', 187,
        's', 114,
        't', 54,
        'u', 155,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(7);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        '\\', 244,
        '_', 344,
        'c', 293,
        'd', 287,
        'g', 300,
        'h', 282,
        'i', 278,
        'l', 277,
        'n', 283,
        's', 286,
        't', 298,
        'v', 284,
        'w', 290,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(11);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(13);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        '\\', 244,
        ']', 273,
        'f', 369,
        't', 373,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == ']') ADVANCE(273);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(16);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(17);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '}') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(18);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(244);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(383);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(306);
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(381);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 250:
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 253:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 254:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 257:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 258:
      if (lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 259:
      if (lookahead == '{') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 260:
      if (lookahead == '}') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 265:
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        ')', 271,
        '.', 356,
        ':', 353,
        ';', 394,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 291,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 282,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 281,
        'u', 295,
        'v', 284,
        'w', 290,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        '\\', 244,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 292,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 297,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 280,
        'u', 295,
        'v', 284,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if ((set_contains(aux_sym__identifier_token3_character_set_1, 9, lookahead) ||
          lookahead == ',') &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '`', 377,
        '|', 377,
        '\t', 357,
        0x0b, 357,
        '\f', 357,
        ' ', 357,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '\t', 358,
        0x0b, 358,
        '\f', 358,
        ' ', 358,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '\t', 359,
        0x0b, 359,
        '\f', 359,
        ' ', 359,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
        '`', 377,
        '|', 377,
        '\t', 360,
        0x0b, 360,
        '\f', 360,
        ' ', 360,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '`', 377,
        '|', 377,
        '\t', 361,
        0x0b, 361,
        '\f', 361,
        ' ', 361,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        '[', 272,
        '\\', 244,
        'f', 369,
        't', 373,
        '`', 377,
        '|', 377,
        '\t', 362,
        0x0b, 362,
        '\f', 362,
        ' ', 362,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        '\\', 244,
        ']', 273,
        'f', 369,
        't', 373,
        '`', 377,
        '|', 377,
        '\t', 363,
        0x0b, 363,
        '\f', 363,
        ' ', 363,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        ']', 273,
        '\t', 364,
        0x0b, 364,
        '\f', 364,
        ' ', 364,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
        '\t', 365,
        0x0b, 365,
        '\f', 365,
        ' ', 365,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '\t', 366,
        0x0b, 366,
        '\f', 366,
        ' ', 366,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '}', 275,
        '\t', 367,
        0x0b, 367,
        '\f', 367,
        ' ', 367,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '\t', 368,
        0x0b, 368,
        '\f', 368,
        ' ', 368,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(381);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(383);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 267, .external_lex_state = 2},
  [2] = {.lex_state = 267, .external_lex_state = 2},
  [3] = {.lex_state = 267, .external_lex_state = 2},
  [4] = {.lex_state = 10, .external_lex_state = 2},
  [5] = {.lex_state = 10, .external_lex_state = 2},
  [6] = {.lex_state = 10, .external_lex_state = 2},
  [7] = {.lex_state = 267, .external_lex_state = 2},
  [8] = {.lex_state = 10, .external_lex_state = 2},
  [9] = {.lex_state = 10, .external_lex_state = 2},
  [10] = {.lex_state = 10, .external_lex_state = 2},
  [11] = {.lex_state = 10, .external_lex_state = 2},
  [12] = {.lex_state = 10, .external_lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 10, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 10, .external_lex_state = 2},
  [24] = {.lex_state = 10, .external_lex_state = 2},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 2},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 2},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 6, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 3, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 14, .external_lex_state = 2},
  [42] = {.lex_state = 14, .external_lex_state = 2},
  [43] = {.lex_state = 14, .external_lex_state = 2},
  [44] = {.lex_state = 5, .external_lex_state = 3},
  [45] = {.lex_state = 20, .external_lex_state = 2},
  [46] = {.lex_state = 20, .external_lex_state = 2},
  [47] = {.lex_state = 12, .external_lex_state = 3},
  [48] = {.lex_state = 20, .external_lex_state = 2},
  [49] = {.lex_state = 11, .external_lex_state = 2},
  [50] = {.lex_state = 11, .external_lex_state = 2},
  [51] = {.lex_state = 11, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 3},
  [53] = {.lex_state = 5, .external_lex_state = 2},
  [54] = {.lex_state = 20, .external_lex_state = 2},
  [55] = {.lex_state = 12, .external_lex_state = 2},
  [56] = {.lex_state = 11, .external_lex_state = 2},
  [57] = {.lex_state = 11, .external_lex_state = 2},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 11, .external_lex_state = 2},
  [60] = {.lex_state = 5, .external_lex_state = 2},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 12, .external_lex_state = 2},
  [64] = {.lex_state = 20, .external_lex_state = 2},
  [65] = {.lex_state = 20, .external_lex_state = 2},
  [66] = {.lex_state = 20, .external_lex_state = 2},
  [67] = {.lex_state = 12, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 2},
  [70] = {.lex_state = 20, .external_lex_state = 2},
  [71] = {.lex_state = 13, .external_lex_state = 2},
  [72] = {.lex_state = 13, .external_lex_state = 2},
  [73] = {.lex_state = 13, .external_lex_state = 2},
  [74] = {.lex_state = 11, .external_lex_state = 2},
  [75] = {.lex_state = 11, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 11, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 14, .external_lex_state = 2},
  [84] = {.lex_state = 6, .external_lex_state = 2},
  [85] = {.lex_state = 11, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 14, .external_lex_state = 2},
  [91] = {.lex_state = 6, .external_lex_state = 2},
  [92] = {.lex_state = 6, .external_lex_state = 2},
  [93] = {.lex_state = 14, .external_lex_state = 2},
  [94] = {.lex_state = 11, .external_lex_state = 2},
  [95] = {.lex_state = 3, .external_lex_state = 2},
  [96] = {.lex_state = 3, .external_lex_state = 2},
  [97] = {.lex_state = 11, .external_lex_state = 2},
  [98] = {.lex_state = 6, .external_lex_state = 2},
  [99] = {.lex_state = 6, .external_lex_state = 2},
  [100] = {.lex_state = 11, .external_lex_state = 2},
  [101] = {.lex_state = 11, .external_lex_state = 2},
  [102] = {.lex_state = 6, .external_lex_state = 2},
  [103] = {.lex_state = 6, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 6, .external_lex_state = 2},
  [107] = {.lex_state = 6, .external_lex_state = 2},
  [108] = {.lex_state = 6, .external_lex_state = 2},
  [109] = {.lex_state = 11, .external_lex_state = 2},
  [110] = {.lex_state = 11, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 11, .external_lex_state = 2},
  [114] = {.lex_state = 11, .external_lex_state = 2},
  [115] = {.lex_state = 6, .external_lex_state = 2},
  [116] = {.lex_state = 8, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 16, .external_lex_state = 2},
  [119] = {.lex_state = 16, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 8, .external_lex_state = 2},
  [123] = {.lex_state = 11, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 11, .external_lex_state = 2},
  [126] = {.lex_state = 18, .external_lex_state = 2},
  [127] = {.lex_state = 15, .external_lex_state = 2},
  [128] = {.lex_state = 17, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 15, .external_lex_state = 2},
  [137] = {.lex_state = 9, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 17, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 18, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 19, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 6, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 11, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 6, .external_lex_state = 2},
  [158] = {.lex_state = 6, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 19, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 21, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 21, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 21, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 6, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 6, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 6, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 6, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 22, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 23, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 22, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 5},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 24, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_vertical_DASHgap] = ACTIONS(1),
    [anon_sym_horizontal_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHcolumns] = ACTIONS(1),
    [anon_sym_grid_DASHrows] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_fill_DASHpattern] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_double_DASHborder] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_text_DASHtransform] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym_keyword_underscore] = ACTIONS(1),
    [sym_keyword_classes] = ACTIONS(1),
    [sym_keyword_class] = ACTIONS(1),
    [sym_keyword_style] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(262),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(169),
    [sym__referencing_full_connection_path] = STATE(129),
    [sym__full_connection_path] = STATE(129),
    [sym__connection_path] = STATE(256),
    [sym_classes] = STATE(169),
    [sym_container] = STATE(169),
    [sym_shape] = STATE(169),
    [sym_shape_key] = STATE(102),
    [sym__identifier] = STATE(92),
    [sym__root_attribute] = STATE(169),
    [sym__root_attr_key] = STATE(273),
    [sym__grid_attr_key] = STATE(275),
    [sym__common_style_attr_key] = STATE(287),
    [sym_string] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(15),
    [anon_sym_vertical_DASHgap] = ACTIONS(11),
    [anon_sym_horizontal_DASHgap] = ACTIONS(11),
    [anon_sym_grid_DASHgap] = ACTIONS(11),
    [anon_sym_grid_DASHcolumns] = ACTIONS(11),
    [anon_sym_grid_DASHrows] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(17),
    [anon_sym_fill_DASHpattern] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(17),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_double_DASHborder] = ACTIONS(15),
    [anon_sym_font] = ACTIONS(17),
    [anon_sym_font_DASHsize] = ACTIONS(15),
    [anon_sym_font_DASHcolor] = ACTIONS(15),
    [anon_sym_shadow] = ACTIONS(15),
    [anon_sym_multiple] = ACTIONS(15),
    [anon_sym_animated] = ACTIONS(15),
    [anon_sym_italic] = ACTIONS(15),
    [anon_sym_bold] = ACTIONS(15),
    [anon_sym_underline] = ACTIONS(15),
    [anon_sym_text_DASHtransform] = ACTIONS(15),
    [sym__text_attr_key] = ACTIONS(13),
    [sym_keyword_underscore] = ACTIONS(19),
    [sym_keyword_classes] = ACTIONS(21),
    [sym_keyword_style] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(29),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      sym_keyword_classes,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__eol,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(102), 1,
      sym_shape_key,
    STATE(256), 1,
      sym__connection_path,
    STATE(273), 1,
      sym__root_attr_key,
    STATE(275), 1,
      sym__grid_attr_key,
    STATE(287), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(129), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(169), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(11), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(13), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [108] = 24,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      aux_sym__identifier_token1,
    ACTIONS(55), 1,
      sym_keyword_underscore,
    ACTIONS(58), 1,
      sym_keyword_classes,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_escape_sequence,
    ACTIONS(70), 1,
      sym__eol,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(102), 1,
      sym_shape_key,
    STATE(256), 1,
      sym__connection_path,
    STATE(273), 1,
      sym__root_attr_key,
    STATE(275), 1,
      sym__grid_attr_key,
    STATE(287), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(129), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    ACTIONS(52), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(169), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(43), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(46), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(49), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [216] = 23,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      aux_sym__identifier_token1,
    ACTIONS(84), 1,
      anon_sym_constraint,
    ACTIONS(87), 1,
      sym_keyword_underscore,
    ACTIONS(90), 1,
      sym_keyword_class,
    ACTIONS(93), 1,
      sym_keyword_style,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_escape_sequence,
    ACTIONS(105), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__container_block_repeat1,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(115), 1,
      sym_shape_key,
    STATE(256), 1,
      sym__connection_path,
    STATE(282), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(151), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(246), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(81), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [309] = 23,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(118), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(106), 1,
      sym_shape_key,
    STATE(256), 1,
      sym__connection_path,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(132), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(200), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [402] = 23,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__container_block_repeat1,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(106), 1,
      sym_shape_key,
    STATE(256), 1,
      sym__connection_path,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(132), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(218), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [495] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(126), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(124), 36,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_classes,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [544] = 17,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(128), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 1,
      sym_keyword_underscore,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(117), 1,
      sym_shape_key,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [615] = 17,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(145), 1,
      sym_keyword_style,
    ACTIONS(147), 1,
      sym_escape_sequence,
    STATE(112), 1,
      sym_shape_key,
    STATE(277), 1,
      sym__shape_attr_key,
    STATE(278), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [686] = 17,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(128), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 1,
      sym_keyword_underscore,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_keyword_style,
    STATE(145), 1,
      sym_shape_key,
    STATE(282), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [757] = 17,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_keyword_style,
    STATE(145), 1,
      sym_shape_key,
    STATE(282), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [828] = 17,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    STATE(117), 1,
      sym_shape_key,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [899] = 17,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(128), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 1,
      sym_keyword_underscore,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(145), 1,
      sym_keyword_style,
    STATE(112), 1,
      sym_shape_key,
    STATE(277), 1,
      sym__shape_attr_key,
    STATE(278), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(203), 2,
      sym_container,
      sym_shape,
    STATE(204), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [970] = 10,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_3d,
    ACTIONS(155), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(192), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(276), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1019] = 10,
    ACTIONS(153), 1,
      anon_sym_3d,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(166), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(276), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1068] = 10,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_3d,
    ACTIONS(172), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(235), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(285), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(163), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1117] = 11,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      sym__eol,
    STATE(22), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(217), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1167] = 11,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_constraint,
    ACTIONS(187), 1,
      sym_keyword_style,
    ACTIONS(190), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(282), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(226), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(181), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1217] = 3,
    ACTIONS(193), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 24,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1251] = 4,
    ACTIONS(193), 1,
      aux_sym__identifier_token1,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 23,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1287] = 4,
    ACTIONS(193), 1,
      aux_sym__identifier_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 23,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1323] = 11,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(224), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1373] = 9,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(116), 1,
      sym_keyword_style,
    STATE(271), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(216), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1418] = 9,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(145), 1,
      sym_keyword_style,
    STATE(277), 1,
      sym__shape_attr_key,
    STATE(278), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(216), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1463] = 9,
    ACTIONS(112), 1,
      anon_sym_constraint,
    ACTIONS(114), 1,
      sym_keyword_class,
    ACTIONS(149), 1,
      sym_keyword_style,
    STATE(282), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__shape_list_attr_key,
    STATE(288), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(216), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(110), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
  [1508] = 7,
    ACTIONS(153), 1,
      anon_sym_3d,
    STATE(211), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(276), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1548] = 7,
    ACTIONS(153), 1,
      anon_sym_3d,
    STATE(211), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(280), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1588] = 7,
    ACTIONS(153), 1,
      anon_sym_3d,
    STATE(211), 1,
      sym__inner_style_attribute,
    STATE(270), 1,
      sym__common_style_attr_key,
    STATE(285), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1628] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(161), 19,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      sym__eol,
  [1659] = 4,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(161), 18,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      sym__eol,
  [1692] = 4,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(161), 18,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      sym__eol,
  [1725] = 3,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 17,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1752] = 3,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 17,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1779] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 18,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1804] = 8,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      aux_sym__identifier_token4,
    ACTIONS(229), 1,
      sym__dash,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(223), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(225), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(219), 8,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1839] = 8,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      aux_sym__identifier_token4,
    ACTIONS(241), 1,
      sym__dash,
    STATE(37), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(235), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(237), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(231), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1874] = 8,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      aux_sym__identifier_token4,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(247), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(219), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1909] = 8,
    ACTIONS(241), 1,
      sym__dash,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym__identifier_token4,
    STATE(35), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(255), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(231), 8,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1944] = 6,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(261), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(264), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(267), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(259), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1975] = 6,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(267), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(269), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(272), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(259), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2006] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym__eol,
    STATE(43), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(127), 1,
      aux_sym__unquoted_string,
    STATE(176), 1,
      sym_attr_value,
    ACTIONS(277), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2050] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(147), 1,
      aux_sym__unquoted_string,
    STATE(231), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(305), 2,
      sym_integer,
      sym_float,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2094] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(127), 1,
      aux_sym__unquoted_string,
    STATE(201), 1,
      sym_attr_value,
    ACTIONS(277), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2138] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      sym__text_block_start,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(131), 1,
      sym_text_block,
    STATE(140), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(203), 1,
      sym__container_block,
    ACTIONS(319), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(315), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [2181] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      aux_sym__unquoted_string,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(325), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
    STATE(191), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2220] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      aux_sym__unquoted_string,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(327), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
    STATE(191), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2259] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      sym__text_block_start,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(131), 1,
      sym_text_block,
    STATE(140), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(203), 1,
      sym__container_block,
    ACTIONS(329), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2302] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      aux_sym__unquoted_string,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(331), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
    STATE(191), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2341] = 13,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      sym__eol,
    STATE(50), 1,
      aux_sym__classes_block_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(120), 1,
      sym__class_name,
    STATE(182), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2383] = 13,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      sym__eol,
    STATE(51), 1,
      aux_sym__classes_block_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(120), 1,
      sym__class_name,
    STATE(207), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2425] = 13,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      aux_sym__identifier_token1,
    ACTIONS(346), 1,
      sym_keyword_underscore,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      sym_escape_sequence,
    ACTIONS(358), 1,
      sym__eol,
    STATE(51), 1,
      aux_sym__classes_block_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(138), 1,
      sym__class_name,
    STATE(237), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2467] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      sym__text_block_start,
    STATE(131), 1,
      sym_text_block,
    STATE(140), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(203), 1,
      sym__container_block,
    ACTIONS(315), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [2509] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(160), 1,
      sym_label,
    STATE(240), 1,
      sym__classes_block,
    ACTIONS(319), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(363), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [2546] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(191), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(327), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2581] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(130), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(189), 1,
      sym__connection_block,
    ACTIONS(329), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(369), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2618] = 12,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 1,
      sym__eol,
    STATE(59), 1,
      aux_sym_class_list_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(197), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2657] = 12,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    ACTIONS(377), 1,
      sym__eol,
    STATE(56), 1,
      aux_sym_class_list_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(173), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2696] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(247), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(331), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2731] = 12,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    ACTIONS(381), 1,
      aux_sym__identifier_token1,
    ACTIONS(384), 1,
      sym_keyword_underscore,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      sym_escape_sequence,
    ACTIONS(396), 1,
      sym__eol,
    STATE(59), 1,
      aux_sym_class_list_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [2770] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(135), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(216), 1,
      sym__classes_item_block,
    ACTIONS(319), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(399), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [2807] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(194), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(331), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2842] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(130), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(189), 1,
      sym__connection_block,
    ACTIONS(319), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(369), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [2879] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(135), 1,
      sym_label,
    STATE(146), 1,
      sym_string,
    STATE(216), 1,
      sym__classes_item_block,
    ACTIONS(329), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(399), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2916] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(147), 1,
      aux_sym__unquoted_string,
    STATE(191), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(325), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2951] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(147), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(325), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [2986] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(147), 1,
      aux_sym__unquoted_string,
    STATE(194), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(325), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [3021] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(159), 1,
      sym_label,
    STATE(227), 1,
      sym__container_block,
    ACTIONS(329), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(403), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3058] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(191), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(331), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [3093] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(194), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(327), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [3128] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_float,
    ACTIONS(327), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_string,
      sym_boolean,
  [3163] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(189), 1,
      sym__connection_block,
    ACTIONS(361), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(369), 2,
      sym__eol,
      anon_sym_SEMI,
  [3199] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(159), 1,
      sym_label,
    STATE(227), 1,
      sym__container_block,
    ACTIONS(361), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(403), 2,
      sym__eol,
      anon_sym_SEMI,
  [3235] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_string,
    STATE(216), 1,
      sym__classes_item_block,
    ACTIONS(361), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(399), 2,
      sym__eol,
      anon_sym_SEMI,
  [3271] = 11,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(251), 1,
      sym__connection_path,
    STATE(257), 1,
      sym__full_connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3307] = 10,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_class_list,
      sym__class_name,
  [3341] = 8,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      sym__eol,
    STATE(91), 1,
      aux_sym__connection_block_repeat1,
    STATE(121), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(188), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3370] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3387] = 3,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3406] = 10,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym__identifier_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    STATE(98), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(107), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3439] = 8,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      sym_keyword_style,
    ACTIONS(427), 1,
      sym__eol,
    STATE(80), 1,
      aux_sym__connection_block_repeat1,
    STATE(139), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(250), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3468] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3485] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3502] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3523] = 3,
    ACTIONS(435), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3542] = 10,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 1,
      sym_escape_sequence,
    STATE(105), 1,
      sym_shape_key,
    STATE(124), 1,
      sym__class_name,
    STATE(240), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3575] = 8,
    ACTIONS(227), 1,
      aux_sym__identifier_token4,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 2,
      sym_arrow,
      sym_dot,
    ACTIONS(223), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(225), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
  [3604] = 8,
    ACTIONS(241), 1,
      sym__dash,
    ACTIONS(257), 1,
      aux_sym__identifier_token4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(231), 2,
      sym_arrow,
      sym_dot,
    ACTIONS(443), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(445), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
  [3633] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(291), 10,
      anon_sym_RBRACK,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3686] = 8,
    ACTIONS(116), 1,
      sym_keyword_style,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      sym__eol,
    STATE(80), 1,
      aux_sym__connection_block_repeat1,
    STATE(121), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(212), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3715] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3732] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3753] = 10,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(107), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3786] = 3,
    ACTIONS(460), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3804] = 3,
    ACTIONS(462), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3822] = 9,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_escape_sequence,
    STATE(99), 1,
      sym_shape_key,
    STATE(100), 1,
      aux_sym__connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3852] = 3,
    ACTIONS(466), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(464), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3870] = 3,
    ACTIONS(466), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(468), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3888] = 9,
    ACTIONS(470), 1,
      aux_sym__identifier_token1,
    ACTIONS(473), 1,
      sym_keyword_underscore,
    ACTIONS(476), 1,
      anon_sym_SQUOTE,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym__connection_path_repeat1,
    STATE(265), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3918] = 9,
    ACTIONS(19), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym__identifier_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    STATE(99), 1,
      sym_shape_key,
    STATE(100), 1,
      aux_sym__connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(92), 2,
      sym__identifier,
      sym_string,
  [3948] = 7,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      sym_colon,
    ACTIONS(491), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [3973] = 4,
    ACTIONS(495), 1,
      sym_arrow,
    STATE(108), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(493), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym__eol,
      anon_sym_SEMI,
  [3992] = 4,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym__eol,
      anon_sym_SEMI,
  [4011] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(501), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4026] = 7,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      sym_colon,
    ACTIONS(505), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4051] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4066] = 4,
    ACTIONS(509), 1,
      sym_arrow,
    STATE(108), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym__eol,
      anon_sym_SEMI,
  [4085] = 4,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    ACTIONS(515), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4103] = 3,
    ACTIONS(515), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4119] = 6,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      sym_colon,
    ACTIONS(523), 1,
      sym_dot,
    STATE(234), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(517), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4141] = 6,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      sym_colon,
    ACTIONS(525), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4163] = 3,
    ACTIONS(527), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4179] = 4,
    ACTIONS(527), 1,
      aux_sym__identifier_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4197] = 7,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      sym_colon,
    ACTIONS(534), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 2,
      sym__eol,
      anon_sym_SEMI,
  [4221] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(116), 1,
      aux_sym__unquoted_string,
    ACTIONS(538), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 4,
      anon_sym_NULL,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4241] = 6,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      sym_colon,
    ACTIONS(541), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4263] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(118), 1,
      aux_sym__unquoted_string,
    ACTIONS(543), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4283] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(118), 1,
      aux_sym__unquoted_string,
    ACTIONS(548), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(546), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4303] = 6,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_colon,
    ACTIONS(556), 1,
      sym_dot,
    STATE(206), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4325] = 6,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      sym_colon,
    ACTIONS(562), 1,
      sym_dot,
    STATE(236), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(558), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4347] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(116), 1,
      aux_sym__unquoted_string,
    ACTIONS(564), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(546), 4,
      anon_sym_NULL,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4367] = 4,
    ACTIONS(527), 1,
      aux_sym__identifier_token1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4385] = 6,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      sym_colon,
    ACTIONS(571), 1,
      sym_dot,
    STATE(206), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4407] = 4,
    ACTIONS(515), 1,
      aux_sym__identifier_token1,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4425] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(144), 1,
      aux_sym__unquoted_string,
    ACTIONS(578), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(576), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4444] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(136), 1,
      aux_sym__unquoted_string,
    ACTIONS(580), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(576), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4463] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(582), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4482] = 5,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      sym_colon,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4501] = 4,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4518] = 4,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4535] = 5,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_colon,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4554] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(599), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(576), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4573] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(601), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4586] = 4,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4603] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(136), 1,
      aux_sym__unquoted_string,
    ACTIONS(605), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4622] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(608), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [4641] = 6,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_colon,
    ACTIONS(613), 1,
      sym_dot,
    STATE(206), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 2,
      sym__eol,
      anon_sym_SEMI,
  [4662] = 6,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_colon,
    ACTIONS(617), 1,
      sym_dot,
    STATE(236), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(558), 2,
      sym__eol,
      anon_sym_SEMI,
  [4683] = 4,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4700] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(619), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym__eol,
      anon_sym_SEMI,
  [4713] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(621), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(546), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4732] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(623), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym__eol,
      anon_sym_SEMI,
  [4745] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(144), 1,
      aux_sym__unquoted_string,
    ACTIONS(625), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(536), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4764] = 6,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      sym_colon,
    ACTIONS(628), 1,
      sym_dot,
    STATE(181), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 2,
      sym__eol,
      anon_sym_SEMI,
  [4785] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(630), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4797] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(162), 1,
      aux_sym__unquoted_string,
    ACTIONS(576), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(632), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [4815] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(634), 5,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4827] = 3,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4841] = 6,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      sym__text_attr_key,
    ACTIONS(644), 1,
      sym__eol,
    STATE(150), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(242), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4861] = 5,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_colon,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 2,
      sym__eol,
      anon_sym_SEMI,
  [4879] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(649), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4891] = 6,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 1,
      sym__text_attr_key,
    ACTIONS(655), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(177), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4911] = 3,
    ACTIONS(657), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(659), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4925] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(661), 5,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4937] = 6,
    ACTIONS(653), 1,
      sym__text_attr_key,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      sym__eol,
    STATE(150), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(185), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4957] = 3,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4971] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4983] = 4,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4999] = 4,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(672), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5015] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(674), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5027] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    STATE(162), 1,
      aux_sym__unquoted_string,
    ACTIONS(536), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(676), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [5045] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(679), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(681), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5067] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(683), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5078] = 4,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(685), 2,
      sym__eol,
      anon_sym_SEMI,
  [5093] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5104] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(693), 1,
      sym_escape_sequence,
    STATE(171), 1,
      aux_sym_string_repeat1,
  [5123] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5136] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(697), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5147] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(703), 1,
      sym_escape_sequence,
    STATE(184), 1,
      aux_sym_string_repeat1,
  [5166] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(705), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5177] = 4,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(707), 2,
      sym__eol,
      anon_sym_SEMI,
  [5192] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(709), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5203] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(711), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5214] = 4,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(715), 2,
      sym__eol,
      anon_sym_SEMI,
  [5229] = 4,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(717), 2,
      sym__eol,
      anon_sym_SEMI,
  [5244] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(719), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5255] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5266] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5277] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5288] = 4,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(727), 2,
      sym__eol,
      anon_sym_SEMI,
  [5303] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(729), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5314] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    ACTIONS(733), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(736), 1,
      sym_escape_sequence,
    STATE(184), 1,
      aux_sym_string_repeat1,
  [5333] = 4,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(741), 2,
      sym__eol,
      anon_sym_SEMI,
  [5348] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(743), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5359] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(745), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5370] = 4,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(747), 2,
      sym__eol,
      anon_sym_SEMI,
  [5385] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5396] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(749), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5407] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(751), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5418] = 4,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(755), 2,
      sym__eol,
      anon_sym_SEMI,
  [5433] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(757), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5444] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(759), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5455] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(761), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5466] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(763), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5477] = 4,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(767), 2,
      sym__eol,
      anon_sym_SEMI,
  [5492] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(769), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5503] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(771), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5514] = 4,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(773), 2,
      sym__eol,
      anon_sym_SEMI,
  [5529] = 4,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(777), 2,
      sym__eol,
      anon_sym_SEMI,
  [5544] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(779), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5555] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(781), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5566] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5577] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(783), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5588] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(785), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5599] = 4,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(789), 2,
      sym__eol,
      anon_sym_SEMI,
  [5614] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(791), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5625] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(793), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5636] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(795), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5647] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(797), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5658] = 4,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(801), 2,
      sym__eol,
      anon_sym_SEMI,
  [5673] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(803), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5684] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(805), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5695] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(807), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5706] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5717] = 4,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(809), 2,
      sym__eol,
      anon_sym_SEMI,
  [5732] = 4,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(813), 2,
      sym__eol,
      anon_sym_SEMI,
  [5747] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(815), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5758] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(817), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5769] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(819), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5780] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(821), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5791] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(823), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5802] = 4,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(827), 2,
      sym__eol,
      anon_sym_SEMI,
  [5817] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(829), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5828] = 3,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(831), 2,
      sym__eol,
      anon_sym_SEMI,
  [5840] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5850] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5860] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(833), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5870] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(835), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5880] = 3,
    STATE(90), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(837), 2,
      sym__eol,
      anon_sym_SEMI,
  [5892] = 3,
    STATE(110), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(839), 2,
      sym__eol,
      anon_sym_SEMI,
  [5904] = 4,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      sym_arrow,
    STATE(238), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5918] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(843), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5928] = 3,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(845), 2,
      sym__eol,
      anon_sym_SEMI,
  [5940] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(847), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5950] = 3,
    STATE(113), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(849), 2,
      sym__eol,
      anon_sym_SEMI,
  [5962] = 4,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      sym_arrow,
    STATE(238), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5976] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(854), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5986] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(672), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [5996] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(856), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [6006] = 3,
    STATE(228), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(858), 2,
      sym__eol,
      anon_sym_SEMI,
  [6018] = 3,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 2,
      sym__text_attr_key,
      sym__eol,
  [6030] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(863), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [6040] = 3,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 2,
      sym__text_attr_key,
      sym__eol,
  [6052] = 3,
    STATE(19), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(868), 2,
      sym__eol,
      anon_sym_SEMI,
  [6064] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(870), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [6074] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(872), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6084] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(874), 3,
      anon_sym_NULL,
      sym__eol,
      anon_sym_SEMI,
  [6094] = 3,
    STATE(158), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(876), 2,
      sym__eol,
      anon_sym_SEMI,
  [6106] = 3,
    ACTIONS(841), 1,
      sym_arrow,
    STATE(233), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6117] = 3,
    ACTIONS(878), 1,
      sym_colon,
    ACTIONS(880), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6128] = 3,
    ACTIONS(878), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6139] = 3,
    ACTIONS(149), 1,
      sym_keyword_style,
    STATE(227), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6150] = 3,
    ACTIONS(878), 1,
      sym_colon,
    ACTIONS(884), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6161] = 3,
    ACTIONS(495), 1,
      sym_arrow,
    STATE(103), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6172] = 3,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym__referencing_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6183] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(888), 1,
      aux_sym_text_block_token1,
    ACTIONS(890), 1,
      sym_language,
  [6196] = 3,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6207] = 3,
    ACTIONS(116), 1,
      sym_keyword_style,
    STATE(227), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6218] = 2,
    ACTIONS(894), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6226] = 2,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6234] = 2,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6242] = 2,
    ACTIONS(900), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6250] = 2,
    ACTIONS(466), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6258] = 2,
    ACTIONS(902), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6266] = 2,
    ACTIONS(904), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6274] = 2,
    ACTIONS(906), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6282] = 2,
    ACTIONS(908), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6290] = 2,
    ACTIONS(910), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6298] = 2,
    ACTIONS(912), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6306] = 2,
    ACTIONS(914), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6314] = 2,
    ACTIONS(916), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6322] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(918), 1,
      aux_sym_text_block_token1,
  [6332] = 2,
    ACTIONS(920), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6340] = 2,
    ACTIONS(922), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6348] = 2,
    ACTIONS(924), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6356] = 2,
    ACTIONS(926), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6364] = 2,
    ACTIONS(928), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6372] = 2,
    ACTIONS(930), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6380] = 2,
    ACTIONS(932), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6388] = 2,
    ACTIONS(934), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6396] = 2,
    ACTIONS(936), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6404] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_line_comment,
    ACTIONS(938), 1,
      sym__unescaped_single_string_fragment,
  [6414] = 2,
    ACTIONS(940), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6422] = 2,
    ACTIONS(942), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6430] = 2,
    ACTIONS(944), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6438] = 2,
    ACTIONS(946), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6446] = 2,
    ACTIONS(948), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6454] = 2,
    ACTIONS(950), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 108,
  [SMALL_STATE(4)] = 216,
  [SMALL_STATE(5)] = 309,
  [SMALL_STATE(6)] = 402,
  [SMALL_STATE(7)] = 495,
  [SMALL_STATE(8)] = 544,
  [SMALL_STATE(9)] = 615,
  [SMALL_STATE(10)] = 686,
  [SMALL_STATE(11)] = 757,
  [SMALL_STATE(12)] = 828,
  [SMALL_STATE(13)] = 899,
  [SMALL_STATE(14)] = 970,
  [SMALL_STATE(15)] = 1019,
  [SMALL_STATE(16)] = 1068,
  [SMALL_STATE(17)] = 1117,
  [SMALL_STATE(18)] = 1167,
  [SMALL_STATE(19)] = 1217,
  [SMALL_STATE(20)] = 1251,
  [SMALL_STATE(21)] = 1287,
  [SMALL_STATE(22)] = 1323,
  [SMALL_STATE(23)] = 1373,
  [SMALL_STATE(24)] = 1418,
  [SMALL_STATE(25)] = 1463,
  [SMALL_STATE(26)] = 1508,
  [SMALL_STATE(27)] = 1548,
  [SMALL_STATE(28)] = 1588,
  [SMALL_STATE(29)] = 1628,
  [SMALL_STATE(30)] = 1659,
  [SMALL_STATE(31)] = 1692,
  [SMALL_STATE(32)] = 1725,
  [SMALL_STATE(33)] = 1752,
  [SMALL_STATE(34)] = 1779,
  [SMALL_STATE(35)] = 1804,
  [SMALL_STATE(36)] = 1839,
  [SMALL_STATE(37)] = 1874,
  [SMALL_STATE(38)] = 1909,
  [SMALL_STATE(39)] = 1944,
  [SMALL_STATE(40)] = 1975,
  [SMALL_STATE(41)] = 2006,
  [SMALL_STATE(42)] = 2050,
  [SMALL_STATE(43)] = 2094,
  [SMALL_STATE(44)] = 2138,
  [SMALL_STATE(45)] = 2181,
  [SMALL_STATE(46)] = 2220,
  [SMALL_STATE(47)] = 2259,
  [SMALL_STATE(48)] = 2302,
  [SMALL_STATE(49)] = 2341,
  [SMALL_STATE(50)] = 2383,
  [SMALL_STATE(51)] = 2425,
  [SMALL_STATE(52)] = 2467,
  [SMALL_STATE(53)] = 2509,
  [SMALL_STATE(54)] = 2546,
  [SMALL_STATE(55)] = 2581,
  [SMALL_STATE(56)] = 2618,
  [SMALL_STATE(57)] = 2657,
  [SMALL_STATE(58)] = 2696,
  [SMALL_STATE(59)] = 2731,
  [SMALL_STATE(60)] = 2770,
  [SMALL_STATE(61)] = 2807,
  [SMALL_STATE(62)] = 2842,
  [SMALL_STATE(63)] = 2879,
  [SMALL_STATE(64)] = 2916,
  [SMALL_STATE(65)] = 2951,
  [SMALL_STATE(66)] = 2986,
  [SMALL_STATE(67)] = 3021,
  [SMALL_STATE(68)] = 3058,
  [SMALL_STATE(69)] = 3093,
  [SMALL_STATE(70)] = 3128,
  [SMALL_STATE(71)] = 3163,
  [SMALL_STATE(72)] = 3199,
  [SMALL_STATE(73)] = 3235,
  [SMALL_STATE(74)] = 3271,
  [SMALL_STATE(75)] = 3307,
  [SMALL_STATE(76)] = 3341,
  [SMALL_STATE(77)] = 3370,
  [SMALL_STATE(78)] = 3387,
  [SMALL_STATE(79)] = 3406,
  [SMALL_STATE(80)] = 3439,
  [SMALL_STATE(81)] = 3468,
  [SMALL_STATE(82)] = 3485,
  [SMALL_STATE(83)] = 3502,
  [SMALL_STATE(84)] = 3523,
  [SMALL_STATE(85)] = 3542,
  [SMALL_STATE(86)] = 3575,
  [SMALL_STATE(87)] = 3604,
  [SMALL_STATE(88)] = 3633,
  [SMALL_STATE(89)] = 3650,
  [SMALL_STATE(90)] = 3667,
  [SMALL_STATE(91)] = 3686,
  [SMALL_STATE(92)] = 3715,
  [SMALL_STATE(93)] = 3732,
  [SMALL_STATE(94)] = 3753,
  [SMALL_STATE(95)] = 3786,
  [SMALL_STATE(96)] = 3804,
  [SMALL_STATE(97)] = 3822,
  [SMALL_STATE(98)] = 3852,
  [SMALL_STATE(99)] = 3870,
  [SMALL_STATE(100)] = 3888,
  [SMALL_STATE(101)] = 3918,
  [SMALL_STATE(102)] = 3948,
  [SMALL_STATE(103)] = 3973,
  [SMALL_STATE(104)] = 3992,
  [SMALL_STATE(105)] = 4011,
  [SMALL_STATE(106)] = 4026,
  [SMALL_STATE(107)] = 4051,
  [SMALL_STATE(108)] = 4066,
  [SMALL_STATE(109)] = 4085,
  [SMALL_STATE(110)] = 4103,
  [SMALL_STATE(111)] = 4119,
  [SMALL_STATE(112)] = 4141,
  [SMALL_STATE(113)] = 4163,
  [SMALL_STATE(114)] = 4179,
  [SMALL_STATE(115)] = 4197,
  [SMALL_STATE(116)] = 4221,
  [SMALL_STATE(117)] = 4241,
  [SMALL_STATE(118)] = 4263,
  [SMALL_STATE(119)] = 4283,
  [SMALL_STATE(120)] = 4303,
  [SMALL_STATE(121)] = 4325,
  [SMALL_STATE(122)] = 4347,
  [SMALL_STATE(123)] = 4367,
  [SMALL_STATE(124)] = 4385,
  [SMALL_STATE(125)] = 4407,
  [SMALL_STATE(126)] = 4425,
  [SMALL_STATE(127)] = 4444,
  [SMALL_STATE(128)] = 4463,
  [SMALL_STATE(129)] = 4482,
  [SMALL_STATE(130)] = 4501,
  [SMALL_STATE(131)] = 4518,
  [SMALL_STATE(132)] = 4535,
  [SMALL_STATE(133)] = 4554,
  [SMALL_STATE(134)] = 4573,
  [SMALL_STATE(135)] = 4586,
  [SMALL_STATE(136)] = 4603,
  [SMALL_STATE(137)] = 4622,
  [SMALL_STATE(138)] = 4641,
  [SMALL_STATE(139)] = 4662,
  [SMALL_STATE(140)] = 4683,
  [SMALL_STATE(141)] = 4700,
  [SMALL_STATE(142)] = 4713,
  [SMALL_STATE(143)] = 4732,
  [SMALL_STATE(144)] = 4745,
  [SMALL_STATE(145)] = 4764,
  [SMALL_STATE(146)] = 4785,
  [SMALL_STATE(147)] = 4797,
  [SMALL_STATE(148)] = 4815,
  [SMALL_STATE(149)] = 4827,
  [SMALL_STATE(150)] = 4841,
  [SMALL_STATE(151)] = 4861,
  [SMALL_STATE(152)] = 4879,
  [SMALL_STATE(153)] = 4891,
  [SMALL_STATE(154)] = 4911,
  [SMALL_STATE(155)] = 4925,
  [SMALL_STATE(156)] = 4937,
  [SMALL_STATE(157)] = 4957,
  [SMALL_STATE(158)] = 4971,
  [SMALL_STATE(159)] = 4983,
  [SMALL_STATE(160)] = 4999,
  [SMALL_STATE(161)] = 5015,
  [SMALL_STATE(162)] = 5027,
  [SMALL_STATE(163)] = 5045,
  [SMALL_STATE(164)] = 5056,
  [SMALL_STATE(165)] = 5067,
  [SMALL_STATE(166)] = 5078,
  [SMALL_STATE(167)] = 5093,
  [SMALL_STATE(168)] = 5104,
  [SMALL_STATE(169)] = 5123,
  [SMALL_STATE(170)] = 5136,
  [SMALL_STATE(171)] = 5147,
  [SMALL_STATE(172)] = 5166,
  [SMALL_STATE(173)] = 5177,
  [SMALL_STATE(174)] = 5192,
  [SMALL_STATE(175)] = 5203,
  [SMALL_STATE(176)] = 5214,
  [SMALL_STATE(177)] = 5229,
  [SMALL_STATE(178)] = 5244,
  [SMALL_STATE(179)] = 5255,
  [SMALL_STATE(180)] = 5266,
  [SMALL_STATE(181)] = 5277,
  [SMALL_STATE(182)] = 5288,
  [SMALL_STATE(183)] = 5303,
  [SMALL_STATE(184)] = 5314,
  [SMALL_STATE(185)] = 5333,
  [SMALL_STATE(186)] = 5348,
  [SMALL_STATE(187)] = 5359,
  [SMALL_STATE(188)] = 5370,
  [SMALL_STATE(189)] = 5385,
  [SMALL_STATE(190)] = 5396,
  [SMALL_STATE(191)] = 5407,
  [SMALL_STATE(192)] = 5418,
  [SMALL_STATE(193)] = 5433,
  [SMALL_STATE(194)] = 5444,
  [SMALL_STATE(195)] = 5455,
  [SMALL_STATE(196)] = 5466,
  [SMALL_STATE(197)] = 5477,
  [SMALL_STATE(198)] = 5492,
  [SMALL_STATE(199)] = 5503,
  [SMALL_STATE(200)] = 5514,
  [SMALL_STATE(201)] = 5529,
  [SMALL_STATE(202)] = 5544,
  [SMALL_STATE(203)] = 5555,
  [SMALL_STATE(204)] = 5566,
  [SMALL_STATE(205)] = 5577,
  [SMALL_STATE(206)] = 5588,
  [SMALL_STATE(207)] = 5599,
  [SMALL_STATE(208)] = 5614,
  [SMALL_STATE(209)] = 5625,
  [SMALL_STATE(210)] = 5636,
  [SMALL_STATE(211)] = 5647,
  [SMALL_STATE(212)] = 5658,
  [SMALL_STATE(213)] = 5673,
  [SMALL_STATE(214)] = 5684,
  [SMALL_STATE(215)] = 5695,
  [SMALL_STATE(216)] = 5706,
  [SMALL_STATE(217)] = 5717,
  [SMALL_STATE(218)] = 5732,
  [SMALL_STATE(219)] = 5747,
  [SMALL_STATE(220)] = 5758,
  [SMALL_STATE(221)] = 5769,
  [SMALL_STATE(222)] = 5780,
  [SMALL_STATE(223)] = 5791,
  [SMALL_STATE(224)] = 5802,
  [SMALL_STATE(225)] = 5817,
  [SMALL_STATE(226)] = 5828,
  [SMALL_STATE(227)] = 5840,
  [SMALL_STATE(228)] = 5850,
  [SMALL_STATE(229)] = 5860,
  [SMALL_STATE(230)] = 5870,
  [SMALL_STATE(231)] = 5880,
  [SMALL_STATE(232)] = 5892,
  [SMALL_STATE(233)] = 5904,
  [SMALL_STATE(234)] = 5918,
  [SMALL_STATE(235)] = 5928,
  [SMALL_STATE(236)] = 5940,
  [SMALL_STATE(237)] = 5950,
  [SMALL_STATE(238)] = 5962,
  [SMALL_STATE(239)] = 5976,
  [SMALL_STATE(240)] = 5986,
  [SMALL_STATE(241)] = 5996,
  [SMALL_STATE(242)] = 6006,
  [SMALL_STATE(243)] = 6018,
  [SMALL_STATE(244)] = 6030,
  [SMALL_STATE(245)] = 6040,
  [SMALL_STATE(246)] = 6052,
  [SMALL_STATE(247)] = 6064,
  [SMALL_STATE(248)] = 6074,
  [SMALL_STATE(249)] = 6084,
  [SMALL_STATE(250)] = 6094,
  [SMALL_STATE(251)] = 6106,
  [SMALL_STATE(252)] = 6117,
  [SMALL_STATE(253)] = 6128,
  [SMALL_STATE(254)] = 6139,
  [SMALL_STATE(255)] = 6150,
  [SMALL_STATE(256)] = 6161,
  [SMALL_STATE(257)] = 6172,
  [SMALL_STATE(258)] = 6183,
  [SMALL_STATE(259)] = 6196,
  [SMALL_STATE(260)] = 6207,
  [SMALL_STATE(261)] = 6218,
  [SMALL_STATE(262)] = 6226,
  [SMALL_STATE(263)] = 6234,
  [SMALL_STATE(264)] = 6242,
  [SMALL_STATE(265)] = 6250,
  [SMALL_STATE(266)] = 6258,
  [SMALL_STATE(267)] = 6266,
  [SMALL_STATE(268)] = 6274,
  [SMALL_STATE(269)] = 6282,
  [SMALL_STATE(270)] = 6290,
  [SMALL_STATE(271)] = 6298,
  [SMALL_STATE(272)] = 6306,
  [SMALL_STATE(273)] = 6314,
  [SMALL_STATE(274)] = 6322,
  [SMALL_STATE(275)] = 6332,
  [SMALL_STATE(276)] = 6340,
  [SMALL_STATE(277)] = 6348,
  [SMALL_STATE(278)] = 6356,
  [SMALL_STATE(279)] = 6364,
  [SMALL_STATE(280)] = 6372,
  [SMALL_STATE(281)] = 6380,
  [SMALL_STATE(282)] = 6388,
  [SMALL_STATE(283)] = 6396,
  [SMALL_STATE(284)] = 6404,
  [SMALL_STATE(285)] = 6414,
  [SMALL_STATE(286)] = 6422,
  [SMALL_STATE(287)] = 6430,
  [SMALL_STATE(288)] = 6438,
  [SMALL_STATE(289)] = 6446,
  [SMALL_STATE(290)] = 6454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(36),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(92),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(284),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(168),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT(193),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT(178),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT(210),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT(221),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT(208),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT(187),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, 0, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT(163),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 2, 0, 0), SHIFT(84),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 1, 0, 0), SHIFT(78),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1, 0, 0),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT(225),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2, 0, 0),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__full_connection_path, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referencing_full_connection_path, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, 0, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT(213),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT(249),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(116),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(118),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT(229),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT(223),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(128),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3, 0, 0),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(136),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(137),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referencing_full_connection_path, 4, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(144),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT(202),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT(170),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(162),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, 0, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, 0, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, 0, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT(219),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3, 0, 0),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT(205),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, 0, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [896] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, 0, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_list_attr_key, 1, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_d2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
