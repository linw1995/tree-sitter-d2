#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 278
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 3
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym__identifier_token1 = 4,
  aux_sym__identifier_token2 = 5,
  aux_sym__identifier_token3 = 6,
  aux_sym_text_block_token1 = 7,
  sym_language = 8,
  anon_sym_direction = 9,
  anon_sym_shape = 10,
  anon_sym_label = 11,
  anon_sym_constraint = 12,
  anon_sym_icon = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_link = 16,
  anon_sym_tooltip = 17,
  anon_sym_width = 18,
  anon_sym_height = 19,
  anon_sym_vertical_DASHgap = 20,
  anon_sym_horizontal_DASHgap = 21,
  anon_sym_grid_DASHgap = 22,
  anon_sym_grid_DASHcolumns = 23,
  anon_sym_grid_DASHrows = 24,
  anon_sym_3d = 25,
  anon_sym_opacity = 26,
  anon_sym_fill = 27,
  anon_sym_fill_DASHpattern = 28,
  anon_sym_stroke = 29,
  anon_sym_stroke_DASHwidth = 30,
  anon_sym_stroke_DASHdash = 31,
  anon_sym_border_DASHradius = 32,
  anon_sym_double_DASHborder = 33,
  anon_sym_font = 34,
  anon_sym_font_DASHsize = 35,
  anon_sym_font_DASHcolor = 36,
  anon_sym_shadow = 37,
  anon_sym_multiple = 38,
  anon_sym_animated = 39,
  anon_sym_italic = 40,
  anon_sym_bold = 41,
  anon_sym_underline = 42,
  anon_sym_text_DASHtransform = 43,
  sym__text_attr_key = 44,
  anon_sym_source_DASHarrowhead = 45,
  anon_sym_target_DASHarrowhead = 46,
  sym_keyword_underscore = 47,
  sym_keyword_classes = 48,
  sym_keyword_class = 49,
  sym_keyword_style = 50,
  sym__dash = 51,
  anon_sym_COLON = 52,
  sym_arrow = 53,
  sym_dot = 54,
  aux_sym__unquoted_string_token1 = 55,
  anon_sym_SQUOTE = 56,
  anon_sym_DQUOTE = 57,
  sym__unescaped_single_string_fragment = 58,
  sym__unescaped_double_string_fragment = 59,
  sym_escape_sequence = 60,
  anon_sym_true = 61,
  anon_sym_false = 62,
  sym_integer = 63,
  sym_float = 64,
  sym_line_comment = 65,
  sym__eol = 66,
  anon_sym_SEMI = 67,
  sym__text_block_start = 68,
  sym__text_block_end = 69,
  sym__text_block_raw_text = 70,
  sym_block_comment = 71,
  sym_source_file = 72,
  sym__root_definition = 73,
  sym_connection = 74,
  sym__connection_path = 75,
  sym__connection_block = 76,
  sym_classes = 77,
  sym__classes_block = 78,
  sym__classes_item = 79,
  sym__classes_item_block = 80,
  sym__classes_item_attribute = 81,
  sym_container = 82,
  sym__container_block = 83,
  sym__container_block_definition = 84,
  sym_shape = 85,
  sym_shape_key = 86,
  sym__identifier = 87,
  sym_text_block = 88,
  sym__text_block_attrs = 89,
  sym__root_attribute = 90,
  sym__root_attr_key = 91,
  sym__shape_attribute = 92,
  sym__class_attribute = 93,
  sym_class_list = 94,
  sym__class_name = 95,
  sym__base_shape_attribute = 96,
  sym__shape_attr_key = 97,
  sym__shape_list_attr_key = 98,
  sym__style_attribute = 99,
  sym__style_attribute_block = 100,
  sym__inner_style_attribute = 101,
  sym__grid_attr_key = 102,
  sym__style_attr_key = 103,
  sym__common_style_attr_key = 104,
  sym__text_shape_attribute = 105,
  sym__connection_attribute = 106,
  sym__connection_arrowhead_attribute = 107,
  sym__connection_arrowhead_attr_key = 108,
  sym_label = 109,
  sym_attr_value_list = 110,
  sym_attr_value = 111,
  sym__colon = 112,
  aux_sym__unquoted_string = 113,
  sym_string = 114,
  sym_boolean = 115,
  sym__end = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_connection_repeat1 = 118,
  aux_sym__connection_path_repeat1 = 119,
  aux_sym__connection_block_repeat1 = 120,
  aux_sym__classes_block_repeat1 = 121,
  aux_sym__classes_item_block_repeat1 = 122,
  aux_sym__container_block_repeat1 = 123,
  aux_sym__identifier_repeat1 = 124,
  aux_sym__text_block_attrs_repeat1 = 125,
  aux_sym_class_list_repeat1 = 126,
  aux_sym__style_attribute_block_repeat1 = 127,
  aux_sym_attr_value_list_repeat1 = 128,
  aux_sym_string_repeat1 = 129,
  alias_sym_class_name = 130,
  alias_sym_container_key = 131,
  alias_sym_reserved = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [aux_sym_text_block_token1] = "text_block_token1",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_COLON] = ":",
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
  [sym__colon] = "_colon",
  [aux_sym__unquoted_string] = "_unquoted_string",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
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
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym__colon] = sym__colon,
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
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
  [anon_sym_] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym__colon] = {
    .visible = false,
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
  [aux_sym_connection_repeat1] = {
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
  [9] = 8,
  [10] = 8,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 21,
  [24] = 24,
  [25] = 25,
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
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 40,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 40,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 43,
  [51] = 44,
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 54,
  [66] = 61,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 57,
  [71] = 61,
  [72] = 72,
  [73] = 53,
  [74] = 67,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 84,
  [95] = 85,
  [96] = 88,
  [97] = 97,
  [98] = 98,
  [99] = 85,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 88,
  [109] = 104,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 104,
  [116] = 100,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 110,
  [121] = 119,
  [122] = 122,
  [123] = 113,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 113,
  [128] = 113,
  [129] = 113,
  [130] = 130,
  [131] = 126,
  [132] = 113,
  [133] = 133,
  [134] = 134,
  [135] = 126,
  [136] = 119,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 113,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 126,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
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
  [222] = 217,
  [223] = 223,
  [224] = 217,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 247,
  [251] = 251,
  [252] = 249,
  [253] = 253,
  [254] = 248,
  [255] = 243,
  [256] = 256,
  [257] = 251,
  [258] = 258,
  [259] = 253,
  [260] = 248,
  [261] = 249,
  [262] = 251,
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
  [277] = 277,
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= '\t' && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym__unquoted_string_token1_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= 11 && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__unescaped_double_string_fragment_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(299);
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(296)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '3') ADVANCE(103);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(407);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(407);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(407);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(29)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(29)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 46:
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(273);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(332);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(411);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(342);
      END_STATE();
    case 164:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'x') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(416);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 284:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 286:
      if (lookahead == 'z') ADVANCE(119);
      END_STATE();
    case 287:
      if (lookahead == 'z') ADVANCE(203);
      END_STATE();
    case 288:
      if (lookahead == '{') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 289:
      if (lookahead == '}') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 290:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 295:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 296:
      if (eof) ADVANCE(299);
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (anon_sym__character_set_1(lookahead)) SKIP(296)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 297:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(311);
      if (anon_sym__character_set_1(lookahead)) SKIP(298)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 298:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(311);
      if (anon_sym__character_set_1(lookahead)) SKIP(298)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(300);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(407);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(407);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(407);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(290);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(407);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(407);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(411);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(413);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 297, .external_lex_state = 2},
  [2] = {.lex_state = 297, .external_lex_state = 2},
  [3] = {.lex_state = 297, .external_lex_state = 2},
  [4] = {.lex_state = 28, .external_lex_state = 2},
  [5] = {.lex_state = 28, .external_lex_state = 2},
  [6] = {.lex_state = 28, .external_lex_state = 2},
  [7] = {.lex_state = 297, .external_lex_state = 2},
  [8] = {.lex_state = 28, .external_lex_state = 2},
  [9] = {.lex_state = 28, .external_lex_state = 2},
  [10] = {.lex_state = 28, .external_lex_state = 2},
  [11] = {.lex_state = 28, .external_lex_state = 2},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 28, .external_lex_state = 2},
  [21] = {.lex_state = 28, .external_lex_state = 2},
  [22] = {.lex_state = 28, .external_lex_state = 2},
  [23] = {.lex_state = 28, .external_lex_state = 2},
  [24] = {.lex_state = 28, .external_lex_state = 2},
  [25] = {.lex_state = 28, .external_lex_state = 2},
  [26] = {.lex_state = 12, .external_lex_state = 2},
  [27] = {.lex_state = 12, .external_lex_state = 2},
  [28] = {.lex_state = 12, .external_lex_state = 2},
  [29] = {.lex_state = 12, .external_lex_state = 2},
  [30] = {.lex_state = 12, .external_lex_state = 2},
  [31] = {.lex_state = 12, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 34, .external_lex_state = 2},
  [36] = {.lex_state = 34, .external_lex_state = 2},
  [37] = {.lex_state = 34, .external_lex_state = 2},
  [38] = {.lex_state = 49, .external_lex_state = 2},
  [39] = {.lex_state = 49, .external_lex_state = 2},
  [40] = {.lex_state = 10, .external_lex_state = 3},
  [41] = {.lex_state = 30, .external_lex_state = 3},
  [42] = {.lex_state = 49, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 2},
  [44] = {.lex_state = 4, .external_lex_state = 2},
  [45] = {.lex_state = 26, .external_lex_state = 2},
  [46] = {.lex_state = 31, .external_lex_state = 3},
  [47] = {.lex_state = 26, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 2},
  [49] = {.lex_state = 26, .external_lex_state = 2},
  [50] = {.lex_state = 9, .external_lex_state = 2},
  [51] = {.lex_state = 9, .external_lex_state = 2},
  [52] = {.lex_state = 9, .external_lex_state = 2},
  [53] = {.lex_state = 30, .external_lex_state = 2},
  [54] = {.lex_state = 49, .external_lex_state = 2},
  [55] = {.lex_state = 49, .external_lex_state = 2},
  [56] = {.lex_state = 10, .external_lex_state = 2},
  [57] = {.lex_state = 49, .external_lex_state = 2},
  [58] = {.lex_state = 26, .external_lex_state = 2},
  [59] = {.lex_state = 49, .external_lex_state = 2},
  [60] = {.lex_state = 26, .external_lex_state = 2},
  [61] = {.lex_state = 30, .external_lex_state = 2},
  [62] = {.lex_state = 49, .external_lex_state = 2},
  [63] = {.lex_state = 49, .external_lex_state = 2},
  [64] = {.lex_state = 10, .external_lex_state = 2},
  [65] = {.lex_state = 49, .external_lex_state = 2},
  [66] = {.lex_state = 10, .external_lex_state = 2},
  [67] = {.lex_state = 30, .external_lex_state = 2},
  [68] = {.lex_state = 49, .external_lex_state = 2},
  [69] = {.lex_state = 26, .external_lex_state = 2},
  [70] = {.lex_state = 49, .external_lex_state = 2},
  [71] = {.lex_state = 31, .external_lex_state = 2},
  [72] = {.lex_state = 26, .external_lex_state = 2},
  [73] = {.lex_state = 31, .external_lex_state = 2},
  [74] = {.lex_state = 31, .external_lex_state = 2},
  [75] = {.lex_state = 12, .external_lex_state = 2},
  [76] = {.lex_state = 12, .external_lex_state = 2},
  [77] = {.lex_state = 12, .external_lex_state = 2},
  [78] = {.lex_state = 26, .external_lex_state = 2},
  [79] = {.lex_state = 34, .external_lex_state = 2},
  [80] = {.lex_state = 26, .external_lex_state = 2},
  [81] = {.lex_state = 34, .external_lex_state = 2},
  [82] = {.lex_state = 34, .external_lex_state = 2},
  [83] = {.lex_state = 12, .external_lex_state = 2},
  [84] = {.lex_state = 12, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 12, .external_lex_state = 2},
  [87] = {.lex_state = 12, .external_lex_state = 2},
  [88] = {.lex_state = 12, .external_lex_state = 2},
  [89] = {.lex_state = 26, .external_lex_state = 2},
  [90] = {.lex_state = 12, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 12, .external_lex_state = 2},
  [93] = {.lex_state = 9, .external_lex_state = 2},
  [94] = {.lex_state = 9, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 12, .external_lex_state = 2},
  [98] = {.lex_state = 26, .external_lex_state = 2},
  [99] = {.lex_state = 12, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 12, .external_lex_state = 2},
  [106] = {.lex_state = 12, .external_lex_state = 2},
  [107] = {.lex_state = 12, .external_lex_state = 2},
  [108] = {.lex_state = 12, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 26, .external_lex_state = 2},
  [112] = {.lex_state = 26, .external_lex_state = 2},
  [113] = {.lex_state = 14, .external_lex_state = 2},
  [114] = {.lex_state = 26, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 26, .external_lex_state = 2},
  [118] = {.lex_state = 26, .external_lex_state = 2},
  [119] = {.lex_state = 37, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 14, .external_lex_state = 2},
  [122] = {.lex_state = 26, .external_lex_state = 2},
  [123] = {.lex_state = 37, .external_lex_state = 2},
  [124] = {.lex_state = 12, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 36, .external_lex_state = 2},
  [127] = {.lex_state = 39, .external_lex_state = 2},
  [128] = {.lex_state = 15, .external_lex_state = 2},
  [129] = {.lex_state = 38, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 39, .external_lex_state = 2},
  [132] = {.lex_state = 36, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 15, .external_lex_state = 2},
  [136] = {.lex_state = 38, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 12, .external_lex_state = 2},
  [140] = {.lex_state = 12, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 40, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 12, .external_lex_state = 2},
  [151] = {.lex_state = 26, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 40, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 51, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 51, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 51, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
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
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 12, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 12, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 12, .external_lex_state = 2},
  [256] = {.lex_state = 52, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 5},
  [271] = {.lex_state = 53, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 5},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 52, .external_lex_state = 2},
};

