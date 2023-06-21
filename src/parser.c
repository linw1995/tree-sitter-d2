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
  sym__colon = 53,
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
  [sym__colon] = "_colon",
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
  [sym__colon] = sym__colon,
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
  [sym__colon] = {
    .visible = false,
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
  [9] = 9,
  [10] = 8,
  [11] = 9,
  [12] = 8,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 22,
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
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 43,
  [45] = 40,
  [46] = 46,
  [47] = 46,
  [48] = 46,
  [49] = 49,
  [50] = 38,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 56,
  [60] = 60,
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 67,
  [68] = 63,
  [69] = 57,
  [70] = 70,
  [71] = 71,
  [72] = 54,
  [73] = 60,
  [74] = 53,
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
  [92] = 84,
  [93] = 93,
  [94] = 88,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 95,
  [102] = 96,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 95,
  [107] = 107,
  [108] = 108,
  [109] = 104,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 96,
  [114] = 108,
  [115] = 105,
  [116] = 111,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 104,
  [123] = 107,
  [124] = 124,
  [125] = 108,
  [126] = 126,
  [127] = 104,
  [128] = 111,
  [129] = 129,
  [130] = 104,
  [131] = 104,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 132,
  [136] = 105,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 132,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 104,
  [153] = 153,
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
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 241,
  [243] = 243,
  [244] = 244,
  [245] = 240,
  [246] = 241,
  [247] = 244,
  [248] = 248,
  [249] = 244,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 260,
  [264] = 262,
  [265] = 265,
  [266] = 265,
  [267] = 252,
  [268] = 268,
  [269] = 260,
  [270] = 262,
  [271] = 271,
  [272] = 265,
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
      if (eof) ADVANCE(267);
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '[') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(265)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_2(lookahead)) SKIP(2)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_2(lookahead)) SKIP(2)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '3') ADVANCE(73);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(7)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '3') ADVANCE(73);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '[') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(374);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(374);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(374);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '[') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(243);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(300);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(378);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(378);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(352);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '>') ADVANCE(351);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(383);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 249:
      if (lookahead == 'w') ADVANCE(331);
      END_STATE();
    case 250:
      if (lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 253:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 256:
      if (lookahead == 'z') ADVANCE(89);
      END_STATE();
    case 257:
      if (lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 258:
      if (lookahead == '{') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 259:
      if (lookahead == '}') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 264:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '[') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (anon_sym__character_set_1(lookahead)) SKIP(265)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(279);
      if (anon_sym__character_set_1(lookahead)) SKIP(266)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '>') ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '>') ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(268);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(357);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '[') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(374);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(378);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(380);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 266, .external_lex_state = 2},
  [2] = {.lex_state = 266, .external_lex_state = 2},
  [3] = {.lex_state = 266, .external_lex_state = 2},
  [4] = {.lex_state = 11, .external_lex_state = 2},
  [5] = {.lex_state = 11, .external_lex_state = 2},
  [6] = {.lex_state = 11, .external_lex_state = 2},
  [7] = {.lex_state = 266, .external_lex_state = 2},
  [8] = {.lex_state = 11, .external_lex_state = 2},
  [9] = {.lex_state = 11, .external_lex_state = 2},
  [10] = {.lex_state = 11, .external_lex_state = 2},
  [11] = {.lex_state = 11, .external_lex_state = 2},
  [12] = {.lex_state = 11, .external_lex_state = 2},
  [13] = {.lex_state = 11, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 11, .external_lex_state = 2},
  [21] = {.lex_state = 11, .external_lex_state = 2},
  [22] = {.lex_state = 11, .external_lex_state = 2},
  [23] = {.lex_state = 11, .external_lex_state = 2},
  [24] = {.lex_state = 11, .external_lex_state = 2},
  [25] = {.lex_state = 11, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 2},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 2},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 6, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 14, .external_lex_state = 2},
  [36] = {.lex_state = 14, .external_lex_state = 2},
  [37] = {.lex_state = 14, .external_lex_state = 2},
  [38] = {.lex_state = 5, .external_lex_state = 3},
  [39] = {.lex_state = 12, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 3, .external_lex_state = 2},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 20, .external_lex_state = 2},
  [47] = {.lex_state = 20, .external_lex_state = 2},
  [48] = {.lex_state = 20, .external_lex_state = 2},
  [49] = {.lex_state = 10, .external_lex_state = 2},
  [50] = {.lex_state = 13, .external_lex_state = 3},
  [51] = {.lex_state = 10, .external_lex_state = 2},
  [52] = {.lex_state = 10, .external_lex_state = 2},
  [53] = {.lex_state = 5, .external_lex_state = 2},
  [54] = {.lex_state = 12, .external_lex_state = 2},
  [55] = {.lex_state = 12, .external_lex_state = 2},
  [56] = {.lex_state = 20, .external_lex_state = 2},
  [57] = {.lex_state = 20, .external_lex_state = 2},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 20, .external_lex_state = 2},
  [60] = {.lex_state = 12, .external_lex_state = 2},
  [61] = {.lex_state = 5, .external_lex_state = 2},
  [62] = {.lex_state = 20, .external_lex_state = 2},
  [63] = {.lex_state = 20, .external_lex_state = 2},
  [64] = {.lex_state = 10, .external_lex_state = 2},
  [65] = {.lex_state = 10, .external_lex_state = 2},
  [66] = {.lex_state = 20, .external_lex_state = 2},
  [67] = {.lex_state = 5, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 2},
  [70] = {.lex_state = 10, .external_lex_state = 2},
  [71] = {.lex_state = 10, .external_lex_state = 2},
  [72] = {.lex_state = 13, .external_lex_state = 2},
  [73] = {.lex_state = 13, .external_lex_state = 2},
  [74] = {.lex_state = 13, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 10, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 10, .external_lex_state = 2},
  [79] = {.lex_state = 14, .external_lex_state = 2},
  [80] = {.lex_state = 14, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 14, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 10, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 6, .external_lex_state = 2},
  [91] = {.lex_state = 10, .external_lex_state = 2},
  [92] = {.lex_state = 6, .external_lex_state = 2},
  [93] = {.lex_state = 6, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 6, .external_lex_state = 2},
  [96] = {.lex_state = 6, .external_lex_state = 2},
  [97] = {.lex_state = 6, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 6, .external_lex_state = 2},
  [100] = {.lex_state = 6, .external_lex_state = 2},
  [101] = {.lex_state = 6, .external_lex_state = 2},
  [102] = {.lex_state = 6, .external_lex_state = 2},
  [103] = {.lex_state = 10, .external_lex_state = 2},
  [104] = {.lex_state = 8, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 6, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 16, .external_lex_state = 2},
  [109] = {.lex_state = 16, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 10, .external_lex_state = 2},
  [113] = {.lex_state = 6, .external_lex_state = 2},
  [114] = {.lex_state = 8, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 10, .external_lex_state = 2},
  [118] = {.lex_state = 10, .external_lex_state = 2},
  [119] = {.lex_state = 10, .external_lex_state = 2},
  [120] = {.lex_state = 6, .external_lex_state = 2},
  [121] = {.lex_state = 10, .external_lex_state = 2},
  [122] = {.lex_state = 18, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 17, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 9, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 17, .external_lex_state = 2},
  [131] = {.lex_state = 15, .external_lex_state = 2},
  [132] = {.lex_state = 15, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 18, .external_lex_state = 2},
  [135] = {.lex_state = 9, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 6, .external_lex_state = 2},
  [140] = {.lex_state = 10, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 19, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 6, .external_lex_state = 2},
  [151] = {.lex_state = 6, .external_lex_state = 2},
  [152] = {.lex_state = 19, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 21, .external_lex_state = 2},
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
  [170] = {.lex_state = 21, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 21, .external_lex_state = 2},
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
  [241] = {.lex_state = 6, .external_lex_state = 2},
  [242] = {.lex_state = 6, .external_lex_state = 2},
  [243] = {.lex_state = 22, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 6, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 22, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 23, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 4},
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
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_end] = true,
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
    [sym__colon] = ACTIONS(1),
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
    [sym_source_file] = STATE(261),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(163),
    [sym__connection_path] = STATE(242),
    [sym_classes] = STATE(163),
    [sym_container] = STATE(163),
    [sym_shape] = STATE(163),
    [sym_shape_key] = STATE(95),
    [sym__identifier] = STATE(85),
    [sym__root_attribute] = STATE(163),
    [sym__root_attr_key] = STATE(258),
    [sym__grid_attr_key] = STATE(276),
    [sym__common_style_attr_key] = STATE(274),
    [sym_string] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(87),
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
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(242), 1,
      sym__connection_path,
    STATE(258), 1,
      sym__root_attr_key,
    STATE(274), 1,
      sym__common_style_attr_key,
    STATE(276), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(85), 2,
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
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(242), 1,
      sym__connection_path,
    STATE(258), 1,
      sym__root_attr_key,
    STATE(274), 1,
      sym__common_style_attr_key,
    STATE(276), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(85), 2,
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
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(101), 1,
      sym_shape_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(106), 1,
      sym_shape_key,
    STATE(246), 1,
      sym__connection_path,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(269), 1,
      sym__shape_attr_key,
    STATE(270), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(238), 8,
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
    STATE(105), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(263), 1,
      sym__shape_attr_key,
    STATE(264), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    ACTIONS(126), 1,
      sym_keyword_style,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    STATE(105), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(263), 1,
      sym__shape_attr_key,
    STATE(264), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    ACTIONS(141), 1,
      sym_keyword_style,
    STATE(136), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(269), 1,
      sym__shape_attr_key,
    STATE(270), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(141), 1,
      sym_keyword_style,
    STATE(136), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(269), 1,
      sym__shape_attr_key,
    STATE(270), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    STATE(115), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    STATE(115), 1,
      sym_shape_key,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
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
    STATE(188), 1,
      sym__inner_style_attribute,
    STATE(265), 1,
      sym__style_attr_key,
    STATE(275), 1,
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
    ACTIONS(145), 1,
      anon_sym_3d,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(161), 1,
      sym__inner_style_attribute,
    STATE(265), 1,
      sym__style_attr_key,
    STATE(275), 1,
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
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_3d,
    ACTIONS(164), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(226), 1,
      sym__inner_style_attribute,
    STATE(272), 1,
      sym__style_attr_key,
    STATE(275), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(155), 16,
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
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_constraint,
    ACTIONS(175), 1,
      sym_keyword_style,
    ACTIONS(178), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(269), 1,
      sym__shape_attr_key,
    STATE(270), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(218), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(169), 14,
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
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
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
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
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
  [1231] = 3,
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
  [1264] = 4,
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
  [1299] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(76), 1,
      sym_keyword_style,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(262), 1,
      sym__shape_list_attr_key,
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
  [1344] = 9,
    ACTIONS(72), 1,
      anon_sym_constraint,
    ACTIONS(74), 1,
      sym_keyword_class,
    ACTIONS(126), 1,
      sym_keyword_style,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(263), 1,
      sym__shape_attr_key,
    STATE(264), 1,
      sym__shape_list_attr_key,
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
    ACTIONS(141), 1,
      sym_keyword_style,
    STATE(250), 1,
      sym__grid_attr_key,
    STATE(269), 1,
      sym__shape_attr_key,
    STATE(270), 1,
      sym__shape_list_attr_key,
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
    STATE(272), 1,
      sym__style_attr_key,
    STATE(275), 1,
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
    STATE(265), 1,
      sym__style_attr_key,
    STATE(275), 1,
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
    STATE(266), 1,
      sym__style_attr_key,
    STATE(275), 1,
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
    ACTIONS(153), 18,
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
  [1622] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(153), 19,
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
  [1653] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(153), 18,
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
    ACTIONS(167), 17,
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
    ACTIONS(167), 17,
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
    ACTIONS(167), 18,
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
  [1765] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      sym__eol,
    STATE(36), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(132), 1,
      aux_sym__unquoted_string,
    STATE(165), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [1809] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(132), 1,
      aux_sym__unquoted_string,
    STATE(193), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [1853] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym_attr_value_list_repeat1,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(220), 1,
      sym_attr_value,
    ACTIONS(233), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 2,
      sym_integer,
      sym_float,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [1897] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym__text_block_start,
    STATE(114), 1,
      aux_sym__unquoted_string,
    STATE(124), 1,
      sym_label,
    STATE(137), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(255), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(251), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1940] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym__text_block_start,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(124), 1,
      sym_label,
    STATE(137), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(259), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1983] = 7,
    ACTIONS(265), 1,
      aux_sym__identifier_token3,
    ACTIONS(267), 1,
      aux_sym__identifier_token4,
    ACTIONS(269), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(263), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(261), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2014] = 7,
    ACTIONS(275), 1,
      aux_sym__identifier_token3,
    ACTIONS(277), 1,
      aux_sym__identifier_token4,
    ACTIONS(279), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(271), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2045] = 7,
    ACTIONS(279), 1,
      sym__dash,
    ACTIONS(283), 1,
      aux_sym__identifier_token3,
    ACTIONS(285), 1,
      aux_sym__identifier_token4,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(271), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2076] = 6,
    ACTIONS(292), 1,
      aux_sym__identifier_token3,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(289), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(295), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(287), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2105] = 6,
    ACTIONS(300), 1,
      aux_sym__identifier_token3,
    STATE(44), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 2,
      aux_sym__identifier_token4,
      sym__dash,
    ACTIONS(297), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(287), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2134] = 7,
    ACTIONS(269), 1,
      sym__dash,
    ACTIONS(305), 1,
      aux_sym__identifier_token3,
    ACTIONS(307), 1,
      aux_sym__identifier_token4,
    STATE(44), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(261), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2165] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      aux_sym__unquoted_string,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(311), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
    STATE(187), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2204] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      aux_sym__unquoted_string,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(313), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
    STATE(187), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2243] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      aux_sym__unquoted_string,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(315), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
    STATE(187), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2282] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      sym__eol,
    STATE(52), 1,
      aux_sym__classes_block_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(111), 1,
      sym__class_name,
    STATE(175), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2324] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym__text_block_start,
    STATE(124), 1,
      sym_label,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(185), 1,
      sym__container_block,
    ACTIONS(251), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [2366] = 13,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      aux_sym__identifier_token1,
    ACTIONS(328), 1,
      sym_keyword_underscore,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      sym_escape_sequence,
    ACTIONS(340), 1,
      sym__eol,
    STATE(51), 1,
      aux_sym__classes_block_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(128), 1,
      sym__class_name,
    STATE(225), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2408] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym__eol,
    STATE(51), 1,
      aux_sym__classes_block_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(111), 1,
      sym__class_name,
    STATE(195), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2450] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      aux_sym__unquoted_string,
    STATE(133), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(255), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(347), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2487] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(259), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(353), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2524] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(133), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(259), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(347), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2561] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(190), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(315), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2596] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(187), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(313), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2631] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(134), 1,
      aux_sym__unquoted_string,
    STATE(190), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(311), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2666] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(190), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(313), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2701] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(138), 1,
      sym_string,
    STATE(149), 1,
      sym_label,
    STATE(239), 1,
      sym__container_block,
    ACTIONS(259), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(355), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2738] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(255), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(353), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2775] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(237), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(313), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2810] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(231), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(315), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2845] = 12,
    ACTIONS(357), 1,
      aux_sym__identifier_token1,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      sym_keyword_underscore,
    ACTIONS(365), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_escape_sequence,
    ACTIONS(374), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym_class_list_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(217), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2884] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_class_list_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(158), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2923] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(187), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(315), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [2958] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      aux_sym__unquoted_string,
    STATE(138), 1,
      sym_string,
    STATE(145), 1,
      sym_label,
    STATE(229), 1,
      sym__classes_block,
    ACTIONS(255), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(381), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2995] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(134), 1,
      aux_sym__unquoted_string,
    STATE(231), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(311), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [3030] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(134), 1,
      aux_sym__unquoted_string,
    STATE(187), 1,
      sym_attr_value,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_float,
    ACTIONS(311), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_string,
      sym_boolean,
  [3065] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym_class_list_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(184), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3104] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(201), 2,
      sym_class_list,
      sym__class_name,
  [3138] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(215), 1,
      sym__classes_item_block,
    ACTIONS(321), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(353), 2,
      sym__eol,
      anon_sym_SEMI,
  [3174] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(138), 1,
      sym_string,
    STATE(149), 1,
      sym_label,
    STATE(239), 1,
      sym__container_block,
    ACTIONS(321), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(355), 2,
      sym__eol,
      anon_sym_SEMI,
  [3210] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(133), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(199), 1,
      sym__connection_block,
    ACTIONS(321), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(347), 2,
      sym__eol,
      anon_sym_SEMI,
  [3246] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      sym__eol,
    STATE(77), 1,
      aux_sym__connection_block_repeat1,
    STATE(107), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(198), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3275] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_escape_sequence,
    STATE(98), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__class_name,
    STATE(229), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3308] = 8,
    ACTIONS(76), 1,
      sym_keyword_style,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym__connection_block_repeat1,
    STATE(107), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(206), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3337] = 10,
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
    STATE(87), 1,
      aux_sym__connection_path_repeat1,
    STATE(99), 1,
      sym_shape_key,
    STATE(120), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3370] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3391] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(231), 10,
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
  [3410] = 8,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      sym_keyword_style,
    ACTIONS(412), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym__connection_block_repeat1,
    STATE(123), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(406), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(236), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3439] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym__eol,
  [3460] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(418), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3476] = 3,
    ACTIONS(420), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(418), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3494] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(422), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3510] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(424), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3526] = 9,
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
    STATE(91), 1,
      aux_sym__connection_path_repeat1,
    STATE(97), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3556] = 3,
    ACTIONS(269), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(261), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3574] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(261), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3590] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(426), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3606] = 9,
    ACTIONS(428), 1,
      aux_sym__identifier_token1,
    ACTIONS(431), 1,
      sym_keyword_underscore,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      sym_escape_sequence,
    STATE(91), 1,
      aux_sym__connection_path_repeat1,
    STATE(268), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3636] = 3,
    ACTIONS(443), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(418), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3654] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3670] = 3,
    ACTIONS(447), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(261), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3688] = 7,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      sym__colon,
    ACTIONS(455), 1,
      sym_arrow,
    ACTIONS(457), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3713] = 7,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      sym__colon,
    ACTIONS(465), 1,
      sym_arrow,
    STATE(100), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3738] = 3,
    ACTIONS(469), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3755] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(471), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3770] = 3,
    ACTIONS(469), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3787] = 4,
    ACTIONS(475), 1,
      sym_arrow,
    STATE(100), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym__eol,
      anon_sym_SEMI,
  [3806] = 7,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      sym_arrow,
    ACTIONS(478), 1,
      sym__colon,
    ACTIONS(480), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3831] = 7,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      sym_arrow,
    ACTIONS(482), 1,
      sym__colon,
    STATE(100), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3856] = 3,
    ACTIONS(484), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3872] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(104), 1,
      aux_sym__unquoted_string,
    ACTIONS(488), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3892] = 6,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      sym__colon,
    ACTIONS(491), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3914] = 7,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      sym_arrow,
    ACTIONS(493), 1,
      sym__colon,
    ACTIONS(495), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__eol,
      anon_sym_SEMI,
  [3938] = 6,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      sym__colon,
    ACTIONS(501), 1,
      sym_dot,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3960] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(109), 1,
      aux_sym__unquoted_string,
    ACTIONS(505), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(503), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3980] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(109), 1,
      aux_sym__unquoted_string,
    ACTIONS(507), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4000] = 6,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    ACTIONS(514), 1,
      sym__colon,
    ACTIONS(516), 1,
      sym_dot,
    STATE(228), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(510), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4022] = 6,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      sym__colon,
    ACTIONS(524), 1,
      sym_dot,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4044] = 4,
    ACTIONS(484), 1,
      aux_sym__identifier_token1,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4062] = 7,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      sym_arrow,
    ACTIONS(529), 1,
      sym__colon,
    STATE(100), 1,
      aux_sym_connection_repeat1,
    STATE(179), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      sym__eol,
      anon_sym_SEMI,
  [4086] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(104), 1,
      aux_sym__unquoted_string,
    ACTIONS(531), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(503), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4106] = 6,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      sym__colon,
    ACTIONS(533), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4128] = 6,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      sym__colon,
    ACTIONS(537), 1,
      sym_dot,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4150] = 4,
    ACTIONS(484), 1,
      aux_sym__identifier_token1,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4168] = 4,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4186] = 4,
    ACTIONS(545), 1,
      aux_sym__identifier_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4204] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4218] = 3,
    ACTIONS(545), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4234] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(122), 1,
      aux_sym__unquoted_string,
    ACTIONS(550), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4253] = 6,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym__colon,
    ACTIONS(555), 1,
      sym_dot,
    STATE(223), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 2,
      sym__eol,
      anon_sym_SEMI,
  [4274] = 4,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(557), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4291] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(130), 1,
      aux_sym__unquoted_string,
    ACTIONS(559), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(503), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4310] = 4,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(561), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4327] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(563), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4346] = 6,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym__colon,
    ACTIONS(568), 1,
      sym_dot,
    STATE(194), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(520), 2,
      sym__eol,
      anon_sym_SEMI,
  [4367] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(570), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__colon,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4380] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(130), 1,
      aux_sym__unquoted_string,
    ACTIONS(572), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4399] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(131), 1,
      aux_sym__unquoted_string,
    ACTIONS(575), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(486), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4418] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(131), 1,
      aux_sym__unquoted_string,
    ACTIONS(580), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(578), 3,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4437] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(582), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4454] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(122), 1,
      aux_sym__unquoted_string,
    ACTIONS(584), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(578), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4473] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(127), 1,
      aux_sym__unquoted_string,
    ACTIONS(586), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(578), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4492] = 6,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      sym__colon,
    ACTIONS(588), 1,
      sym_dot,
    STATE(173), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__eol,
      anon_sym_SEMI,
  [4513] = 4,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(557), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4530] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(592), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4542] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4554] = 3,
    ACTIONS(594), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(596), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4568] = 6,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      sym__text_attr_key,
    ACTIONS(603), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(224), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4588] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(152), 1,
      aux_sym__unquoted_string,
    ACTIONS(578), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(606), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [4606] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(608), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4618] = 6,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(612), 1,
      sym__text_attr_key,
    ACTIONS(614), 1,
      sym__eol,
    STATE(141), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(174), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4638] = 4,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(616), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4654] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4666] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4678] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__eol,
      anon_sym_SEMI,
  [4690] = 4,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4706] = 3,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4720] = 3,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4734] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(152), 1,
      aux_sym__unquoted_string,
    ACTIONS(486), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(632), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [4752] = 6,
    ACTIONS(612), 1,
      sym__text_attr_key,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      sym__eol,
    STATE(144), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(171), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4772] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(639), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4783] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(641), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4794] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(647), 1,
      sym_escape_sequence,
    STATE(170), 1,
      aux_sym_string_repeat1,
  [4813] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(649), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4824] = 4,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(651), 2,
      sym__eol,
      anon_sym_SEMI,
  [4839] = 4,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(655), 2,
      sym__eol,
      anon_sym_SEMI,
  [4854] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(657), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4865] = 4,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(659), 2,
      sym__eol,
      anon_sym_SEMI,
  [4880] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(661), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4891] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(663), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4904] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(665), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4915] = 4,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(669), 2,
      sym__eol,
      anon_sym_SEMI,
  [4930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(671), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4941] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(673), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4952] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(675), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4963] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(677), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4974] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(683), 1,
      sym_escape_sequence,
    STATE(178), 1,
      aux_sym_string_repeat1,
  [4993] = 4,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(685), 2,
      sym__eol,
      anon_sym_SEMI,
  [5008] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5019] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(689), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5030] = 4,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(693), 2,
      sym__eol,
      anon_sym_SEMI,
  [5045] = 4,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      sym__eol,
      anon_sym_SEMI,
  [5060] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(697), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5071] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(699), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5082] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(706), 1,
      sym_escape_sequence,
    STATE(178), 1,
      aux_sym_string_repeat1,
  [5101] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(709), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5112] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(711), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5123] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(713), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5134] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(715), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5145] = 4,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(717), 2,
      sym__eol,
      anon_sym_SEMI,
  [5160] = 4,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 2,
      sym__eol,
      anon_sym_SEMI,
  [5175] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5186] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5197] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(727), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5208] = 4,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(731), 2,
      sym__eol,
      anon_sym_SEMI,
  [5223] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(733), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5234] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(735), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5245] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(737), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5256] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(557), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5267] = 4,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(741), 2,
      sym__eol,
      anon_sym_SEMI,
  [5282] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(743), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5293] = 4,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(747), 2,
      sym__eol,
      anon_sym_SEMI,
  [5308] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(749), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5319] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(751), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5330] = 4,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(753), 2,
      sym__eol,
      anon_sym_SEMI,
  [5345] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(582), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5356] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(755), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5367] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(757), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5378] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(759), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5389] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(761), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5400] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(763), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5411] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(765), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5422] = 4,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(769), 2,
      sym__eol,
      anon_sym_SEMI,
  [5437] = 4,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(773), 2,
      sym__eol,
      anon_sym_SEMI,
  [5452] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(775), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5463] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(777), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5474] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(779), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5485] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(781), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5496] = 4,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(783), 2,
      sym__eol,
      anon_sym_SEMI,
  [5511] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(785), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5522] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(787), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5533] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(561), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5544] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(789), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5555] = 3,
    STATE(103), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(791), 2,
      sym__eol,
      anon_sym_SEMI,
  [5567] = 3,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(793), 2,
      sym__eol,
      anon_sym_SEMI,
  [5579] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(598), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5589] = 3,
    STATE(80), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(795), 2,
      sym__eol,
      anon_sym_SEMI,
  [5601] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(797), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5611] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(799), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5621] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(801), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5631] = 3,
    STATE(219), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(803), 2,
      sym__eol,
      anon_sym_SEMI,
  [5643] = 3,
    STATE(121), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(805), 2,
      sym__eol,
      anon_sym_SEMI,
  [5655] = 3,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(807), 2,
      sym__eol,
      anon_sym_SEMI,
  [5667] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(809), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5677] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(811), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5687] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(616), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5697] = 3,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(598), 2,
      sym__text_attr_key,
      sym__eol,
  [5709] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(816), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5719] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(818), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5729] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(820), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5739] = 3,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(598), 2,
      sym__text_attr_key,
      sym__eol,
  [5751] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(825), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5761] = 3,
    STATE(139), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(827), 2,
      sym__eol,
      anon_sym_SEMI,
  [5773] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(829), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5783] = 3,
    STATE(20), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(831), 2,
      sym__eol,
      anon_sym_SEMI,
  [5795] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5805] = 3,
    ACTIONS(141), 1,
      sym_keyword_style,
    STATE(239), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5816] = 3,
    ACTIONS(465), 1,
      sym_arrow,
    STATE(102), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5827] = 3,
    ACTIONS(465), 1,
      sym_arrow,
    STATE(96), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5838] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      aux_sym_text_block_token1,
    ACTIONS(835), 1,
      sym_language,
  [5851] = 3,
    ACTIONS(837), 1,
      sym__colon,
    ACTIONS(839), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5862] = 3,
    ACTIONS(76), 1,
      sym_keyword_style,
    STATE(239), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5873] = 3,
    ACTIONS(465), 1,
      sym_arrow,
    STATE(113), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5884] = 3,
    ACTIONS(837), 1,
      sym__colon,
    ACTIONS(841), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5895] = 3,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5906] = 3,
    ACTIONS(837), 1,
      sym__colon,
    ACTIONS(845), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5917] = 2,
    ACTIONS(847), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5925] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      aux_sym_text_block_token1,
  [5935] = 2,
    ACTIONS(851), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5943] = 2,
    ACTIONS(853), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5951] = 2,
    ACTIONS(855), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5959] = 2,
    ACTIONS(857), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5967] = 2,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5975] = 2,
    ACTIONS(861), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5983] = 2,
    ACTIONS(863), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5991] = 2,
    ACTIONS(865), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5999] = 2,
    ACTIONS(867), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6007] = 2,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6015] = 2,
    ACTIONS(871), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6023] = 2,
    ACTIONS(873), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6031] = 2,
    ACTIONS(875), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6039] = 2,
    ACTIONS(877), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6047] = 2,
    ACTIONS(879), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6055] = 2,
    ACTIONS(881), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6063] = 2,
    ACTIONS(469), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6071] = 2,
    ACTIONS(883), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6079] = 2,
    ACTIONS(885), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6087] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      sym__unescaped_single_string_fragment,
  [6097] = 2,
    ACTIONS(889), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6105] = 2,
    ACTIONS(891), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6113] = 2,
    ACTIONS(893), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6121] = 2,
    ACTIONS(895), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6129] = 2,
    ACTIONS(897), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6137] = 2,
    ACTIONS(899), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
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
  [SMALL_STATE(21)] = 1264,
  [SMALL_STATE(22)] = 1299,
  [SMALL_STATE(23)] = 1344,
  [SMALL_STATE(24)] = 1389,
  [SMALL_STATE(25)] = 1424,
  [SMALL_STATE(26)] = 1469,
  [SMALL_STATE(27)] = 1509,
  [SMALL_STATE(28)] = 1549,
  [SMALL_STATE(29)] = 1589,
  [SMALL_STATE(30)] = 1622,
  [SMALL_STATE(31)] = 1653,
  [SMALL_STATE(32)] = 1686,
  [SMALL_STATE(33)] = 1713,
  [SMALL_STATE(34)] = 1740,
  [SMALL_STATE(35)] = 1765,
  [SMALL_STATE(36)] = 1809,
  [SMALL_STATE(37)] = 1853,
  [SMALL_STATE(38)] = 1897,
  [SMALL_STATE(39)] = 1940,
  [SMALL_STATE(40)] = 1983,
  [SMALL_STATE(41)] = 2014,
  [SMALL_STATE(42)] = 2045,
  [SMALL_STATE(43)] = 2076,
  [SMALL_STATE(44)] = 2105,
  [SMALL_STATE(45)] = 2134,
  [SMALL_STATE(46)] = 2165,
  [SMALL_STATE(47)] = 2204,
  [SMALL_STATE(48)] = 2243,
  [SMALL_STATE(49)] = 2282,
  [SMALL_STATE(50)] = 2324,
  [SMALL_STATE(51)] = 2366,
  [SMALL_STATE(52)] = 2408,
  [SMALL_STATE(53)] = 2450,
  [SMALL_STATE(54)] = 2487,
  [SMALL_STATE(55)] = 2524,
  [SMALL_STATE(56)] = 2561,
  [SMALL_STATE(57)] = 2596,
  [SMALL_STATE(58)] = 2631,
  [SMALL_STATE(59)] = 2666,
  [SMALL_STATE(60)] = 2701,
  [SMALL_STATE(61)] = 2738,
  [SMALL_STATE(62)] = 2775,
  [SMALL_STATE(63)] = 2810,
  [SMALL_STATE(64)] = 2845,
  [SMALL_STATE(65)] = 2884,
  [SMALL_STATE(66)] = 2923,
  [SMALL_STATE(67)] = 2958,
  [SMALL_STATE(68)] = 2995,
  [SMALL_STATE(69)] = 3030,
  [SMALL_STATE(70)] = 3065,
  [SMALL_STATE(71)] = 3104,
  [SMALL_STATE(72)] = 3138,
  [SMALL_STATE(73)] = 3174,
  [SMALL_STATE(74)] = 3210,
  [SMALL_STATE(75)] = 3246,
  [SMALL_STATE(76)] = 3275,
  [SMALL_STATE(77)] = 3308,
  [SMALL_STATE(78)] = 3337,
  [SMALL_STATE(79)] = 3370,
  [SMALL_STATE(80)] = 3391,
  [SMALL_STATE(81)] = 3410,
  [SMALL_STATE(82)] = 3439,
  [SMALL_STATE(83)] = 3460,
  [SMALL_STATE(84)] = 3476,
  [SMALL_STATE(85)] = 3494,
  [SMALL_STATE(86)] = 3510,
  [SMALL_STATE(87)] = 3526,
  [SMALL_STATE(88)] = 3556,
  [SMALL_STATE(89)] = 3574,
  [SMALL_STATE(90)] = 3590,
  [SMALL_STATE(91)] = 3606,
  [SMALL_STATE(92)] = 3636,
  [SMALL_STATE(93)] = 3654,
  [SMALL_STATE(94)] = 3670,
  [SMALL_STATE(95)] = 3688,
  [SMALL_STATE(96)] = 3713,
  [SMALL_STATE(97)] = 3738,
  [SMALL_STATE(98)] = 3755,
  [SMALL_STATE(99)] = 3770,
  [SMALL_STATE(100)] = 3787,
  [SMALL_STATE(101)] = 3806,
  [SMALL_STATE(102)] = 3831,
  [SMALL_STATE(103)] = 3856,
  [SMALL_STATE(104)] = 3872,
  [SMALL_STATE(105)] = 3892,
  [SMALL_STATE(106)] = 3914,
  [SMALL_STATE(107)] = 3938,
  [SMALL_STATE(108)] = 3960,
  [SMALL_STATE(109)] = 3980,
  [SMALL_STATE(110)] = 4000,
  [SMALL_STATE(111)] = 4022,
  [SMALL_STATE(112)] = 4044,
  [SMALL_STATE(113)] = 4062,
  [SMALL_STATE(114)] = 4086,
  [SMALL_STATE(115)] = 4106,
  [SMALL_STATE(116)] = 4128,
  [SMALL_STATE(117)] = 4150,
  [SMALL_STATE(118)] = 4168,
  [SMALL_STATE(119)] = 4186,
  [SMALL_STATE(120)] = 4204,
  [SMALL_STATE(121)] = 4218,
  [SMALL_STATE(122)] = 4234,
  [SMALL_STATE(123)] = 4253,
  [SMALL_STATE(124)] = 4274,
  [SMALL_STATE(125)] = 4291,
  [SMALL_STATE(126)] = 4310,
  [SMALL_STATE(127)] = 4327,
  [SMALL_STATE(128)] = 4346,
  [SMALL_STATE(129)] = 4367,
  [SMALL_STATE(130)] = 4380,
  [SMALL_STATE(131)] = 4399,
  [SMALL_STATE(132)] = 4418,
  [SMALL_STATE(133)] = 4437,
  [SMALL_STATE(134)] = 4454,
  [SMALL_STATE(135)] = 4473,
  [SMALL_STATE(136)] = 4492,
  [SMALL_STATE(137)] = 4513,
  [SMALL_STATE(138)] = 4530,
  [SMALL_STATE(139)] = 4542,
  [SMALL_STATE(140)] = 4554,
  [SMALL_STATE(141)] = 4568,
  [SMALL_STATE(142)] = 4588,
  [SMALL_STATE(143)] = 4606,
  [SMALL_STATE(144)] = 4618,
  [SMALL_STATE(145)] = 4638,
  [SMALL_STATE(146)] = 4654,
  [SMALL_STATE(147)] = 4666,
  [SMALL_STATE(148)] = 4678,
  [SMALL_STATE(149)] = 4690,
  [SMALL_STATE(150)] = 4706,
  [SMALL_STATE(151)] = 4720,
  [SMALL_STATE(152)] = 4734,
  [SMALL_STATE(153)] = 4752,
  [SMALL_STATE(154)] = 4772,
  [SMALL_STATE(155)] = 4783,
  [SMALL_STATE(156)] = 4794,
  [SMALL_STATE(157)] = 4813,
  [SMALL_STATE(158)] = 4824,
  [SMALL_STATE(159)] = 4839,
  [SMALL_STATE(160)] = 4854,
  [SMALL_STATE(161)] = 4865,
  [SMALL_STATE(162)] = 4880,
  [SMALL_STATE(163)] = 4891,
  [SMALL_STATE(164)] = 4904,
  [SMALL_STATE(165)] = 4915,
  [SMALL_STATE(166)] = 4930,
  [SMALL_STATE(167)] = 4941,
  [SMALL_STATE(168)] = 4952,
  [SMALL_STATE(169)] = 4963,
  [SMALL_STATE(170)] = 4974,
  [SMALL_STATE(171)] = 4993,
  [SMALL_STATE(172)] = 5008,
  [SMALL_STATE(173)] = 5019,
  [SMALL_STATE(174)] = 5030,
  [SMALL_STATE(175)] = 5045,
  [SMALL_STATE(176)] = 5060,
  [SMALL_STATE(177)] = 5071,
  [SMALL_STATE(178)] = 5082,
  [SMALL_STATE(179)] = 5101,
  [SMALL_STATE(180)] = 5112,
  [SMALL_STATE(181)] = 5123,
  [SMALL_STATE(182)] = 5134,
  [SMALL_STATE(183)] = 5145,
  [SMALL_STATE(184)] = 5160,
  [SMALL_STATE(185)] = 5175,
  [SMALL_STATE(186)] = 5186,
  [SMALL_STATE(187)] = 5197,
  [SMALL_STATE(188)] = 5208,
  [SMALL_STATE(189)] = 5223,
  [SMALL_STATE(190)] = 5234,
  [SMALL_STATE(191)] = 5245,
  [SMALL_STATE(192)] = 5256,
  [SMALL_STATE(193)] = 5267,
  [SMALL_STATE(194)] = 5282,
  [SMALL_STATE(195)] = 5293,
  [SMALL_STATE(196)] = 5308,
  [SMALL_STATE(197)] = 5319,
  [SMALL_STATE(198)] = 5330,
  [SMALL_STATE(199)] = 5345,
  [SMALL_STATE(200)] = 5356,
  [SMALL_STATE(201)] = 5367,
  [SMALL_STATE(202)] = 5378,
  [SMALL_STATE(203)] = 5389,
  [SMALL_STATE(204)] = 5400,
  [SMALL_STATE(205)] = 5411,
  [SMALL_STATE(206)] = 5422,
  [SMALL_STATE(207)] = 5437,
  [SMALL_STATE(208)] = 5452,
  [SMALL_STATE(209)] = 5463,
  [SMALL_STATE(210)] = 5474,
  [SMALL_STATE(211)] = 5485,
  [SMALL_STATE(212)] = 5496,
  [SMALL_STATE(213)] = 5511,
  [SMALL_STATE(214)] = 5522,
  [SMALL_STATE(215)] = 5533,
  [SMALL_STATE(216)] = 5544,
  [SMALL_STATE(217)] = 5555,
  [SMALL_STATE(218)] = 5567,
  [SMALL_STATE(219)] = 5579,
  [SMALL_STATE(220)] = 5589,
  [SMALL_STATE(221)] = 5601,
  [SMALL_STATE(222)] = 5611,
  [SMALL_STATE(223)] = 5621,
  [SMALL_STATE(224)] = 5631,
  [SMALL_STATE(225)] = 5643,
  [SMALL_STATE(226)] = 5655,
  [SMALL_STATE(227)] = 5667,
  [SMALL_STATE(228)] = 5677,
  [SMALL_STATE(229)] = 5687,
  [SMALL_STATE(230)] = 5697,
  [SMALL_STATE(231)] = 5709,
  [SMALL_STATE(232)] = 5719,
  [SMALL_STATE(233)] = 5729,
  [SMALL_STATE(234)] = 5739,
  [SMALL_STATE(235)] = 5751,
  [SMALL_STATE(236)] = 5761,
  [SMALL_STATE(237)] = 5773,
  [SMALL_STATE(238)] = 5783,
  [SMALL_STATE(239)] = 5795,
  [SMALL_STATE(240)] = 5805,
  [SMALL_STATE(241)] = 5816,
  [SMALL_STATE(242)] = 5827,
  [SMALL_STATE(243)] = 5838,
  [SMALL_STATE(244)] = 5851,
  [SMALL_STATE(245)] = 5862,
  [SMALL_STATE(246)] = 5873,
  [SMALL_STATE(247)] = 5884,
  [SMALL_STATE(248)] = 5895,
  [SMALL_STATE(249)] = 5906,
  [SMALL_STATE(250)] = 5917,
  [SMALL_STATE(251)] = 5925,
  [SMALL_STATE(252)] = 5935,
  [SMALL_STATE(253)] = 5943,
  [SMALL_STATE(254)] = 5951,
  [SMALL_STATE(255)] = 5959,
  [SMALL_STATE(256)] = 5967,
  [SMALL_STATE(257)] = 5975,
  [SMALL_STATE(258)] = 5983,
  [SMALL_STATE(259)] = 5991,
  [SMALL_STATE(260)] = 5999,
  [SMALL_STATE(261)] = 6007,
  [SMALL_STATE(262)] = 6015,
  [SMALL_STATE(263)] = 6023,
  [SMALL_STATE(264)] = 6031,
  [SMALL_STATE(265)] = 6039,
  [SMALL_STATE(266)] = 6047,
  [SMALL_STATE(267)] = 6055,
  [SMALL_STATE(268)] = 6063,
  [SMALL_STATE(269)] = 6071,
  [SMALL_STATE(270)] = 6079,
  [SMALL_STATE(271)] = 6087,
  [SMALL_STATE(272)] = 6097,
  [SMALL_STATE(273)] = 6105,
  [SMALL_STATE(274)] = 6113,
  [SMALL_STATE(275)] = 6121,
  [SMALL_STATE(276)] = 6129,
  [SMALL_STATE(277)] = 6137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(42),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(250),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(254),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(85),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(257),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(249),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(271),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(156),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(42),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(41),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(85),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(271),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(156),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(275),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(273),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(250),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(254),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(249),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(17),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(189),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(167),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(205),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(155),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(200),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(176),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(142),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(271),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(156),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(147),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(148),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(37),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(43),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(43),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(44),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(41),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(85),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(271),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(156),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(41),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(51),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(41),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(85),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(271),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(156),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(41),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(64),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(154),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(129),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(249),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(81),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT(216),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(41),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(85),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(271),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(156),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(41),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(78),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(104),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(109),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(202),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(213),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(227),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(221),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(122),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(127),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(130),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(131),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(267),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(141),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(180),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(162),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(152),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(178),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(178),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(211),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(197),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_list_attr_key, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [869] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
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
