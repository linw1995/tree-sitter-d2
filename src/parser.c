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
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 3
#define TOKEN_COUNT 73
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
  aux_sym__identifier_token4 = 7,
  aux_sym_text_block_token1 = 8,
  sym_language = 9,
  anon_sym_direction = 10,
  anon_sym_shape = 11,
  anon_sym_label = 12,
  anon_sym_constraint = 13,
  anon_sym_icon = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_link = 17,
  anon_sym_tooltip = 18,
  anon_sym_width = 19,
  anon_sym_height = 20,
  anon_sym_vertical_DASHgap = 21,
  anon_sym_horizontal_DASHgap = 22,
  anon_sym_grid_DASHgap = 23,
  anon_sym_grid_DASHcolumns = 24,
  anon_sym_grid_DASHrows = 25,
  anon_sym_3d = 26,
  anon_sym_opacity = 27,
  anon_sym_fill = 28,
  anon_sym_fill_DASHpattern = 29,
  anon_sym_stroke = 30,
  anon_sym_stroke_DASHwidth = 31,
  anon_sym_stroke_DASHdash = 32,
  anon_sym_border_DASHradius = 33,
  anon_sym_double_DASHborder = 34,
  anon_sym_font = 35,
  anon_sym_font_DASHsize = 36,
  anon_sym_font_DASHcolor = 37,
  anon_sym_shadow = 38,
  anon_sym_multiple = 39,
  anon_sym_animated = 40,
  anon_sym_italic = 41,
  anon_sym_bold = 42,
  anon_sym_underline = 43,
  anon_sym_text_DASHtransform = 44,
  sym__text_attr_key = 45,
  anon_sym_source_DASHarrowhead = 46,
  anon_sym_target_DASHarrowhead = 47,
  sym_keyword_underscore = 48,
  sym_keyword_classes = 49,
  sym_keyword_class = 50,
  sym_keyword_style = 51,
  sym__dash = 52,
  anon_sym_COLON = 53,
  sym_arrow = 54,
  sym_dot = 55,
  aux_sym__unquoted_string_token1 = 56,
  anon_sym_SQUOTE = 57,
  anon_sym_DQUOTE = 58,
  sym__unescaped_single_string_fragment = 59,
  sym__unescaped_double_string_fragment = 60,
  sym_escape_sequence = 61,
  anon_sym_true = 62,
  anon_sym_false = 63,
  sym_integer = 64,
  sym_float = 65,
  sym_line_comment = 66,
  sym__eol = 67,
  anon_sym_SEMI = 68,
  sym__text_block_start = 69,
  sym__text_block_end = 70,
  sym__text_block_raw_text = 71,
  sym_block_comment = 72,
  sym_source_file = 73,
  sym__root_definition = 74,
  sym_connection = 75,
  sym__connection_path = 76,
  sym__connection_block = 77,
  sym_classes = 78,
  sym__classes_block = 79,
  sym__classes_item = 80,
  sym__classes_item_block = 81,
  sym__classes_item_attribute = 82,
  sym_container = 83,
  sym__container_block = 84,
  sym__container_block_definition = 85,
  sym_shape = 86,
  sym_shape_key = 87,
  sym__identifier = 88,
  sym_text_block = 89,
  sym__text_block_attrs = 90,
  sym__root_attribute = 91,
  sym__root_attr_key = 92,
  sym__shape_attribute = 93,
  sym__class_attribute = 94,
  sym_class_list = 95,
  sym__class_name = 96,
  sym__base_shape_attribute = 97,
  sym__shape_attr_key = 98,
  sym__shape_list_attr_key = 99,
  sym__style_attribute = 100,
  sym__style_attribute_block = 101,
  sym__inner_style_attribute = 102,
  sym__grid_attr_key = 103,
  sym__style_attr_key = 104,
  sym__common_style_attr_key = 105,
  sym__text_shape_attribute = 106,
  sym__connection_attribute = 107,
  sym__connection_arrowhead_attribute = 108,
  sym__connection_arrowhead_attr_key = 109,
  sym_label = 110,
  sym_attr_value_list = 111,
  sym_attr_value = 112,
  sym__colon = 113,
  aux_sym__unquoted_string = 114,
  sym_string = 115,
  sym_boolean = 116,
  sym__end = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_connection_repeat1 = 119,
  aux_sym__connection_path_repeat1 = 120,
  aux_sym__connection_block_repeat1 = 121,
  aux_sym__classes_block_repeat1 = 122,
  aux_sym__classes_item_block_repeat1 = 123,
  aux_sym__container_block_repeat1 = 124,
  aux_sym__identifier_repeat1 = 125,
  aux_sym__text_block_attrs_repeat1 = 126,
  aux_sym_class_list_repeat1 = 127,
  aux_sym__style_attribute_block_repeat1 = 128,
  aux_sym_attr_value_list_repeat1 = 129,
  aux_sym_string_repeat1 = 130,
  alias_sym_class_name = 131,
  alias_sym_container_key = 132,
  alias_sym_reserved = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [aux_sym__identifier_token4] = "_identifier_token4",
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
  [aux_sym__identifier_token4] = aux_sym__identifier_token4,
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
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 41,
  [45] = 40,
  [46] = 39,
  [47] = 41,
  [48] = 43,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 57,
  [65] = 53,
  [66] = 66,
  [67] = 56,
  [68] = 68,
  [69] = 55,
  [70] = 70,
  [71] = 53,
  [72] = 72,
  [73] = 56,
  [74] = 66,
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
      if (eof) ADVANCE(282);
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(279)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_2(lookahead)) SKIP(2)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_2(lookahead)) SKIP(2)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '3') ADVANCE(87);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(8)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '3') ADVANCE(87);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(14)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(14)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(389);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(257);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(395);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(393);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(393);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '>') ADVANCE(366);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(340);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(398);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 263:
      if (lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 264:
      if (lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 266:
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 267:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 270:
      if (lookahead == 'z') ADVANCE(103);
      END_STATE();
    case 271:
      if (lookahead == 'z') ADVANCE(187);
      END_STATE();
    case 272:
      if (lookahead == '{') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 273:
      if (lookahead == '}') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 278:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 279:
      if (eof) ADVANCE(282);
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (anon_sym__character_set_1(lookahead)) SKIP(279)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      if (eof) ADVANCE(282);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(294);
      if (anon_sym__character_set_1(lookahead)) SKIP(281)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      if (eof) ADVANCE(282);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(294);
      if (anon_sym__character_set_1(lookahead)) SKIP(281)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '>') ADVANCE(366);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(283);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(389);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(393);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(395);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 280, .external_lex_state = 2},
  [2] = {.lex_state = 280, .external_lex_state = 2},
  [3] = {.lex_state = 280, .external_lex_state = 2},
  [4] = {.lex_state = 15, .external_lex_state = 2},
  [5] = {.lex_state = 15, .external_lex_state = 2},
  [6] = {.lex_state = 15, .external_lex_state = 2},
  [7] = {.lex_state = 280, .external_lex_state = 2},
  [8] = {.lex_state = 15, .external_lex_state = 2},
  [9] = {.lex_state = 15, .external_lex_state = 2},
  [10] = {.lex_state = 15, .external_lex_state = 2},
  [11] = {.lex_state = 15, .external_lex_state = 2},
  [12] = {.lex_state = 15, .external_lex_state = 2},
  [13] = {.lex_state = 15, .external_lex_state = 2},
  [14] = {.lex_state = 7, .external_lex_state = 2},
  [15] = {.lex_state = 7, .external_lex_state = 2},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 15, .external_lex_state = 2},
  [21] = {.lex_state = 15, .external_lex_state = 2},
  [22] = {.lex_state = 15, .external_lex_state = 2},
  [23] = {.lex_state = 15, .external_lex_state = 2},
  [24] = {.lex_state = 15, .external_lex_state = 2},
  [25] = {.lex_state = 15, .external_lex_state = 2},
  [26] = {.lex_state = 7, .external_lex_state = 2},
  [27] = {.lex_state = 7, .external_lex_state = 2},
  [28] = {.lex_state = 7, .external_lex_state = 2},
  [29] = {.lex_state = 7, .external_lex_state = 2},
  [30] = {.lex_state = 7, .external_lex_state = 2},
  [31] = {.lex_state = 7, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 21, .external_lex_state = 2},
  [36] = {.lex_state = 21, .external_lex_state = 2},
  [37] = {.lex_state = 21, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 33, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 5, .external_lex_state = 3},
  [44] = {.lex_state = 33, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 3, .external_lex_state = 2},
  [47] = {.lex_state = 33, .external_lex_state = 2},
  [48] = {.lex_state = 17, .external_lex_state = 3},
  [49] = {.lex_state = 18, .external_lex_state = 3},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 17, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 33, .external_lex_state = 2},
  [56] = {.lex_state = 5, .external_lex_state = 2},
  [57] = {.lex_state = 33, .external_lex_state = 2},
  [58] = {.lex_state = 5, .external_lex_state = 2},
  [59] = {.lex_state = 33, .external_lex_state = 2},
  [60] = {.lex_state = 33, .external_lex_state = 2},
  [61] = {.lex_state = 33, .external_lex_state = 2},
  [62] = {.lex_state = 33, .external_lex_state = 2},
  [63] = {.lex_state = 33, .external_lex_state = 2},
  [64] = {.lex_state = 33, .external_lex_state = 2},
  [65] = {.lex_state = 5, .external_lex_state = 2},
  [66] = {.lex_state = 17, .external_lex_state = 2},
  [67] = {.lex_state = 17, .external_lex_state = 2},
  [68] = {.lex_state = 13, .external_lex_state = 2},
  [69] = {.lex_state = 33, .external_lex_state = 2},
  [70] = {.lex_state = 13, .external_lex_state = 2},
  [71] = {.lex_state = 18, .external_lex_state = 2},
  [72] = {.lex_state = 13, .external_lex_state = 2},
  [73] = {.lex_state = 18, .external_lex_state = 2},
  [74] = {.lex_state = 18, .external_lex_state = 2},
  [75] = {.lex_state = 7, .external_lex_state = 2},
  [76] = {.lex_state = 7, .external_lex_state = 2},
  [77] = {.lex_state = 7, .external_lex_state = 2},
  [78] = {.lex_state = 13, .external_lex_state = 2},
  [79] = {.lex_state = 21, .external_lex_state = 2},
  [80] = {.lex_state = 13, .external_lex_state = 2},
  [81] = {.lex_state = 21, .external_lex_state = 2},
  [82] = {.lex_state = 21, .external_lex_state = 2},
  [83] = {.lex_state = 7, .external_lex_state = 2},
  [84] = {.lex_state = 7, .external_lex_state = 2},
  [85] = {.lex_state = 7, .external_lex_state = 2},
  [86] = {.lex_state = 7, .external_lex_state = 2},
  [87] = {.lex_state = 7, .external_lex_state = 2},
  [88] = {.lex_state = 7, .external_lex_state = 2},
  [89] = {.lex_state = 13, .external_lex_state = 2},
  [90] = {.lex_state = 7, .external_lex_state = 2},
  [91] = {.lex_state = 7, .external_lex_state = 2},
  [92] = {.lex_state = 7, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 7, .external_lex_state = 2},
  [96] = {.lex_state = 7, .external_lex_state = 2},
  [97] = {.lex_state = 7, .external_lex_state = 2},
  [98] = {.lex_state = 13, .external_lex_state = 2},
  [99] = {.lex_state = 7, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 7, .external_lex_state = 2},
  [106] = {.lex_state = 7, .external_lex_state = 2},
  [107] = {.lex_state = 7, .external_lex_state = 2},
  [108] = {.lex_state = 7, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 13, .external_lex_state = 2},
  [112] = {.lex_state = 13, .external_lex_state = 2},
  [113] = {.lex_state = 9, .external_lex_state = 2},
  [114] = {.lex_state = 13, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 13, .external_lex_state = 2},
  [118] = {.lex_state = 13, .external_lex_state = 2},
  [119] = {.lex_state = 24, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 9, .external_lex_state = 2},
  [122] = {.lex_state = 13, .external_lex_state = 2},
  [123] = {.lex_state = 24, .external_lex_state = 2},
  [124] = {.lex_state = 7, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 23, .external_lex_state = 2},
  [127] = {.lex_state = 26, .external_lex_state = 2},
  [128] = {.lex_state = 10, .external_lex_state = 2},
  [129] = {.lex_state = 25, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 26, .external_lex_state = 2},
  [132] = {.lex_state = 23, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 10, .external_lex_state = 2},
  [136] = {.lex_state = 25, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 7, .external_lex_state = 2},
  [140] = {.lex_state = 7, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 27, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 7, .external_lex_state = 2},
  [151] = {.lex_state = 13, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 27, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 35, .external_lex_state = 2},
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
  [170] = {.lex_state = 35, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 35, .external_lex_state = 2},
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
  [243] = {.lex_state = 7, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 7, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 7, .external_lex_state = 2},
  [256] = {.lex_state = 36, .external_lex_state = 2},
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
  [271] = {.lex_state = 37, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 5},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 36, .external_lex_state = 2},
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
    [sym__root_definition] = STATE(3),
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
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__identifier_token1,
    ACTIONS(46), 1,
      sym_keyword_underscore,
    ACTIONS(49), 1,
      sym_keyword_classes,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_escape_sequence,
    ACTIONS(61), 1,
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
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    ACTIONS(43), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(163), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(34), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(37), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(40), 16,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
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
    STATE(2), 2,
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
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
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
  [374] = 21,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      aux_sym__identifier_token1,
    ACTIONS(92), 1,
      anon_sym_constraint,
    ACTIONS(95), 1,
      sym_keyword_underscore,
    ACTIONS(98), 1,
      sym_keyword_class,
    ACTIONS(101), 1,
      sym_keyword_style,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(113), 1,
      sym__eol,
    STATE(6), 1,
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
    ACTIONS(89), 14,
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
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(122), 1,
      sym_keyword_style,
    ACTIONS(124), 1,
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
  [579] = 17,
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
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
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
    ACTIONS(126), 1,
      aux_sym__identifier_token1,
    ACTIONS(129), 1,
      sym_keyword_underscore,
    ACTIONS(132), 1,
      sym_keyword_style,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
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
  [721] = 17,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(122), 1,
      sym_keyword_style,
    ACTIONS(126), 1,
      aux_sym__identifier_token1,
    ACTIONS(129), 1,
      sym_keyword_underscore,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
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
  [792] = 17,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(126), 1,
      aux_sym__identifier_token1,
    ACTIONS(129), 1,
      sym_keyword_underscore,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
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
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(132), 1,
      sym_keyword_style,
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
  [934] = 10,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_3d,
    ACTIONS(147), 1,
      sym__eol,
    STATE(16), 1,
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
  [983] = 10,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_3d,
    ACTIONS(160), 1,
      sym__eol,
    STATE(15), 1,
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
    ACTIONS(157), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(151), 16,
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
    ACTIONS(145), 1,
      anon_sym_3d,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      sym__eol,
    STATE(15), 1,
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
  [1231] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(122), 1,
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
  [1276] = 9,
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
  [1321] = 3,
    ACTIONS(189), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(84), 23,
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
  [1354] = 4,
    ACTIONS(189), 1,
      aux_sym__identifier_token1,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(84), 22,
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
  [1389] = 4,
    ACTIONS(189), 1,
      aux_sym__identifier_token1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(84), 22,
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
  [1424] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(132), 1,
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
  [1469] = 7,
    ACTIONS(145), 1,
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
  [1509] = 7,
    ACTIONS(145), 1,
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
  [1549] = 7,
    ACTIONS(145), 1,
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
  [1589] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(149), 19,
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
  [1620] = 4,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(149), 18,
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
  [1653] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(149), 18,
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
  [1903] = 7,
    ACTIONS(260), 1,
      aux_sym__identifier_token3,
    ACTIONS(262), 1,
      aux_sym__identifier_token4,
    ACTIONS(264), 1,
      sym__dash,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(256), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1934] = 7,
    ACTIONS(270), 1,
      aux_sym__identifier_token3,
    ACTIONS(272), 1,
      aux_sym__identifier_token4,
    ACTIONS(274), 1,
      sym__dash,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(266), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1965] = 6,
    ACTIONS(281), 1,
      aux_sym__identifier_token3,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(284), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(276), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1994] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(290), 1,
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
  [2035] = 7,
    ACTIONS(264), 1,
      sym__dash,
    ACTIONS(294), 1,
      aux_sym__identifier_token3,
    ACTIONS(296), 1,
      aux_sym__identifier_token4,
    STATE(46), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(256), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2066] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(306), 1,
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
    ACTIONS(298), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2111] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(310), 1,
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
  [2152] = 6,
    ACTIONS(315), 1,
      aux_sym__identifier_token3,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(312), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(276), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2181] = 7,
    ACTIONS(274), 1,
      sym__dash,
    ACTIONS(320), 1,
      aux_sym__identifier_token3,
    ACTIONS(322), 1,
      aux_sym__identifier_token4,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(266), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2212] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(326), 1,
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
  [2253] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym__text_block_start,
    ACTIONS(328), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(330), 1,
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
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2298] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym__text_block_start,
    ACTIONS(332), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(334), 1,
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
    ACTIONS(298), 2,
      sym__eol,
      anon_sym_SEMI,
  [2342] = 13,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      aux_sym__identifier_token1,
    ACTIONS(341), 1,
      sym_keyword_underscore,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_escape_sequence,
    ACTIONS(353), 1,
      sym__eol,
    STATE(50), 1,
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
  [2384] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      sym__eol,
    STATE(50), 1,
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
  [2426] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      sym__eol,
    STATE(51), 1,
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
  [2468] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(330), 1,
      sym_escape_sequence,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(366), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2507] = 12,
    ACTIONS(368), 1,
      aux_sym__identifier_token1,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 1,
      sym_keyword_underscore,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_escape_sequence,
    ACTIONS(385), 1,
      sym__eol,
    STATE(54), 1,
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
  [2546] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(326), 1,
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
  [2583] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(388), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2622] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(326), 1,
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
  [2659] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(239), 1,
      sym__classes_block,
    ACTIONS(392), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2698] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(290), 1,
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
  [2735] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(310), 1,
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
  [2772] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(326), 1,
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
  [2809] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(290), 1,
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
  [2846] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(310), 1,
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
  [2883] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(290), 1,
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
  [2920] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(366), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2959] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(330), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(228), 1,
      sym__container_block,
    ACTIONS(396), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2998] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(330), 1,
      sym_escape_sequence,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(388), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3037] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      sym__eol,
    STATE(54), 1,
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
  [3076] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(310), 1,
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
  [3113] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    ACTIONS(404), 1,
      sym__eol,
    STATE(68), 1,
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
  [3152] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(334), 1,
      sym_escape_sequence,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_label,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(152), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(366), 2,
      sym__eol,
      anon_sym_SEMI,
  [3190] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
      sym_escape_sequence,
    ACTIONS(406), 1,
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
  [3224] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(334), 1,
      sym_escape_sequence,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(388), 2,
      sym__eol,
      anon_sym_SEMI,
  [3262] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(334), 1,
      sym_escape_sequence,
    STATE(136), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_label,
    STATE(152), 1,
      sym_string,
    STATE(228), 1,
      sym__container_block,
    ACTIONS(396), 2,
      sym__eol,
      anon_sym_SEMI,
  [3300] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      sym__eol,
    STATE(77), 1,
      aux_sym__connection_block_repeat1,
    STATE(110), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(198), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3329] = 8,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      sym_keyword_style,
    ACTIONS(422), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym__connection_block_repeat1,
    STATE(120), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(225), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3358] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym__connection_block_repeat1,
    STATE(110), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(410), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(206), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3387] = 10,
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
  [3420] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    ACTIONS(432), 1,
      sym_escape_sequence,
    ACTIONS(233), 8,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3443] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__identifier_token1,
    ACTIONS(124), 1,
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
  [3476] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(432), 1,
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
  [3497] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_escape_sequence,
    ACTIONS(434), 1,
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
  [3520] = 2,
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
  [3536] = 3,
    ACTIONS(439), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3554] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(447), 1,
      sym_arrow,
    STATE(67), 1,
      sym__colon,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3582] = 2,
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
  [3598] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(451), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3614] = 8,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3642] = 9,
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
  [3672] = 3,
    ACTIONS(274), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3690] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3706] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(463), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3722] = 3,
    ACTIONS(465), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3740] = 3,
    ACTIONS(467), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(437), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3758] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(469), 1,
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
    ACTIONS(443), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3786] = 8,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(473), 1,
      sym_dot,
    STATE(48), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3814] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3830] = 9,
    ACTIONS(477), 1,
      aux_sym__identifier_token1,
    ACTIONS(480), 1,
      sym_keyword_underscore,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
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
  [3860] = 8,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(492), 1,
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
    ACTIONS(443), 2,
      sym__eol,
      anon_sym_SEMI,
  [3887] = 7,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      sym_dot,
    STATE(65), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3912] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3927] = 7,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(506), 1,
      sym_dot,
    STATE(53), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3952] = 7,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(514), 1,
      sym_dot,
    STATE(58), 1,
      sym__colon,
    STATE(234), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(508), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3977] = 7,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(516), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4002] = 3,
    ACTIONS(518), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4019] = 4,
    ACTIONS(522), 1,
      sym_arrow,
    STATE(106), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [4038] = 3,
    ACTIONS(518), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(525), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4055] = 8,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(529), 1,
      sym_dot,
    STATE(49), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 2,
      sym__eol,
      anon_sym_SEMI,
  [4082] = 7,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(531), 1,
      sym_dot,
    STATE(48), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4107] = 7,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(537), 1,
      sym_dot,
    STATE(66), 1,
      sym__colon,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4132] = 3,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4148] = 4,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4166] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(549), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4188] = 3,
    ACTIONS(552), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4204] = 7,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      sym_dot,
    STATE(49), 1,
      sym__colon,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 2,
      sym__eol,
      anon_sym_SEMI,
  [4228] = 7,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(558), 1,
      sym_dot,
    STATE(71), 1,
      sym__colon,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 2,
      sym__eol,
      anon_sym_SEMI,
  [4252] = 4,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4270] = 4,
    ACTIONS(552), 1,
      aux_sym__identifier_token1,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4288] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(570), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(566), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4310] = 7,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      sym_dot,
    STATE(74), 1,
      sym__colon,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(533), 2,
      sym__eol,
      anon_sym_SEMI,
  [4334] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(578), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(566), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4356] = 4,
    ACTIONS(552), 1,
      aux_sym__identifier_token1,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4374] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(586), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4396] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4410] = 4,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(589), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4427] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(597), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(593), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4448] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(602), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4469] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(608), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4490] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(614), 1,
      sym_escape_sequence,
    STATE(129), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4511] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(617), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4524] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(621), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(593), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4545] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(623), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(626), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4566] = 4,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(589), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4583] = 4,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(629), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4600] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(633), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    ACTIONS(593), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4621] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(637), 1,
      sym_escape_sequence,
    STATE(129), 1,
      aux_sym__unquoted_string,
    ACTIONS(566), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4642] = 4,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4659] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(641), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4671] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4683] = 3,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4697] = 6,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      sym__text_attr_key,
    ACTIONS(651), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(229), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4717] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(654), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4729] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(656), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4741] = 6,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      sym__text_attr_key,
    ACTIONS(662), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(174), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4761] = 6,
    ACTIONS(660), 1,
      sym__text_attr_key,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(666), 1,
      sym__eol,
    STATE(144), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(171), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4781] = 4,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(668), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4797] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4809] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(675), 1,
      sym_escape_sequence,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(544), 2,
      sym__eol,
      anon_sym_SEMI,
  [4829] = 4,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(678), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4845] = 3,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4859] = 3,
    ACTIONS(683), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(685), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4873] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4885] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(691), 1,
      sym_escape_sequence,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(593), 2,
      sym__eol,
      anon_sym_SEMI,
  [4905] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(693), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4916] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4927] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym_string_repeat1,
    ACTIONS(699), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4944] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(701), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4955] = 4,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(703), 2,
      sym__eol,
      anon_sym_SEMI,
  [4970] = 4,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(707), 2,
      sym__eol,
      anon_sym_SEMI,
  [4985] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(709), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4996] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(711), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5007] = 4,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(713), 2,
      sym__eol,
      anon_sym_SEMI,
  [5022] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(715), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5035] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(717), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5046] = 4,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 2,
      sym__eol,
      anon_sym_SEMI,
  [5061] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5072] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5083] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(727), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5094] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(729), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5105] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(733), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5122] = 4,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(735), 2,
      sym__eol,
      anon_sym_SEMI,
  [5137] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(737), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5148] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(739), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5159] = 4,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(743), 2,
      sym__eol,
      anon_sym_SEMI,
  [5174] = 4,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(745), 2,
      sym__eol,
      anon_sym_SEMI,
  [5189] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(747), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5200] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(749), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5211] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(753), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5228] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(756), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5239] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(758), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5250] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(760), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5261] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(762), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5272] = 4,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(764), 2,
      sym__eol,
      anon_sym_SEMI,
  [5287] = 4,
    ACTIONS(766), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(768), 2,
      sym__eol,
      anon_sym_SEMI,
  [5302] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(770), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5313] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(772), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5324] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(774), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5335] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(776), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5346] = 4,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(780), 2,
      sym__eol,
      anon_sym_SEMI,
  [5361] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(782), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5372] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(784), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5383] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(589), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5394] = 4,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(788), 2,
      sym__eol,
      anon_sym_SEMI,
  [5409] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(790), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5420] = 4,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(794), 2,
      sym__eol,
      anon_sym_SEMI,
  [5435] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(796), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5446] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(798), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5457] = 4,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(800), 2,
      sym__eol,
      anon_sym_SEMI,
  [5472] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5483] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(802), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5494] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(804), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5505] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(806), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5516] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(808), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5527] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(810), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5538] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(812), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5549] = 4,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(816), 2,
      sym__eol,
      anon_sym_SEMI,
  [5564] = 4,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(820), 2,
      sym__eol,
      anon_sym_SEMI,
  [5579] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(822), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5590] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(824), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5601] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(826), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5612] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(828), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5623] = 4,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(830), 2,
      sym__eol,
      anon_sym_SEMI,
  [5638] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(832), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5649] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(834), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5660] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(629), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5671] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(836), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5682] = 4,
    ACTIONS(838), 1,
      anon_sym_COLON,
    ACTIONS(840), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5696] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(842), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5706] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5716] = 3,
    STATE(81), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(844), 2,
      sym__eol,
      anon_sym_SEMI,
  [5728] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(846), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5738] = 4,
    ACTIONS(838), 1,
      anon_sym_COLON,
    ACTIONS(848), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5752] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(850), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5762] = 4,
    ACTIONS(838), 1,
      anon_sym_COLON,
    ACTIONS(852), 1,
      sym_dot,
    STATE(258), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5776] = 3,
    STATE(139), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(854), 2,
      sym__eol,
      anon_sym_SEMI,
  [5788] = 3,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(856), 2,
      sym__eol,
      anon_sym_SEMI,
  [5800] = 3,
    STATE(111), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(858), 2,
      sym__eol,
      anon_sym_SEMI,
  [5812] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(678), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5822] = 3,
    STATE(219), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(860), 2,
      sym__eol,
      anon_sym_SEMI,
  [5834] = 3,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 2,
      sym__text_attr_key,
      sym__eol,
  [5846] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(865), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5856] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(867), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5866] = 3,
    STATE(114), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(869), 2,
      sym__eol,
      anon_sym_SEMI,
  [5878] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(871), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5888] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(873), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5898] = 3,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 2,
      sym__text_attr_key,
      sym__eol,
  [5910] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(878), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5920] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(880), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(668), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5940] = 3,
    STATE(22), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(882), 2,
      sym__eol,
      anon_sym_SEMI,
  [5952] = 3,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(884), 2,
      sym__eol,
      anon_sym_SEMI,
  [5964] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(886), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5974] = 3,
    ACTIONS(447), 1,
      sym_arrow,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5985] = 3,
    ACTIONS(888), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5996] = 3,
    ACTIONS(447), 1,
      sym_arrow,
    STATE(85), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6007] = 3,
    ACTIONS(890), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6018] = 3,
    ACTIONS(132), 1,
      sym_keyword_style,
    STATE(228), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6029] = 3,
    ACTIONS(892), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6040] = 3,
    ACTIONS(894), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6051] = 3,
    ACTIONS(76), 1,
      sym_keyword_style,
    STATE(228), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6062] = 3,
    ACTIONS(896), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6073] = 3,
    ACTIONS(898), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6084] = 3,
    ACTIONS(900), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6095] = 3,
    ACTIONS(902), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6106] = 3,
    ACTIONS(447), 1,
      sym_arrow,
    STATE(99), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6117] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(904), 1,
      aux_sym_text_block_token1,
    ACTIONS(906), 1,
      sym_language,
  [6130] = 3,
    ACTIONS(908), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6141] = 3,
    ACTIONS(910), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6152] = 3,
    ACTIONS(912), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6163] = 3,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6174] = 3,
    ACTIONS(916), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6185] = 3,
    ACTIONS(918), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6196] = 2,
    ACTIONS(920), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6204] = 2,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6212] = 2,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6220] = 2,
    ACTIONS(926), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6228] = 2,
    ACTIONS(518), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6236] = 2,
    ACTIONS(928), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6244] = 2,
    ACTIONS(930), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6252] = 2,
    ACTIONS(932), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6260] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      sym__unescaped_single_string_fragment,
  [6270] = 2,
    ACTIONS(936), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6278] = 2,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6286] = 2,
    ACTIONS(940), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6294] = 2,
    ACTIONS(942), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6302] = 2,
    ACTIONS(944), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6310] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(946), 1,
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
  [SMALL_STATE(21)] = 1276,
  [SMALL_STATE(22)] = 1321,
  [SMALL_STATE(23)] = 1354,
  [SMALL_STATE(24)] = 1389,
  [SMALL_STATE(25)] = 1424,
  [SMALL_STATE(26)] = 1469,
  [SMALL_STATE(27)] = 1509,
  [SMALL_STATE(28)] = 1549,
  [SMALL_STATE(29)] = 1589,
  [SMALL_STATE(30)] = 1620,
  [SMALL_STATE(31)] = 1653,
  [SMALL_STATE(32)] = 1686,
  [SMALL_STATE(33)] = 1713,
  [SMALL_STATE(34)] = 1740,
  [SMALL_STATE(35)] = 1765,
  [SMALL_STATE(36)] = 1811,
  [SMALL_STATE(37)] = 1857,
  [SMALL_STATE(38)] = 1903,
  [SMALL_STATE(39)] = 1934,
  [SMALL_STATE(40)] = 1965,
  [SMALL_STATE(41)] = 1994,
  [SMALL_STATE(42)] = 2035,
  [SMALL_STATE(43)] = 2066,
  [SMALL_STATE(44)] = 2111,
  [SMALL_STATE(45)] = 2152,
  [SMALL_STATE(46)] = 2181,
  [SMALL_STATE(47)] = 2212,
  [SMALL_STATE(48)] = 2253,
  [SMALL_STATE(49)] = 2298,
  [SMALL_STATE(50)] = 2342,
  [SMALL_STATE(51)] = 2384,
  [SMALL_STATE(52)] = 2426,
  [SMALL_STATE(53)] = 2468,
  [SMALL_STATE(54)] = 2507,
  [SMALL_STATE(55)] = 2546,
  [SMALL_STATE(56)] = 2583,
  [SMALL_STATE(57)] = 2622,
  [SMALL_STATE(58)] = 2659,
  [SMALL_STATE(59)] = 2698,
  [SMALL_STATE(60)] = 2735,
  [SMALL_STATE(61)] = 2772,
  [SMALL_STATE(62)] = 2809,
  [SMALL_STATE(63)] = 2846,
  [SMALL_STATE(64)] = 2883,
  [SMALL_STATE(65)] = 2920,
  [SMALL_STATE(66)] = 2959,
  [SMALL_STATE(67)] = 2998,
  [SMALL_STATE(68)] = 3037,
  [SMALL_STATE(69)] = 3076,
  [SMALL_STATE(70)] = 3113,
  [SMALL_STATE(71)] = 3152,
  [SMALL_STATE(72)] = 3190,
  [SMALL_STATE(73)] = 3224,
  [SMALL_STATE(74)] = 3262,
  [SMALL_STATE(75)] = 3300,
  [SMALL_STATE(76)] = 3329,
  [SMALL_STATE(77)] = 3358,
  [SMALL_STATE(78)] = 3387,
  [SMALL_STATE(79)] = 3420,
  [SMALL_STATE(80)] = 3443,
  [SMALL_STATE(81)] = 3476,
  [SMALL_STATE(82)] = 3497,
  [SMALL_STATE(83)] = 3520,
  [SMALL_STATE(84)] = 3536,
  [SMALL_STATE(85)] = 3554,
  [SMALL_STATE(86)] = 3582,
  [SMALL_STATE(87)] = 3598,
  [SMALL_STATE(88)] = 3614,
  [SMALL_STATE(89)] = 3642,
  [SMALL_STATE(90)] = 3672,
  [SMALL_STATE(91)] = 3690,
  [SMALL_STATE(92)] = 3706,
  [SMALL_STATE(93)] = 3722,
  [SMALL_STATE(94)] = 3740,
  [SMALL_STATE(95)] = 3758,
  [SMALL_STATE(96)] = 3786,
  [SMALL_STATE(97)] = 3814,
  [SMALL_STATE(98)] = 3830,
  [SMALL_STATE(99)] = 3860,
  [SMALL_STATE(100)] = 3887,
  [SMALL_STATE(101)] = 3912,
  [SMALL_STATE(102)] = 3927,
  [SMALL_STATE(103)] = 3952,
  [SMALL_STATE(104)] = 3977,
  [SMALL_STATE(105)] = 4002,
  [SMALL_STATE(106)] = 4019,
  [SMALL_STATE(107)] = 4038,
  [SMALL_STATE(108)] = 4055,
  [SMALL_STATE(109)] = 4082,
  [SMALL_STATE(110)] = 4107,
  [SMALL_STATE(111)] = 4132,
  [SMALL_STATE(112)] = 4148,
  [SMALL_STATE(113)] = 4166,
  [SMALL_STATE(114)] = 4188,
  [SMALL_STATE(115)] = 4204,
  [SMALL_STATE(116)] = 4228,
  [SMALL_STATE(117)] = 4252,
  [SMALL_STATE(118)] = 4270,
  [SMALL_STATE(119)] = 4288,
  [SMALL_STATE(120)] = 4310,
  [SMALL_STATE(121)] = 4334,
  [SMALL_STATE(122)] = 4356,
  [SMALL_STATE(123)] = 4374,
  [SMALL_STATE(124)] = 4396,
  [SMALL_STATE(125)] = 4410,
  [SMALL_STATE(126)] = 4427,
  [SMALL_STATE(127)] = 4448,
  [SMALL_STATE(128)] = 4469,
  [SMALL_STATE(129)] = 4490,
  [SMALL_STATE(130)] = 4511,
  [SMALL_STATE(131)] = 4524,
  [SMALL_STATE(132)] = 4545,
  [SMALL_STATE(133)] = 4566,
  [SMALL_STATE(134)] = 4583,
  [SMALL_STATE(135)] = 4600,
  [SMALL_STATE(136)] = 4621,
  [SMALL_STATE(137)] = 4642,
  [SMALL_STATE(138)] = 4659,
  [SMALL_STATE(139)] = 4671,
  [SMALL_STATE(140)] = 4683,
  [SMALL_STATE(141)] = 4697,
  [SMALL_STATE(142)] = 4717,
  [SMALL_STATE(143)] = 4729,
  [SMALL_STATE(144)] = 4741,
  [SMALL_STATE(145)] = 4761,
  [SMALL_STATE(146)] = 4781,
  [SMALL_STATE(147)] = 4797,
  [SMALL_STATE(148)] = 4809,
  [SMALL_STATE(149)] = 4829,
  [SMALL_STATE(150)] = 4845,
  [SMALL_STATE(151)] = 4859,
  [SMALL_STATE(152)] = 4873,
  [SMALL_STATE(153)] = 4885,
  [SMALL_STATE(154)] = 4905,
  [SMALL_STATE(155)] = 4916,
  [SMALL_STATE(156)] = 4927,
  [SMALL_STATE(157)] = 4944,
  [SMALL_STATE(158)] = 4955,
  [SMALL_STATE(159)] = 4970,
  [SMALL_STATE(160)] = 4985,
  [SMALL_STATE(161)] = 4996,
  [SMALL_STATE(162)] = 5007,
  [SMALL_STATE(163)] = 5022,
  [SMALL_STATE(164)] = 5035,
  [SMALL_STATE(165)] = 5046,
  [SMALL_STATE(166)] = 5061,
  [SMALL_STATE(167)] = 5072,
  [SMALL_STATE(168)] = 5083,
  [SMALL_STATE(169)] = 5094,
  [SMALL_STATE(170)] = 5105,
  [SMALL_STATE(171)] = 5122,
  [SMALL_STATE(172)] = 5137,
  [SMALL_STATE(173)] = 5148,
  [SMALL_STATE(174)] = 5159,
  [SMALL_STATE(175)] = 5174,
  [SMALL_STATE(176)] = 5189,
  [SMALL_STATE(177)] = 5200,
  [SMALL_STATE(178)] = 5211,
  [SMALL_STATE(179)] = 5228,
  [SMALL_STATE(180)] = 5239,
  [SMALL_STATE(181)] = 5250,
  [SMALL_STATE(182)] = 5261,
  [SMALL_STATE(183)] = 5272,
  [SMALL_STATE(184)] = 5287,
  [SMALL_STATE(185)] = 5302,
  [SMALL_STATE(186)] = 5313,
  [SMALL_STATE(187)] = 5324,
  [SMALL_STATE(188)] = 5335,
  [SMALL_STATE(189)] = 5346,
  [SMALL_STATE(190)] = 5361,
  [SMALL_STATE(191)] = 5372,
  [SMALL_STATE(192)] = 5383,
  [SMALL_STATE(193)] = 5394,
  [SMALL_STATE(194)] = 5409,
  [SMALL_STATE(195)] = 5420,
  [SMALL_STATE(196)] = 5435,
  [SMALL_STATE(197)] = 5446,
  [SMALL_STATE(198)] = 5457,
  [SMALL_STATE(199)] = 5472,
  [SMALL_STATE(200)] = 5483,
  [SMALL_STATE(201)] = 5494,
  [SMALL_STATE(202)] = 5505,
  [SMALL_STATE(203)] = 5516,
  [SMALL_STATE(204)] = 5527,
  [SMALL_STATE(205)] = 5538,
  [SMALL_STATE(206)] = 5549,
  [SMALL_STATE(207)] = 5564,
  [SMALL_STATE(208)] = 5579,
  [SMALL_STATE(209)] = 5590,
  [SMALL_STATE(210)] = 5601,
  [SMALL_STATE(211)] = 5612,
  [SMALL_STATE(212)] = 5623,
  [SMALL_STATE(213)] = 5638,
  [SMALL_STATE(214)] = 5649,
  [SMALL_STATE(215)] = 5660,
  [SMALL_STATE(216)] = 5671,
  [SMALL_STATE(217)] = 5682,
  [SMALL_STATE(218)] = 5696,
  [SMALL_STATE(219)] = 5706,
  [SMALL_STATE(220)] = 5716,
  [SMALL_STATE(221)] = 5728,
  [SMALL_STATE(222)] = 5738,
  [SMALL_STATE(223)] = 5752,
  [SMALL_STATE(224)] = 5762,
  [SMALL_STATE(225)] = 5776,
  [SMALL_STATE(226)] = 5788,
  [SMALL_STATE(227)] = 5800,
  [SMALL_STATE(228)] = 5812,
  [SMALL_STATE(229)] = 5822,
  [SMALL_STATE(230)] = 5834,
  [SMALL_STATE(231)] = 5846,
  [SMALL_STATE(232)] = 5856,
  [SMALL_STATE(233)] = 5866,
  [SMALL_STATE(234)] = 5878,
  [SMALL_STATE(235)] = 5888,
  [SMALL_STATE(236)] = 5898,
  [SMALL_STATE(237)] = 5910,
  [SMALL_STATE(238)] = 5920,
  [SMALL_STATE(239)] = 5930,
  [SMALL_STATE(240)] = 5940,
  [SMALL_STATE(241)] = 5952,
  [SMALL_STATE(242)] = 5964,
  [SMALL_STATE(243)] = 5974,
  [SMALL_STATE(244)] = 5985,
  [SMALL_STATE(245)] = 5996,
  [SMALL_STATE(246)] = 6007,
  [SMALL_STATE(247)] = 6018,
  [SMALL_STATE(248)] = 6029,
  [SMALL_STATE(249)] = 6040,
  [SMALL_STATE(250)] = 6051,
  [SMALL_STATE(251)] = 6062,
  [SMALL_STATE(252)] = 6073,
  [SMALL_STATE(253)] = 6084,
  [SMALL_STATE(254)] = 6095,
  [SMALL_STATE(255)] = 6106,
  [SMALL_STATE(256)] = 6117,
  [SMALL_STATE(257)] = 6130,
  [SMALL_STATE(258)] = 6141,
  [SMALL_STATE(259)] = 6152,
  [SMALL_STATE(260)] = 6163,
  [SMALL_STATE(261)] = 6174,
  [SMALL_STATE(262)] = 6185,
  [SMALL_STATE(263)] = 6196,
  [SMALL_STATE(264)] = 6204,
  [SMALL_STATE(265)] = 6212,
  [SMALL_STATE(266)] = 6220,
  [SMALL_STATE(267)] = 6228,
  [SMALL_STATE(268)] = 6236,
  [SMALL_STATE(269)] = 6244,
  [SMALL_STATE(270)] = 6252,
  [SMALL_STATE(271)] = 6260,
  [SMALL_STATE(272)] = 6270,
  [SMALL_STATE(273)] = 6278,
  [SMALL_STATE(274)] = 6286,
  [SMALL_STATE(275)] = 6294,
  [SMALL_STATE(276)] = 6302,
  [SMALL_STATE(277)] = 6310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(42),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(272),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(276),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(86),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(246),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(222),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(271),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(156),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(42),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(38),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(86),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(271),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(156),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(263),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
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
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(167),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(190),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(155),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(205),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(200),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(176),
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
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(40),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(40),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(45),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(45),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(38),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(86),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(271),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(156),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(38),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(50),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(38),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(86),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(271),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(156),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(38),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(54),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(130),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(222),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(76),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(154),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(216),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(38),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(86),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(271),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(156),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(38),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(78),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(213),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(202),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(218),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(221),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(127),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(127),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(128),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(128),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(129),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(129),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(160),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(259),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(141),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(148),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(148),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(180),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(178),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(211),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(197),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [924] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_list_attr_key, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
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