enum {
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

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(265),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(163),
    [sym__connection_path] = STATE(243),
    [sym_classes] = STATE(163),
    [sym_container] = STATE(163),
    [sym_shape] = STATE(163),
    [sym_shape_key] = STATE(88),
    [sym__identifier] = STATE(86),
    [sym__root_attribute] = STATE(163),
    [sym__root_attr_key] = STATE(244),
    [sym__grid_attr_key] = STATE(264),
    [sym__common_style_attr_key] = STATE(274),
    [sym_string] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__identifier_token1] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_link] = ACTIONS(13),
    [anon_sym_vertical_DASHgap] = ACTIONS(9),
    [anon_sym_horizontal_DASHgap] = ACTIONS(9),
    [anon_sym_grid_DASHgap] = ACTIONS(9),
    [anon_sym_grid_DASHcolumns] = ACTIONS(9),
    [anon_sym_grid_DASHrows] = ACTIONS(9),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_fill_DASHpattern] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(15),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_double_DASHborder] = ACTIONS(13),
    [anon_sym_font] = ACTIONS(15),
    [anon_sym_font_DASHsize] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_text_DASHtransform] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [sym_keyword_underscore] = ACTIONS(17),
    [sym_keyword_classes] = ACTIONS(19),
    [sym_keyword_style] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(27),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(19), 1,
      sym_keyword_classes,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__eol,
    STATE(88), 1,
      sym_shape_key,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(243), 1,
      sym__connection_path,
    STATE(244), 1,
      sym__root_attr_key,
    STATE(264), 1,
      sym__grid_attr_key,
    STATE(274), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(163), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(9), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(11), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(13), 16,
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
  [101] = 22,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym__identifier_token1,
    ACTIONS(50), 1,
      sym_keyword_underscore,
    ACTIONS(53), 1,
      sym_keyword_classes,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_escape_sequence,
    ACTIONS(65), 1,
      sym__eol,
    STATE(88), 1,
      sym_shape_key,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(243), 1,
      sym__connection_path,
    STATE(244), 1,
      sym__root_attr_key,
    STATE(264), 1,
      sym__grid_attr_key,
    STATE(274), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    ACTIONS(47), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(163), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(38), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(41), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(44), 16,
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
  [202] = 21,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(78), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym_shape_key,
    STATE(245), 1,
      sym__connection_path,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(183), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [288] = 21,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      aux_sym__identifier_token1,
    ACTIONS(88), 1,
      anon_sym_constraint,
    ACTIONS(91), 1,
      sym_keyword_underscore,
    ACTIONS(94), 1,
      sym_keyword_class,
    ACTIONS(97), 1,
      sym_keyword_style,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_escape_sequence,
    ACTIONS(109), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(108), 1,
      sym_shape_key,
    STATE(249), 1,
      sym__shape_list_attr_key,
    STATE(255), 1,
      sym__connection_path,
    STATE(257), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(240), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(85), 14,
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
  [374] = 21,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym_shape_key,
    STATE(245), 1,
      sym__connection_path,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(207), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [460] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(118), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(116), 35,
      ts_builtin_sym_end,
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
  [508] = 17,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_keyword_underscore,
    ACTIONS(126), 1,
      sym_keyword_style,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_escape_sequence,
    STATE(115), 1,
      sym_shape_key,
    STATE(249), 1,
      sym__shape_list_attr_key,
    STATE(257), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [579] = 17,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_keyword_underscore,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_escape_sequence,
    STATE(109), 1,
      sym_shape_key,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [650] = 17,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      sym_keyword_underscore,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_escape_sequence,
    ACTIONS(137), 1,
      sym_keyword_style,
    STATE(104), 1,
      sym_shape_key,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(262), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [721] = 17,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(126), 1,
      sym_keyword_style,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    STATE(115), 1,
      sym_shape_key,
    STATE(249), 1,
      sym__shape_list_attr_key,
    STATE(257), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [792] = 17,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(137), 1,
      sym_keyword_style,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    STATE(104), 1,
      sym_shape_key,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(262), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [863] = 17,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    STATE(109), 1,
      sym_shape_key,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(185), 2,
      sym_container,
      sym_shape,
    STATE(192), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [934] = 10,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_3d,
    ACTIONS(154), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(226), 1,
      sym__inner_style_attribute,
    STATE(248), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(151), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(145), 16,
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
  [983] = 10,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      anon_sym_3d,
    ACTIONS(161), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(189), 1,
      sym__inner_style_attribute,
    STATE(254), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
  [1032] = 10,
    ACTIONS(159), 1,
      anon_sym_3d,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      sym__eol,
    STATE(15), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(254), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
  [1081] = 11,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      sym__eol,
    STATE(19), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(212), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [1131] = 11,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_constraint,
    ACTIONS(179), 1,
      sym_keyword_style,
    ACTIONS(182), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(249), 1,
      sym__shape_list_attr_key,
    STATE(257), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(241), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(173), 14,
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
  [1181] = 11,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(159), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [1231] = 4,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 22,
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
  [1266] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    STATE(251), 1,
      sym__shape_attr_key,
    STATE(252), 1,
      sym__shape_list_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [1311] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(126), 1,
      sym_keyword_style,
    STATE(249), 1,
      sym__shape_list_attr_key,
    STATE(257), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [1356] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(137), 1,
      sym_keyword_style,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(262), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 14,
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
  [1401] = 4,
    ACTIONS(192), 1,
      aux_sym__identifier_token1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 22,
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
  [1436] = 3,
    ACTIONS(192), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 23,
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
  [1469] = 7,
    ACTIONS(159), 1,
      anon_sym_3d,
    STATE(168), 1,
      sym__inner_style_attribute,
    STATE(260), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
  [1509] = 7,
    ACTIONS(159), 1,
      anon_sym_3d,
    STATE(168), 1,
      sym__inner_style_attribute,
    STATE(254), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
  [1549] = 7,
    ACTIONS(159), 1,
      anon_sym_3d,
    STATE(168), 1,
      sym__inner_style_attribute,
    STATE(248), 1,
      sym__style_attr_key,
    STATE(263), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
  [1589] = 4,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(143), 18,
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
  [1622] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(143), 18,
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
  [1655] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(143), 19,
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
  [1686] = 3,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 17,
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
  [1713] = 3,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 17,
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
  [1740] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 18,
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
  [1765] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(213), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      sym__eol,
    STATE(36), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(165), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [1811] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(193), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [1857] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(235), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_escape_sequence,
    ACTIONS(253), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(153), 1,
      aux_sym__unquoted_string,
    STATE(220), 1,
      sym_attr_value,
    ACTIONS(247), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [1903] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(260), 1,
      sym_escape_sequence,
    STATE(153), 1,
      aux_sym__unquoted_string,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
    STATE(188), 2,
      sym_attr_value_list,
      sym_attr_value,
  [1944] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(264), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym__unquoted_string,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
    STATE(188), 2,
      sym_attr_value_list,
      sym_attr_value,
  [1985] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(274), 1,
      sym__text_block_start,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(125), 1,
      sym_text_block,
    STATE(133), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(266), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2030] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym__text_block_start,
    ACTIONS(276), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(278), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(125), 1,
      sym_text_block,
    STATE(133), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(266), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2075] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(135), 1,
      aux_sym__unquoted_string,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
    STATE(188), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2116] = 5,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(289), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(284), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2142] = 6,
    ACTIONS(295), 1,
      aux_sym__identifier_token3,
    ACTIONS(297), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(291), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2170] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__classes_block_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(102), 1,
      sym__class_name,
    STATE(195), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2212] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym__text_block_start,
    ACTIONS(303), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    STATE(125), 1,
      sym_text_block,
    STATE(133), 1,
      sym_label,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(152), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [2256] = 13,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      aux_sym__identifier_token1,
    ACTIONS(312), 1,
      sym_keyword_underscore,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      sym_escape_sequence,
    ACTIONS(324), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__classes_block_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__class_name,
    STATE(233), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2298] = 6,
    ACTIONS(331), 1,
      aux_sym__identifier_token3,
    ACTIONS(333), 1,
      sym__dash,
    STATE(44), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(327), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2326] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      sym__eol,
    STATE(45), 1,
      aux_sym__classes_block_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(102), 1,
      sym__class_name,
    STATE(175), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2368] = 5,
    STATE(50), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(339), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(284), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2394] = 6,
    ACTIONS(297), 1,
      sym__dash,
    ACTIONS(344), 1,
      aux_sym__identifier_token3,
    STATE(50), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(291), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2422] = 6,
    ACTIONS(333), 1,
      sym__dash,
    ACTIONS(348), 1,
      aux_sym__identifier_token3,
    STATE(51), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(346), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(327), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2450] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(278), 1,
      sym_escape_sequence,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(352), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2489] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(264), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym__unquoted_string,
    STATE(188), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2526] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(188), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2563] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(352), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2602] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(264), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym__unquoted_string,
    STATE(186), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2639] = 12,
    ACTIONS(354), 1,
      aux_sym__identifier_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      sym_keyword_underscore,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_escape_sequence,
    ACTIONS(371), 1,
      sym__eol,
    STATE(58), 1,
      aux_sym_class_list_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(227), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2678] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(260), 1,
      sym_escape_sequence,
    STATE(153), 1,
      aux_sym__unquoted_string,
    STATE(186), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2715] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    ACTIONS(376), 1,
      sym__eol,
    STATE(69), 1,
      aux_sym_class_list_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(158), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2754] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(278), 1,
      sym_escape_sequence,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(380), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2793] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(260), 1,
      sym_escape_sequence,
    STATE(153), 1,
      aux_sym__unquoted_string,
    STATE(231), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2830] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(264), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym__unquoted_string,
    STATE(231), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2867] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(239), 1,
      sym__classes_block,
    ACTIONS(382), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2906] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(260), 1,
      sym_escape_sequence,
    STATE(153), 1,
      aux_sym__unquoted_string,
    STATE(188), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [2943] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(380), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2982] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(278), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(228), 1,
      sym__container_block,
    ACTIONS(386), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3021] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(237), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [3058] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    ACTIONS(390), 1,
      sym__eol,
    STATE(58), 1,
      aux_sym_class_list_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(184), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3097] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(186), 1,
      sym_attr_value,
    ACTIONS(221), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_integer,
      sym_float,
    STATE(138), 2,
      sym_string,
      sym_boolean,
  [3134] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_label,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(380), 2,
      sym__eol,
      anon_sym_SEMI,
  [3172] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    STATE(101), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(201), 2,
      sym_class_list,
      sym__class_name,
  [3206] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(352), 2,
      sym__eol,
      anon_sym_SEMI,
  [3244] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(305), 1,
      sym_escape_sequence,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(228), 1,
      sym__container_block,
    ACTIONS(386), 2,
      sym__eol,
      anon_sym_SEMI,
  [3282] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym__connection_block_repeat1,
    STATE(110), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(206), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3311] = 8,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      sym_keyword_style,
    ACTIONS(408), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym__connection_block_repeat1,
    STATE(120), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(402), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(225), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3340] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym__connection_block_repeat1,
    STATE(110), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(198), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3369] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    ACTIONS(141), 1,
      sym_escape_sequence,
    STATE(100), 1,
      sym__class_name,
    STATE(101), 1,
      sym_shape_key,
    STATE(239), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3402] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_escape_sequence,
    ACTIONS(233), 9,
      anon_sym_RBRACK,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3423] = 10,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(105), 1,
      sym_shape_key,
    STATE(124), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3456] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_escape_sequence,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 8,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3479] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_escape_sequence,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 8,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3502] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3518] = 3,
    ACTIONS(425), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3536] = 8,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      sym_arrow,
    STATE(53), 1,
      sym__colon,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3564] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3580] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3596] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      sym_arrow,
    ACTIONS(447), 1,
      sym_dot,
    STATE(40), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3624] = 9,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym__connection_path_repeat1,
    STATE(107), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3654] = 3,
    ACTIONS(297), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3672] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3688] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3704] = 3,
    ACTIONS(451), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(291), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3722] = 3,
    ACTIONS(453), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3740] = 8,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      sym_arrow,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym__colon,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3768] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      sym_arrow,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      sym_dot,
    STATE(41), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3796] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3812] = 9,
    ACTIONS(463), 1,
      aux_sym__identifier_token1,
    ACTIONS(466), 1,
      sym_keyword_underscore,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym__connection_path_repeat1,
    STATE(267), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3842] = 8,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      sym_arrow,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym__colon,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 2,
      sym__eol,
      anon_sym_SEMI,
  [3869] = 7,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      sym_dot,
    STATE(66), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3894] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3909] = 7,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(492), 1,
      sym_dot,
    STATE(61), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3934] = 7,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      sym_dot,
    STATE(64), 1,
      sym__colon,
    STATE(234), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3959] = 7,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(502), 1,
      sym_dot,
    STATE(40), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3984] = 3,
    ACTIONS(504), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4001] = 4,
    ACTIONS(508), 1,
      sym_arrow,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(506), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [4020] = 3,
    ACTIONS(504), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(511), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4037] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      sym_arrow,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(515), 1,
      sym_dot,
    STATE(46), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 2,
      sym__eol,
      anon_sym_SEMI,
  [4064] = 7,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(517), 1,
      sym_dot,
    STATE(41), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4089] = 7,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(523), 1,
      sym_dot,
    STATE(67), 1,
      sym__colon,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4114] = 3,
    ACTIONS(525), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4130] = 4,
    ACTIONS(525), 1,
      aux_sym__identifier_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4148] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(535), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4170] = 3,
    ACTIONS(538), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4186] = 7,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(540), 1,
      sym_dot,
    STATE(46), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(439), 2,
      sym__eol,
      anon_sym_SEMI,
  [4210] = 7,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      sym_dot,
    STATE(71), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 2,
      sym__eol,
      anon_sym_SEMI,
  [4234] = 4,
    ACTIONS(525), 1,
      aux_sym__identifier_token1,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4252] = 4,
    ACTIONS(538), 1,
      aux_sym__identifier_token1,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4270] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(556), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(552), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4292] = 7,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(560), 1,
      sym_dot,
    STATE(74), 1,
      sym__colon,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 2,
      sym__eol,
      anon_sym_SEMI,
  [4316] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(564), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(552), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4338] = 4,
    ACTIONS(538), 1,
      aux_sym__identifier_token1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4356] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(572), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4378] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(506), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4392] = 4,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4409] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(583), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(579), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4430] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(588), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4451] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(594), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4472] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(600), 1,
      sym_escape_sequence,
    STATE(129), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4493] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4506] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(607), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(579), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4527] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(612), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4548] = 4,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4565] = 4,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(615), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4582] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(619), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(579), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4603] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(623), 1,
      sym_escape_sequence,
    STATE(129), 1,
      aux_sym__unquoted_string,
    ACTIONS(552), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4624] = 4,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(625), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4641] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(627), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4653] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4665] = 3,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4679] = 6,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      sym__text_attr_key,
    ACTIONS(637), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(229), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4699] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(640), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4711] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(642), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4723] = 6,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    ACTIONS(646), 1,
      sym__text_attr_key,
    ACTIONS(648), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(174), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4743] = 6,
    ACTIONS(646), 1,
      sym__text_attr_key,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      sym__eol,
    STATE(144), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(171), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4763] = 4,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(654), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4779] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(656), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4791] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(661), 1,
      sym_escape_sequence,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(530), 2,
      sym__eol,
      anon_sym_SEMI,
  [4811] = 4,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4827] = 3,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4841] = 3,
    ACTIONS(669), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(671), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4855] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(673), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4867] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(677), 1,
      sym_escape_sequence,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(579), 2,
      sym__eol,
      anon_sym_SEMI,
  [4887] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(679), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4898] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(681), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4909] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym_string_repeat1,
    ACTIONS(685), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4926] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4937] = 4,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(689), 2,
      sym__eol,
      anon_sym_SEMI,
  [4952] = 4,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(693), 2,
      sym__eol,
      anon_sym_SEMI,
  [4967] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4978] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(697), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4989] = 4,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(699), 2,
      sym__eol,
      anon_sym_SEMI,
  [5004] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(701), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5017] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(703), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5028] = 4,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(707), 2,
      sym__eol,
      anon_sym_SEMI,
  [5043] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(709), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5054] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(711), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5065] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(713), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5076] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(715), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5087] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(719), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5104] = 4,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 2,
      sym__eol,
      anon_sym_SEMI,
  [5119] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5130] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5141] = 4,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(729), 2,
      sym__eol,
      anon_sym_SEMI,
  [5156] = 4,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(731), 2,
      sym__eol,
      anon_sym_SEMI,
  [5171] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(733), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5182] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(735), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5193] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(739), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5210] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(742), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5221] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(744), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5232] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(746), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5243] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(748), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5254] = 4,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(750), 2,
      sym__eol,
      anon_sym_SEMI,
  [5269] = 4,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(754), 2,
      sym__eol,
      anon_sym_SEMI,
  [5284] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(756), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5295] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(758), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5306] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(760), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5317] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(762), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5328] = 4,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(766), 2,
      sym__eol,
      anon_sym_SEMI,
  [5343] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(768), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5354] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(770), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5365] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5376] = 4,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(774), 2,
      sym__eol,
      anon_sym_SEMI,
  [5391] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(776), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5402] = 4,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(780), 2,
      sym__eol,
      anon_sym_SEMI,
  [5417] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(782), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5428] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(784), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5439] = 4,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(786), 2,
      sym__eol,
      anon_sym_SEMI,
  [5454] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(625), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5465] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(788), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5476] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(790), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5487] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(792), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5498] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(794), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5509] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(796), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5520] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(798), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5531] = 4,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(802), 2,
      sym__eol,
      anon_sym_SEMI,
  [5546] = 4,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(806), 2,
      sym__eol,
      anon_sym_SEMI,
  [5561] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(808), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5572] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(810), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5583] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(812), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5594] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(814), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5605] = 4,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(816), 2,
      sym__eol,
      anon_sym_SEMI,
  [5620] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(818), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5631] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(820), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5642] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(615), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5653] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(822), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5664] = 4,
    ACTIONS(824), 1,
      anon_sym_COLON,
    ACTIONS(826), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5678] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(828), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5688] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(632), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5698] = 3,
    STATE(79), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(830), 2,
      sym__eol,
      anon_sym_SEMI,
  [5710] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(832), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5720] = 4,
    ACTIONS(824), 1,
      anon_sym_COLON,
    ACTIONS(834), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5734] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(836), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5744] = 4,
    ACTIONS(824), 1,
      anon_sym_COLON,
    ACTIONS(838), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5758] = 3,
    STATE(139), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(840), 2,
      sym__eol,
      anon_sym_SEMI,
  [5770] = 3,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(842), 2,
      sym__eol,
      anon_sym_SEMI,
  [5782] = 3,
    STATE(111), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(844), 2,
      sym__eol,
      anon_sym_SEMI,
  [5794] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5804] = 3,
    STATE(219), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(846), 2,
      sym__eol,
      anon_sym_SEMI,
  [5816] = 3,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(632), 2,
      sym__text_attr_key,
      sym__eol,
  [5828] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(851), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5838] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(853), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5848] = 3,
    STATE(114), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(855), 2,
      sym__eol,
      anon_sym_SEMI,
  [5860] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(857), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5870] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(859), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5880] = 3,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(632), 2,
      sym__text_attr_key,
      sym__eol,
  [5892] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(864), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(866), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5912] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(654), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5922] = 3,
    STATE(25), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(868), 2,
      sym__eol,
      anon_sym_SEMI,
  [5934] = 3,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(870), 2,
      sym__eol,
      anon_sym_SEMI,
  [5946] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(872), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5956] = 3,
    ACTIONS(433), 1,
      sym_arrow,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5967] = 3,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5978] = 3,
    ACTIONS(433), 1,
      sym_arrow,
    STATE(85), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5989] = 3,
    ACTIONS(876), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6000] = 3,
    ACTIONS(126), 1,
      sym_keyword_style,
    STATE(228), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6011] = 3,
    ACTIONS(878), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6022] = 3,
    ACTIONS(880), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6033] = 3,
    ACTIONS(76), 1,
      sym_keyword_style,
    STATE(228), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6044] = 3,
    ACTIONS(882), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6055] = 3,
    ACTIONS(884), 1,
      anon_sym_COLON,
    STATE(39), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6066] = 3,
    ACTIONS(886), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6077] = 3,
    ACTIONS(888), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6088] = 3,
    ACTIONS(433), 1,
      sym_arrow,
    STATE(99), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6099] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      aux_sym_text_block_token1,
    ACTIONS(892), 1,
      sym_language,
  [6112] = 3,
    ACTIONS(894), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6123] = 3,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6134] = 3,
    ACTIONS(898), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6145] = 3,
    ACTIONS(900), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6156] = 3,
    ACTIONS(902), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6167] = 3,
    ACTIONS(904), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6178] = 2,
    ACTIONS(906), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6186] = 2,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6194] = 2,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6202] = 2,
    ACTIONS(912), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6210] = 2,
    ACTIONS(504), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6218] = 2,
    ACTIONS(914), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6226] = 2,
    ACTIONS(916), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6234] = 2,
    ACTIONS(918), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6242] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(920), 1,
      sym__unescaped_single_string_fragment,
  [6252] = 2,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6260] = 2,
    ACTIONS(924), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6268] = 2,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6276] = 2,
    ACTIONS(928), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6284] = 2,
    ACTIONS(930), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6292] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(932), 1,
      aux_sym_text_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 202,
  [SMALL_STATE(5)] = 288,
  [SMALL_STATE(6)] = 374,
  [SMALL_STATE(7)] = 460,
  [SMALL_STATE(8)] = 508,
  [SMALL_STATE(9)] = 579,
  [SMALL_STATE(10)] = 650,
  [SMALL_STATE(11)] = 721,
  [SMALL_STATE(12)] = 792,
  [SMALL_STATE(13)] = 863,
  [SMALL_STATE(14)] = 934,
  [SMALL_STATE(15)] = 983,
  [SMALL_STATE(16)] = 1032,
  [SMALL_STATE(17)] = 1081,
  [SMALL_STATE(18)] = 1131,
  [SMALL_STATE(19)] = 1181,
  [SMALL_STATE(20)] = 1231,
  [SMALL_STATE(21)] = 1266,
  [SMALL_STATE(22)] = 1311,
  [SMALL_STATE(23)] = 1356,
  [SMALL_STATE(24)] = 1401,
  [SMALL_STATE(25)] = 1436,
  [SMALL_STATE(26)] = 1469,
  [SMALL_STATE(27)] = 1509,
  [SMALL_STATE(28)] = 1549,
  [SMALL_STATE(29)] = 1589,
  [SMALL_STATE(30)] = 1622,
  [SMALL_STATE(31)] = 1655,
  [SMALL_STATE(32)] = 1686,
  [SMALL_STATE(33)] = 1713,
  [SMALL_STATE(34)] = 1740,
  [SMALL_STATE(35)] = 1765,
  [SMALL_STATE(36)] = 1811,
  [SMALL_STATE(37)] = 1857,
  [SMALL_STATE(38)] = 1903,
  [SMALL_STATE(39)] = 1944,
  [SMALL_STATE(40)] = 1985,
  [SMALL_STATE(41)] = 2030,
  [SMALL_STATE(42)] = 2075,
  [SMALL_STATE(43)] = 2116,
  [SMALL_STATE(44)] = 2142,
  [SMALL_STATE(45)] = 2170,
  [SMALL_STATE(46)] = 2212,
  [SMALL_STATE(47)] = 2256,
  [SMALL_STATE(48)] = 2298,
  [SMALL_STATE(49)] = 2326,
  [SMALL_STATE(50)] = 2368,
  [SMALL_STATE(51)] = 2394,
  [SMALL_STATE(52)] = 2422,
  [SMALL_STATE(53)] = 2450,
  [SMALL_STATE(54)] = 2489,
  [SMALL_STATE(55)] = 2526,
  [SMALL_STATE(56)] = 2563,
  [SMALL_STATE(57)] = 2602,
  [SMALL_STATE(58)] = 2639,
  [SMALL_STATE(59)] = 2678,
  [SMALL_STATE(60)] = 2715,
  [SMALL_STATE(61)] = 2754,
  [SMALL_STATE(62)] = 2793,
  [SMALL_STATE(63)] = 2830,
  [SMALL_STATE(64)] = 2867,
  [SMALL_STATE(65)] = 2906,
  [SMALL_STATE(66)] = 2943,
  [SMALL_STATE(67)] = 2982,
  [SMALL_STATE(68)] = 3021,
  [SMALL_STATE(69)] = 3058,
  [SMALL_STATE(70)] = 3097,
  [SMALL_STATE(71)] = 3134,
  [SMALL_STATE(72)] = 3172,
  [SMALL_STATE(73)] = 3206,
  [SMALL_STATE(74)] = 3244,
  [SMALL_STATE(75)] = 3282,
  [SMALL_STATE(76)] = 3311,
  [SMALL_STATE(77)] = 3340,
  [SMALL_STATE(78)] = 3369,
  [SMALL_STATE(79)] = 3402,
  [SMALL_STATE(80)] = 3423,
  [SMALL_STATE(81)] = 3456,
  [SMALL_STATE(82)] = 3479,
  [SMALL_STATE(83)] = 3502,
  [SMALL_STATE(84)] = 3518,
  [SMALL_STATE(85)] = 3536,
  [SMALL_STATE(86)] = 3564,
  [SMALL_STATE(87)] = 3580,
  [SMALL_STATE(88)] = 3596,
  [SMALL_STATE(89)] = 3624,
  [SMALL_STATE(90)] = 3654,
  [SMALL_STATE(91)] = 3672,
  [SMALL_STATE(92)] = 3688,
  [SMALL_STATE(93)] = 3704,
  [SMALL_STATE(94)] = 3722,
  [SMALL_STATE(95)] = 3740,
  [SMALL_STATE(96)] = 3768,
  [SMALL_STATE(97)] = 3796,
  [SMALL_STATE(98)] = 3812,
  [SMALL_STATE(99)] = 3842,
  [SMALL_STATE(100)] = 3869,
  [SMALL_STATE(101)] = 3894,
  [SMALL_STATE(102)] = 3909,
  [SMALL_STATE(103)] = 3934,
  [SMALL_STATE(104)] = 3959,
  [SMALL_STATE(105)] = 3984,
  [SMALL_STATE(106)] = 4001,
  [SMALL_STATE(107)] = 4020,
  [SMALL_STATE(108)] = 4037,
  [SMALL_STATE(109)] = 4064,
  [SMALL_STATE(110)] = 4089,
  [SMALL_STATE(111)] = 4114,
  [SMALL_STATE(112)] = 4130,
  [SMALL_STATE(113)] = 4148,
  [SMALL_STATE(114)] = 4170,
  [SMALL_STATE(115)] = 4186,
  [SMALL_STATE(116)] = 4210,
  [SMALL_STATE(117)] = 4234,
  [SMALL_STATE(118)] = 4252,
  [SMALL_STATE(119)] = 4270,
  [SMALL_STATE(120)] = 4292,
  [SMALL_STATE(121)] = 4316,
  [SMALL_STATE(122)] = 4338,
  [SMALL_STATE(123)] = 4356,
  [SMALL_STATE(124)] = 4378,
  [SMALL_STATE(125)] = 4392,
  [SMALL_STATE(126)] = 4409,
  [SMALL_STATE(127)] = 4430,
  [SMALL_STATE(128)] = 4451,
  [SMALL_STATE(129)] = 4472,
  [SMALL_STATE(130)] = 4493,
  [SMALL_STATE(131)] = 4506,
  [SMALL_STATE(132)] = 4527,
  [SMALL_STATE(133)] = 4548,
  [SMALL_STATE(134)] = 4565,
  [SMALL_STATE(135)] = 4582,
  [SMALL_STATE(136)] = 4603,
  [SMALL_STATE(137)] = 4624,
  [SMALL_STATE(138)] = 4641,
  [SMALL_STATE(139)] = 4653,
  [SMALL_STATE(140)] = 4665,
  [SMALL_STATE(141)] = 4679,
  [SMALL_STATE(142)] = 4699,
  [SMALL_STATE(143)] = 4711,
  [SMALL_STATE(144)] = 4723,
  [SMALL_STATE(145)] = 4743,
  [SMALL_STATE(146)] = 4763,
  [SMALL_STATE(147)] = 4779,
  [SMALL_STATE(148)] = 4791,
  [SMALL_STATE(149)] = 4811,
  [SMALL_STATE(150)] = 4827,
  [SMALL_STATE(151)] = 4841,
  [SMALL_STATE(152)] = 4855,
  [SMALL_STATE(153)] = 4867,
  [SMALL_STATE(154)] = 4887,
  [SMALL_STATE(155)] = 4898,
  [SMALL_STATE(156)] = 4909,
  [SMALL_STATE(157)] = 4926,
  [SMALL_STATE(158)] = 4937,
  [SMALL_STATE(159)] = 4952,
  [SMALL_STATE(160)] = 4967,
  [SMALL_STATE(161)] = 4978,
  [SMALL_STATE(162)] = 4989,
  [SMALL_STATE(163)] = 5004,
  [SMALL_STATE(164)] = 5017,
  [SMALL_STATE(165)] = 5028,
  [SMALL_STATE(166)] = 5043,
  [SMALL_STATE(167)] = 5054,
  [SMALL_STATE(168)] = 5065,
  [SMALL_STATE(169)] = 5076,
  [SMALL_STATE(170)] = 5087,
  [SMALL_STATE(171)] = 5104,
  [SMALL_STATE(172)] = 5119,
  [SMALL_STATE(173)] = 5130,
  [SMALL_STATE(174)] = 5141,
  [SMALL_STATE(175)] = 5156,
  [SMALL_STATE(176)] = 5171,
  [SMALL_STATE(177)] = 5182,
  [SMALL_STATE(178)] = 5193,
  [SMALL_STATE(179)] = 5210,
  [SMALL_STATE(180)] = 5221,
  [SMALL_STATE(181)] = 5232,
  [SMALL_STATE(182)] = 5243,
  [SMALL_STATE(183)] = 5254,
  [SMALL_STATE(184)] = 5269,
  [SMALL_STATE(185)] = 5284,
  [SMALL_STATE(186)] = 5295,
  [SMALL_STATE(187)] = 5306,
  [SMALL_STATE(188)] = 5317,
  [SMALL_STATE(189)] = 5328,
  [SMALL_STATE(190)] = 5343,
  [SMALL_STATE(191)] = 5354,
  [SMALL_STATE(192)] = 5365,
  [SMALL_STATE(193)] = 5376,
  [SMALL_STATE(194)] = 5391,
  [SMALL_STATE(195)] = 5402,
  [SMALL_STATE(196)] = 5417,
  [SMALL_STATE(197)] = 5428,
  [SMALL_STATE(198)] = 5439,
  [SMALL_STATE(199)] = 5454,
  [SMALL_STATE(200)] = 5465,
  [SMALL_STATE(201)] = 5476,
  [SMALL_STATE(202)] = 5487,
  [SMALL_STATE(203)] = 5498,
  [SMALL_STATE(204)] = 5509,
  [SMALL_STATE(205)] = 5520,
  [SMALL_STATE(206)] = 5531,
  [SMALL_STATE(207)] = 5546,
  [SMALL_STATE(208)] = 5561,
  [SMALL_STATE(209)] = 5572,
  [SMALL_STATE(210)] = 5583,
  [SMALL_STATE(211)] = 5594,
  [SMALL_STATE(212)] = 5605,
  [SMALL_STATE(213)] = 5620,
  [SMALL_STATE(214)] = 5631,
  [SMALL_STATE(215)] = 5642,
  [SMALL_STATE(216)] = 5653,
  [SMALL_STATE(217)] = 5664,
  [SMALL_STATE(218)] = 5678,
  [SMALL_STATE(219)] = 5688,
  [SMALL_STATE(220)] = 5698,
  [SMALL_STATE(221)] = 5710,
  [SMALL_STATE(222)] = 5720,
  [SMALL_STATE(223)] = 5734,
  [SMALL_STATE(224)] = 5744,
  [SMALL_STATE(225)] = 5758,
  [SMALL_STATE(226)] = 5770,
  [SMALL_STATE(227)] = 5782,
  [SMALL_STATE(228)] = 5794,
  [SMALL_STATE(229)] = 5804,
  [SMALL_STATE(230)] = 5816,
  [SMALL_STATE(231)] = 5828,
  [SMALL_STATE(232)] = 5838,
  [SMALL_STATE(233)] = 5848,
  [SMALL_STATE(234)] = 5860,
  [SMALL_STATE(235)] = 5870,
  [SMALL_STATE(236)] = 5880,
  [SMALL_STATE(237)] = 5892,
  [SMALL_STATE(238)] = 5902,
  [SMALL_STATE(239)] = 5912,
  [SMALL_STATE(240)] = 5922,
  [SMALL_STATE(241)] = 5934,
  [SMALL_STATE(242)] = 5946,
  [SMALL_STATE(243)] = 5956,
  [SMALL_STATE(244)] = 5967,
  [SMALL_STATE(245)] = 5978,
  [SMALL_STATE(246)] = 5989,
  [SMALL_STATE(247)] = 6000,
  [SMALL_STATE(248)] = 6011,
  [SMALL_STATE(249)] = 6022,
  [SMALL_STATE(250)] = 6033,
  [SMALL_STATE(251)] = 6044,
  [SMALL_STATE(252)] = 6055,
  [SMALL_STATE(253)] = 6066,
  [SMALL_STATE(254)] = 6077,
  [SMALL_STATE(255)] = 6088,
  [SMALL_STATE(256)] = 6099,
  [SMALL_STATE(257)] = 6112,
  [SMALL_STATE(258)] = 6123,
  [SMALL_STATE(259)] = 6134,
  [SMALL_STATE(260)] = 6145,
  [SMALL_STATE(261)] = 6156,
  [SMALL_STATE(262)] = 6167,
  [SMALL_STATE(263)] = 6178,
  [SMALL_STATE(264)] = 6186,
  [SMALL_STATE(265)] = 6194,
  [SMALL_STATE(266)] = 6202,
  [SMALL_STATE(267)] = 6210,
  [SMALL_STATE(268)] = 6218,
  [SMALL_STATE(269)] = 6226,
  [SMALL_STATE(270)] = 6234,
  [SMALL_STATE(271)] = 6242,
  [SMALL_STATE(272)] = 6252,
  [SMALL_STATE(273)] = 6260,
  [SMALL_STATE(274)] = 6268,
  [SMALL_STATE(275)] = 6276,
  [SMALL_STATE(276)] = 6284,
  [SMALL_STATE(277)] = 6292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(48),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(272),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(276),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(86),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(246),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(222),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(271),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(156),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(48),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(52),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(86),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(271),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(156),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(52),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(263),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(272),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(276),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(222),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(18),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(190),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(167),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(205),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(155),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(176),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(200),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(153),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(271),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(156),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(153),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(142),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(138),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(37),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(43),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(52),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(86),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(271),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(156),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(52),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(50),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(52),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(86),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(271),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(156),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(52),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(58),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(130),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(222),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(76),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(216),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(154),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(52),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(86),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(271),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(156),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(52),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(80),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(213),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(202),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(218),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(221),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(127),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(127),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(128),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(128),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(129),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(129),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(160),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(259),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(141),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(148),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(148),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(180),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(178),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(211),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(197),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [910] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_list_attr_key, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
