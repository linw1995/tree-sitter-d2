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
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 2
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

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
  sym_keyword_classes = 47,
  sym_keyword_class = 48,
  sym_keyword_style = 49,
  sym__dash = 50,
  anon_sym_COLON = 51,
  sym_arrow = 52,
  sym_dot = 53,
  aux_sym__unquoted_string_token1 = 54,
  anon_sym_SQUOTE = 55,
  anon_sym_DQUOTE = 56,
  sym__unescaped_single_string_fragment = 57,
  sym__unescaped_double_string_fragment = 58,
  sym_escape_sequence = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  sym_integer = 62,
  sym_float = 63,
  sym_line_comment = 64,
  sym__eol = 65,
  anon_sym_SEMI = 66,
  sym__text_block_start = 67,
  sym__text_block_end = 68,
  sym__text_block_raw_text = 69,
  sym_block_comment = 70,
  sym_source_file = 71,
  sym__root_definition = 72,
  sym_connection = 73,
  sym__connection_path = 74,
  sym__connection_block = 75,
  sym_classes = 76,
  sym__classes_block = 77,
  sym__classes_item = 78,
  sym__classes_item_block = 79,
  sym__classes_item_attribute = 80,
  sym_container = 81,
  sym__container_block = 82,
  sym__container_block_definition = 83,
  sym_shape = 84,
  sym_shape_key = 85,
  sym__identifier = 86,
  sym_text_block = 87,
  sym__root_attribute = 88,
  sym__root_attr_key = 89,
  sym__shape_attribute = 90,
  sym__class_attribute = 91,
  sym_class_list = 92,
  sym__class_name = 93,
  sym__base_shape_attribute = 94,
  sym__shape_attr_key = 95,
  sym__style_attribute = 96,
  sym__style_attribute_block = 97,
  sym__inner_style_attribute = 98,
  sym__grid_attr_key = 99,
  sym__style_attr_key = 100,
  sym__common_style_attr_key = 101,
  sym__connection_attribute = 102,
  sym__connection_arrowhead_attribute = 103,
  sym__connection_arrowhead_attr_key = 104,
  sym_label = 105,
  sym_attr_value = 106,
  sym__colon = 107,
  aux_sym__unquoted_string = 108,
  sym_string = 109,
  sym_boolean = 110,
  sym__end = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_connection_repeat1 = 113,
  aux_sym__connection_path_repeat1 = 114,
  aux_sym__connection_block_repeat1 = 115,
  aux_sym__classes_block_repeat1 = 116,
  aux_sym__classes_item_block_repeat1 = 117,
  aux_sym__container_block_repeat1 = 118,
  aux_sym__identifier_repeat1 = 119,
  aux_sym_class_list_repeat1 = 120,
  aux_sym__style_attribute_block_repeat1 = 121,
  aux_sym_string_repeat1 = 122,
  alias_sym_class_name = 123,
  alias_sym_container_key = 124,
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
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
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
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__class_attribute] = "attribute",
  [sym_class_list] = "class_list",
  [sym__class_name] = "_class_name",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__grid_attr_key] = "_grid_attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
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
  [aux_sym_class_list_repeat1] = "class_list_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_container_key] = "container_key",
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
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = sym__root_attr_key,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__class_attribute] = sym__root_attribute,
  [sym_class_list] = sym_class_list,
  [sym__class_name] = sym__class_name,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__grid_attr_key] = sym__grid_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = sym__root_attr_key,
  [sym_label] = sym_label,
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
  [aux_sym_class_list_repeat1] = aux_sym_class_list_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_container_key] = alias_sym_container_key,
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
    .visible = true,
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
  [aux_sym_class_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym__text_attr_key,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
  [3] = {
    [0] = alias_sym_class_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 3,
    sym_shape_key,
    alias_sym_class_name,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    sym__text_attr_key,
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
  [11] = 8,
  [12] = 10,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 41,
  [43] = 35,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 44,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 45,
  [56] = 48,
  [57] = 57,
  [58] = 50,
  [59] = 48,
  [60] = 60,
  [61] = 50,
  [62] = 62,
  [63] = 45,
  [64] = 64,
  [65] = 52,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 71,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 70,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 97,
  [102] = 90,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 86,
  [107] = 100,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 100,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 103,
  [119] = 119,
  [120] = 120,
  [121] = 100,
  [122] = 122,
  [123] = 110,
  [124] = 100,
  [125] = 110,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
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
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
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
  [190] = 189,
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
  [206] = 189,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 207,
  [212] = 210,
  [213] = 213,
  [214] = 214,
  [215] = 207,
  [216] = 209,
  [217] = 208,
  [218] = 210,
  [219] = 208,
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
      if (eof) ADVANCE(293);
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(290)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '-') ADVANCE(372);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(398);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(398);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(398);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'c') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(398);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 40:
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(267);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(326);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(402);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(402);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '>') ADVANCE(376);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 158:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 273:
      if (lookahead == 'w') ADVANCE(357);
      END_STATE();
    case 274:
      if (lookahead == 'w') ADVANCE(237);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 277:
      if (lookahead == 'x') ADVANCE(253);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 279:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 280:
      if (lookahead == 'z') ADVANCE(113);
      END_STATE();
    case 281:
      if (lookahead == 'z') ADVANCE(197);
      END_STATE();
    case 282:
      if (lookahead == '{') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 283:
      if (lookahead == '}') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 284:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 289:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 290:
      if (eof) ADVANCE(293);
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_1(lookahead)) SKIP(290)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 291:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead == 'v') ADVANCE(305);
      if (anon_sym__character_set_1(lookahead)) SKIP(292)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 292:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead == 'v') ADVANCE(305);
      if (anon_sym__character_set_1(lookahead)) SKIP(292)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '>') ADVANCE(376);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(398);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(398);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(398);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(398);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(398);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(402);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(404);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(396);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 291, .external_lex_state = 2},
  [2] = {.lex_state = 291, .external_lex_state = 2},
  [3] = {.lex_state = 291, .external_lex_state = 2},
  [4] = {.lex_state = 26, .external_lex_state = 2},
  [5] = {.lex_state = 291, .external_lex_state = 2},
  [6] = {.lex_state = 26, .external_lex_state = 2},
  [7] = {.lex_state = 26, .external_lex_state = 2},
  [8] = {.lex_state = 26, .external_lex_state = 2},
  [9] = {.lex_state = 26, .external_lex_state = 2},
  [10] = {.lex_state = 26, .external_lex_state = 2},
  [11] = {.lex_state = 26, .external_lex_state = 2},
  [12] = {.lex_state = 26, .external_lex_state = 2},
  [13] = {.lex_state = 26, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 12, .external_lex_state = 2},
  [20] = {.lex_state = 12, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 12, .external_lex_state = 2},
  [23] = {.lex_state = 12, .external_lex_state = 2},
  [24] = {.lex_state = 12, .external_lex_state = 2},
  [25] = {.lex_state = 12, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 26, .external_lex_state = 2},
  [28] = {.lex_state = 26, .external_lex_state = 2},
  [29] = {.lex_state = 26, .external_lex_state = 2},
  [30] = {.lex_state = 26, .external_lex_state = 2},
  [31] = {.lex_state = 26, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 10, .external_lex_state = 3},
  [36] = {.lex_state = 28, .external_lex_state = 3},
  [37] = {.lex_state = 4, .external_lex_state = 2},
  [38] = {.lex_state = 7, .external_lex_state = 2},
  [39] = {.lex_state = 4, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 29, .external_lex_state = 3},
  [44] = {.lex_state = 43, .external_lex_state = 2},
  [45] = {.lex_state = 10, .external_lex_state = 2},
  [46] = {.lex_state = 24, .external_lex_state = 2},
  [47] = {.lex_state = 43, .external_lex_state = 2},
  [48] = {.lex_state = 43, .external_lex_state = 2},
  [49] = {.lex_state = 43, .external_lex_state = 2},
  [50] = {.lex_state = 10, .external_lex_state = 2},
  [51] = {.lex_state = 43, .external_lex_state = 2},
  [52] = {.lex_state = 28, .external_lex_state = 2},
  [53] = {.lex_state = 10, .external_lex_state = 2},
  [54] = {.lex_state = 24, .external_lex_state = 2},
  [55] = {.lex_state = 28, .external_lex_state = 2},
  [56] = {.lex_state = 43, .external_lex_state = 2},
  [57] = {.lex_state = 24, .external_lex_state = 2},
  [58] = {.lex_state = 28, .external_lex_state = 2},
  [59] = {.lex_state = 43, .external_lex_state = 2},
  [60] = {.lex_state = 24, .external_lex_state = 2},
  [61] = {.lex_state = 29, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 29, .external_lex_state = 2},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 29, .external_lex_state = 2},
  [66] = {.lex_state = 12, .external_lex_state = 2},
  [67] = {.lex_state = 12, .external_lex_state = 2},
  [68] = {.lex_state = 12, .external_lex_state = 2},
  [69] = {.lex_state = 24, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 12, .external_lex_state = 2},
  [73] = {.lex_state = 24, .external_lex_state = 2},
  [74] = {.lex_state = 12, .external_lex_state = 2},
  [75] = {.lex_state = 12, .external_lex_state = 2},
  [76] = {.lex_state = 12, .external_lex_state = 2},
  [77] = {.lex_state = 12, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 12, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 12, .external_lex_state = 2},
  [82] = {.lex_state = 24, .external_lex_state = 2},
  [83] = {.lex_state = 12, .external_lex_state = 2},
  [84] = {.lex_state = 4, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 12, .external_lex_state = 2},
  [88] = {.lex_state = 12, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 24, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 24, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 14, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 14, .external_lex_state = 2},
  [104] = {.lex_state = 12, .external_lex_state = 2},
  [105] = {.lex_state = 32, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 32, .external_lex_state = 2},
  [108] = {.lex_state = 33, .external_lex_state = 2},
  [109] = {.lex_state = 24, .external_lex_state = 2},
  [110] = {.lex_state = 15, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 24, .external_lex_state = 2},
  [113] = {.lex_state = 15, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 24, .external_lex_state = 2},
  [116] = {.lex_state = 24, .external_lex_state = 2},
  [117] = {.lex_state = 24, .external_lex_state = 2},
  [118] = {.lex_state = 33, .external_lex_state = 2},
  [119] = {.lex_state = 24, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 34, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 34, .external_lex_state = 2},
  [124] = {.lex_state = 35, .external_lex_state = 2},
  [125] = {.lex_state = 35, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 12, .external_lex_state = 2},
  [128] = {.lex_state = 12, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 12, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 45, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 45, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 45, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
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
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 24, .external_lex_state = 2},
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
  [208] = {.lex_state = 12, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 12, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 12, .external_lex_state = 2},
  [220] = {.lex_state = 46, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 46, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 47, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_source_file] = STATE(225),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(139),
    [sym__connection_path] = STATE(208),
    [sym_classes] = STATE(139),
    [sym_container] = STATE(139),
    [sym_shape] = STATE(139),
    [sym_shape_key] = STATE(74),
    [sym__identifier] = STATE(79),
    [sym__root_attribute] = STATE(139),
    [sym__root_attr_key] = STATE(221),
    [sym__grid_attr_key] = STATE(223),
    [sym__common_style_attr_key] = STATE(232),
    [sym_string] = STATE(79),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(92),
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
    [sym_keyword_classes] = ACTIONS(17),
    [sym_keyword_style] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(25),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_classes,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__eol,
    STATE(74), 1,
      sym_shape_key,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(208), 1,
      sym__connection_path,
    STATE(221), 1,
      sym__root_attr_key,
    STATE(223), 1,
      sym__grid_attr_key,
    STATE(232), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(139), 5,
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
  [98] = 21,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(48), 1,
      sym_keyword_classes,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_escape_sequence,
    ACTIONS(60), 1,
      sym__eol,
    STATE(74), 1,
      sym_shape_key,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(208), 1,
      sym__connection_path,
    STATE(221), 1,
      sym__root_attr_key,
    STATE(223), 1,
      sym__grid_attr_key,
    STATE(232), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    ACTIONS(45), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(139), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(36), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(39), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(42), 16,
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
  [196] = 18,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(71), 1,
      sym__eol,
    STATE(7), 1,
      aux_sym__container_block_repeat1,
    STATE(70), 1,
      sym_shape_key,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(219), 1,
      sym__connection_path,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(133), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [273] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(75), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(73), 34,
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
      sym_keyword_classes,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [320] = 18,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      aux_sym__identifier_token1,
    ACTIONS(85), 1,
      sym_keyword_class,
    ACTIONS(88), 1,
      sym_keyword_style,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(100), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym_shape_key,
    STATE(211), 1,
      sym__shape_attr_key,
    STATE(217), 1,
      sym__connection_path,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(204), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(82), 14,
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
  [397] = 18,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(70), 1,
      sym_shape_key,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(219), 1,
      sym__connection_path,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(184), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [474] = 14,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(107), 1,
      aux_sym__identifier_token1,
    ACTIONS(109), 1,
      sym_keyword_style,
    ACTIONS(111), 1,
      sym_escape_sequence,
    STATE(101), 1,
      sym_shape_key,
    STATE(211), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [536] = 14,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(107), 1,
      aux_sym__identifier_token1,
    ACTIONS(111), 1,
      sym_escape_sequence,
    ACTIONS(113), 1,
      sym_keyword_style,
    STATE(98), 1,
      sym_shape_key,
    STATE(207), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [598] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_escape_sequence,
    STATE(97), 1,
      sym_shape_key,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [660] = 14,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(107), 1,
      aux_sym__identifier_token1,
    ACTIONS(111), 1,
      sym_escape_sequence,
    STATE(97), 1,
      sym_shape_key,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [722] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(109), 1,
      sym_keyword_style,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_escape_sequence,
    STATE(101), 1,
      sym_shape_key,
    STATE(211), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [784] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(113), 1,
      sym_keyword_style,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_escape_sequence,
    STATE(98), 1,
      sym_shape_key,
    STATE(207), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(160), 2,
      sym_container,
      sym_shape,
    STATE(162), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [846] = 10,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_3d,
    ACTIONS(131), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(170), 1,
      sym__inner_style_attribute,
    STATE(218), 1,
      sym__style_attr_key,
    STATE(233), 1,
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
  [895] = 10,
    ACTIONS(129), 1,
      anon_sym_3d,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(151), 1,
      sym__inner_style_attribute,
    STATE(218), 1,
      sym__style_attr_key,
    STATE(233), 1,
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
  [944] = 10,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_3d,
    ACTIONS(148), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(193), 1,
      sym__inner_style_attribute,
    STATE(210), 1,
      sym__style_attr_key,
    STATE(233), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(139), 16,
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
  [993] = 9,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(176), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [1037] = 9,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym_keyword_style,
    ACTIONS(163), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(211), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(187), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(157), 14,
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
  [1081] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(140), 1,
      sym__inner_style_attribute,
    STATE(218), 1,
      sym__style_attr_key,
    STATE(233), 1,
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
  [1121] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(140), 1,
      sym__inner_style_attribute,
    STATE(210), 1,
      sym__style_attr_key,
    STATE(233), 1,
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
  [1161] = 9,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(136), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [1205] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(140), 1,
      sym__inner_style_attribute,
    STATE(212), 1,
      sym__style_attr_key,
    STATE(233), 1,
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
  [1245] = 4,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(137), 18,
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
  [1278] = 4,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(137), 18,
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
  [1311] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(137), 19,
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
  [1342] = 3,
    ACTIONS(178), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(77), 21,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1373] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(109), 1,
      sym_keyword_style,
    STATE(211), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(174), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [1412] = 4,
    ACTIONS(178), 1,
      aux_sym__identifier_token1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(77), 20,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1445] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(113), 1,
      sym_keyword_style,
    STATE(207), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(174), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [1484] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    STATE(215), 1,
      sym__shape_attr_key,
    STATE(234), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(174), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 14,
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
  [1523] = 4,
    ACTIONS(178), 1,
      aux_sym__identifier_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(77), 20,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1556] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(155), 16,
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
      sym_keyword_style,
      sym__eol,
  [1582] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(155), 17,
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
      sym_keyword_style,
      sym__eol,
  [1606] = 3,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(155), 16,
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
      sym_keyword_style,
      sym__eol,
  [1632] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      sym__text_block_start,
    STATE(103), 1,
      aux_sym__unquoted_string,
    STATE(114), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(160), 1,
      sym__container_block,
    STATE(162), 1,
      sym_text_block,
    ACTIONS(192), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1677] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      sym__text_block_start,
    ACTIONS(208), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(114), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(160), 1,
      sym__container_block,
    STATE(162), 1,
      sym_text_block,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1722] = 6,
    ACTIONS(216), 1,
      aux_sym__identifier_token3,
    ACTIONS(218), 1,
      sym__dash,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(214), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(212), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1750] = 6,
    ACTIONS(218), 1,
      sym__dash,
    ACTIONS(222), 1,
      aux_sym__identifier_token3,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(220), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(212), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1778] = 6,
    ACTIONS(228), 1,
      aux_sym__identifier_token3,
    ACTIONS(230), 1,
      sym__dash,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(226), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(224), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1806] = 6,
    ACTIONS(230), 1,
      sym__dash,
    ACTIONS(234), 1,
      aux_sym__identifier_token3,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(224), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1834] = 5,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(238), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(241), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(236), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1860] = 5,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(241), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(243), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(236), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1886] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      sym__text_block_start,
    ACTIONS(246), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(248), 1,
      sym_escape_sequence,
    STATE(114), 1,
      sym_label,
    STATE(118), 1,
      aux_sym__unquoted_string,
    STATE(129), 1,
      sym_string,
    STATE(160), 1,
      sym__container_block,
    STATE(162), 1,
      sym_text_block,
    ACTIONS(192), 2,
      sym__eol,
      anon_sym_SEMI,
  [1930] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym__unquoted_string,
    STATE(167), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [1967] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      aux_sym__unquoted_string,
    STATE(122), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(258), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2006] = 11,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      sym__eol,
    STATE(54), 1,
      aux_sym__classes_block_repeat1,
    STATE(86), 1,
      sym__class_name,
    STATE(93), 1,
      sym_shape_key,
    STATE(179), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2043] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(268), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(167), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2080] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2117] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(272), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(167), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2154] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      aux_sym__unquoted_string,
    STATE(111), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(174), 1,
      sym__classes_item_block,
    ACTIONS(274), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2193] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym__unquoted_string,
    STATE(198), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2230] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(196), 1,
      sym__container_block,
    ACTIONS(278), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2269] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      aux_sym__unquoted_string,
    STATE(129), 1,
      sym_string,
    STATE(131), 1,
      sym_label,
    STATE(188), 1,
      sym__classes_block,
    ACTIONS(280), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2308] = 11,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      sym__eol,
    STATE(54), 1,
      aux_sym__classes_block_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(106), 1,
      sym__class_name,
    STATE(199), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2345] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(122), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(258), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2384] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(268), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2421] = 11,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym__eol,
    STATE(46), 1,
      aux_sym__classes_block_repeat1,
    STATE(86), 1,
      sym__class_name,
    STATE(93), 1,
      sym_shape_key,
    STATE(145), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2458] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(111), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(174), 1,
      sym__classes_item_block,
    ACTIONS(274), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2497] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym__unquoted_string,
    STATE(149), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(166), 2,
      sym_string,
      sym_boolean,
  [2534] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    ACTIONS(304), 1,
      sym__eol,
    STATE(62), 1,
      aux_sym_class_list_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(147), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2568] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(248), 1,
      sym_escape_sequence,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_label,
    STATE(118), 1,
      aux_sym__unquoted_string,
    STATE(129), 1,
      sym_string,
    STATE(174), 1,
      sym__classes_item_block,
    ACTIONS(274), 2,
      sym__eol,
      anon_sym_SEMI,
  [2606] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    ACTIONS(308), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym_class_list_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(165), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2640] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(248), 1,
      sym_escape_sequence,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      aux_sym__unquoted_string,
    STATE(122), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(258), 2,
      sym__eol,
      anon_sym_SEMI,
  [2678] = 10,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym_class_list_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(197), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2712] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(248), 1,
      sym_escape_sequence,
    STATE(118), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(129), 1,
      sym_string,
    STATE(196), 1,
      sym__container_block,
    ACTIONS(278), 2,
      sym__eol,
      anon_sym_SEMI,
  [2750] = 8,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym__connection_block_repeat1,
    STATE(90), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(159), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2779] = 8,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__connection_block_repeat1,
    STATE(90), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(152), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2808] = 8,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      sym_keyword_style,
    ACTIONS(342), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__connection_block_repeat1,
    STATE(102), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(201), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2837] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
    STATE(135), 2,
      sym_class_list,
      sym__class_name,
  [2866] = 8,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2894] = 8,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(363), 1,
      sym_arrow,
    STATE(55), 1,
      sym__colon,
    STATE(87), 1,
      aux_sym_connection_repeat1,
    STATE(156), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2922] = 8,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      sym_arrow,
    ACTIONS(365), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym__colon,
    STATE(87), 1,
      aux_sym_connection_repeat1,
    STATE(156), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2950] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym__class_name,
    STATE(93), 1,
      sym_shape_key,
    STATE(188), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [2978] = 8,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3006] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3022] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3038] = 3,
    ACTIONS(230), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3056] = 3,
    ACTIONS(375), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3074] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3090] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3106] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3122] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_shape_key,
    STATE(92), 1,
      aux_sym__connection_path_repeat1,
    STATE(104), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [3150] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3166] = 3,
    ACTIONS(383), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3184] = 3,
    ACTIONS(385), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3202] = 7,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      sym_dot,
    STATE(58), 1,
      sym__colon,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3227] = 4,
    ACTIONS(397), 1,
      sym_arrow,
    STATE(87), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [3246] = 8,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      sym_arrow,
    ACTIONS(400), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym__colon,
    STATE(87), 1,
      aux_sym_connection_repeat1,
    STATE(156), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 2,
      sym__eol,
      anon_sym_SEMI,
  [3273] = 7,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      sym_dot,
    STATE(50), 1,
      sym__colon,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3298] = 7,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_COLON,
    ACTIONS(410), 1,
      sym_dot,
    STATE(52), 1,
      sym__colon,
    STATE(202), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(406), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3323] = 3,
    ACTIONS(412), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(353), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3340] = 7,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym__connection_path_repeat1,
    STATE(95), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [3365] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(414), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3380] = 7,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym__connection_path_repeat1,
    STATE(227), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym__identifier,
      sym_string,
  [3405] = 3,
    ACTIONS(412), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3422] = 8,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 2,
      sym__eol,
      anon_sym_SEMI,
  [3449] = 7,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(431), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3474] = 7,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3499] = 7,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_dot,
    STATE(53), 1,
      sym__colon,
    STATE(200), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3524] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(448), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3546] = 7,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(143), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 2,
      sym__eol,
      anon_sym_SEMI,
  [3570] = 7,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      sym_dot,
    STATE(65), 1,
      sym__colon,
    STATE(202), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(406), 2,
      sym__eol,
      anon_sym_SEMI,
  [3594] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(459), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(461), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym__unquoted_string,
    ACTIONS(457), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3616] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3630] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(465), 1,
      sym_escape_sequence,
    STATE(107), 1,
      aux_sym__unquoted_string,
    ACTIONS(457), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3652] = 7,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      sym_dot,
    STATE(61), 1,
      sym__colon,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 2,
      sym__eol,
      anon_sym_SEMI,
  [3676] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(474), 1,
      sym_escape_sequence,
    STATE(107), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3698] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(480), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3719] = 3,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3734] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(490), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(486), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3755] = 4,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3772] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3787] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(500), 1,
      sym_escape_sequence,
    STATE(113), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3808] = 4,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(503), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3825] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 6,
      aux_sym__identifier_token1,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3838] = 3,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3853] = 3,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3868] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(513), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym__unquoted_string,
    ACTIONS(457), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3889] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 6,
      anon_sym_RBRACE,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(515), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3915] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(520), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3936] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3953] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(527), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(486), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3974] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(532), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 2,
      sym__eol,
      anon_sym_SEMI,
  [3994] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(537), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    ACTIONS(486), 2,
      sym__eol,
      anon_sym_SEMI,
  [4014] = 4,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(539), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4030] = 3,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4044] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4068] = 3,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4082] = 4,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(549), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4098] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(551), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4109] = 4,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(553), 2,
      sym__eol,
      anon_sym_SEMI,
  [4124] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(555), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4135] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(557), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4146] = 4,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(561), 2,
      sym__eol,
      anon_sym_SEMI,
  [4161] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym_string_repeat1,
    ACTIONS(565), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4178] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(567), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4189] = 3,
    STATE(5), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(569), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4202] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(571), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4213] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4224] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat1,
    ACTIONS(577), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4241] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(579), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4252] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(581), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4263] = 4,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 2,
      sym__eol,
      anon_sym_SEMI,
  [4278] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4289] = 4,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(587), 2,
      sym__eol,
      anon_sym_SEMI,
  [4304] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(589), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4315] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4326] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4337] = 4,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(595), 2,
      sym__eol,
      anon_sym_SEMI,
  [4352] = 4,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(599), 2,
      sym__eol,
      anon_sym_SEMI,
  [4367] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(601), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4378] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat1,
    ACTIONS(605), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4395] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(608), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4406] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(610), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4417] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(612), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4428] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4439] = 4,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(616), 2,
      sym__eol,
      anon_sym_SEMI,
  [4454] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4465] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4476] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(503), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4487] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4498] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4509] = 4,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(628), 2,
      sym__eol,
      anon_sym_SEMI,
  [4524] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(630), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4535] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(632), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4546] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(634), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4557] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(636), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4568] = 4,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(640), 2,
      sym__eol,
      anon_sym_SEMI,
  [4583] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(642), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4594] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4605] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4616] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4627] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(648), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4638] = 4,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(650), 2,
      sym__eol,
      anon_sym_SEMI,
  [4653] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(652), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4664] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(654), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4675] = 4,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(658), 2,
      sym__eol,
      anon_sym_SEMI,
  [4690] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(660), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4701] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(662), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4712] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4723] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(666), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4734] = 4,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 2,
      sym__eol,
      anon_sym_SEMI,
  [4749] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(672), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4760] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4771] = 3,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(674), 2,
      sym__eol,
      anon_sym_SEMI,
  [4783] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(549), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4793] = 4,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      sym_dot,
    STATE(213), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4807] = 4,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(680), 1,
      sym_dot,
    STATE(213), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4821] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(682), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4831] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(684), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4841] = 3,
    STATE(25), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(686), 2,
      sym__eol,
      anon_sym_SEMI,
  [4853] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(688), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4863] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(690), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4873] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(539), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4883] = 3,
    STATE(115), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 2,
      sym__eol,
      anon_sym_SEMI,
  [4895] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(694), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4905] = 3,
    STATE(119), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(696), 2,
      sym__eol,
      anon_sym_SEMI,
  [4917] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(698), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4927] = 3,
    STATE(128), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(700), 2,
      sym__eol,
      anon_sym_SEMI,
  [4939] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(702), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4949] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(704), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4959] = 3,
    STATE(26), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(706), 2,
      sym__eol,
      anon_sym_SEMI,
  [4971] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(708), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4981] = 4,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(710), 1,
      sym_dot,
    STATE(213), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4995] = 3,
    ACTIONS(712), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5006] = 3,
    ACTIONS(363), 1,
      sym_arrow,
    STATE(72), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5017] = 3,
    ACTIONS(109), 1,
      sym_keyword_style,
    STATE(196), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5028] = 3,
    ACTIONS(714), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5039] = 3,
    ACTIONS(716), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5050] = 3,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5061] = 3,
    ACTIONS(720), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5072] = 3,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5083] = 3,
    ACTIONS(724), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5094] = 3,
    ACTIONS(69), 1,
      sym_keyword_style,
    STATE(196), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5105] = 3,
    ACTIONS(363), 1,
      sym_arrow,
    STATE(88), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5116] = 3,
    ACTIONS(726), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5127] = 3,
    ACTIONS(363), 1,
      sym_arrow,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5138] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      aux_sym_text_block_token1,
    ACTIONS(730), 1,
      sym_language,
  [5151] = 3,
    ACTIONS(732), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5162] = 2,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5170] = 2,
    ACTIONS(736), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5178] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      aux_sym_text_block_token1,
  [5188] = 2,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5196] = 2,
    ACTIONS(742), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5204] = 2,
    ACTIONS(412), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5212] = 2,
    ACTIONS(744), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5220] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      sym__unescaped_single_string_fragment,
  [5230] = 2,
    ACTIONS(748), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5238] = 2,
    ACTIONS(750), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5246] = 2,
    ACTIONS(752), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5254] = 2,
    ACTIONS(754), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5262] = 2,
    ACTIONS(756), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5270] = 2,
    ACTIONS(758), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 397,
  [SMALL_STATE(8)] = 474,
  [SMALL_STATE(9)] = 536,
  [SMALL_STATE(10)] = 598,
  [SMALL_STATE(11)] = 660,
  [SMALL_STATE(12)] = 722,
  [SMALL_STATE(13)] = 784,
  [SMALL_STATE(14)] = 846,
  [SMALL_STATE(15)] = 895,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 993,
  [SMALL_STATE(18)] = 1037,
  [SMALL_STATE(19)] = 1081,
  [SMALL_STATE(20)] = 1121,
  [SMALL_STATE(21)] = 1161,
  [SMALL_STATE(22)] = 1205,
  [SMALL_STATE(23)] = 1245,
  [SMALL_STATE(24)] = 1278,
  [SMALL_STATE(25)] = 1311,
  [SMALL_STATE(26)] = 1342,
  [SMALL_STATE(27)] = 1373,
  [SMALL_STATE(28)] = 1412,
  [SMALL_STATE(29)] = 1445,
  [SMALL_STATE(30)] = 1484,
  [SMALL_STATE(31)] = 1523,
  [SMALL_STATE(32)] = 1556,
  [SMALL_STATE(33)] = 1582,
  [SMALL_STATE(34)] = 1606,
  [SMALL_STATE(35)] = 1632,
  [SMALL_STATE(36)] = 1677,
  [SMALL_STATE(37)] = 1722,
  [SMALL_STATE(38)] = 1750,
  [SMALL_STATE(39)] = 1778,
  [SMALL_STATE(40)] = 1806,
  [SMALL_STATE(41)] = 1834,
  [SMALL_STATE(42)] = 1860,
  [SMALL_STATE(43)] = 1886,
  [SMALL_STATE(44)] = 1930,
  [SMALL_STATE(45)] = 1967,
  [SMALL_STATE(46)] = 2006,
  [SMALL_STATE(47)] = 2043,
  [SMALL_STATE(48)] = 2080,
  [SMALL_STATE(49)] = 2117,
  [SMALL_STATE(50)] = 2154,
  [SMALL_STATE(51)] = 2193,
  [SMALL_STATE(52)] = 2230,
  [SMALL_STATE(53)] = 2269,
  [SMALL_STATE(54)] = 2308,
  [SMALL_STATE(55)] = 2345,
  [SMALL_STATE(56)] = 2384,
  [SMALL_STATE(57)] = 2421,
  [SMALL_STATE(58)] = 2458,
  [SMALL_STATE(59)] = 2497,
  [SMALL_STATE(60)] = 2534,
  [SMALL_STATE(61)] = 2568,
  [SMALL_STATE(62)] = 2606,
  [SMALL_STATE(63)] = 2640,
  [SMALL_STATE(64)] = 2678,
  [SMALL_STATE(65)] = 2712,
  [SMALL_STATE(66)] = 2750,
  [SMALL_STATE(67)] = 2779,
  [SMALL_STATE(68)] = 2808,
  [SMALL_STATE(69)] = 2837,
  [SMALL_STATE(70)] = 2866,
  [SMALL_STATE(71)] = 2894,
  [SMALL_STATE(72)] = 2922,
  [SMALL_STATE(73)] = 2950,
  [SMALL_STATE(74)] = 2978,
  [SMALL_STATE(75)] = 3006,
  [SMALL_STATE(76)] = 3022,
  [SMALL_STATE(77)] = 3038,
  [SMALL_STATE(78)] = 3056,
  [SMALL_STATE(79)] = 3074,
  [SMALL_STATE(80)] = 3090,
  [SMALL_STATE(81)] = 3106,
  [SMALL_STATE(82)] = 3122,
  [SMALL_STATE(83)] = 3150,
  [SMALL_STATE(84)] = 3166,
  [SMALL_STATE(85)] = 3184,
  [SMALL_STATE(86)] = 3202,
  [SMALL_STATE(87)] = 3227,
  [SMALL_STATE(88)] = 3246,
  [SMALL_STATE(89)] = 3273,
  [SMALL_STATE(90)] = 3298,
  [SMALL_STATE(91)] = 3323,
  [SMALL_STATE(92)] = 3340,
  [SMALL_STATE(93)] = 3365,
  [SMALL_STATE(94)] = 3380,
  [SMALL_STATE(95)] = 3405,
  [SMALL_STATE(96)] = 3422,
  [SMALL_STATE(97)] = 3449,
  [SMALL_STATE(98)] = 3474,
  [SMALL_STATE(99)] = 3499,
  [SMALL_STATE(100)] = 3524,
  [SMALL_STATE(101)] = 3546,
  [SMALL_STATE(102)] = 3570,
  [SMALL_STATE(103)] = 3594,
  [SMALL_STATE(104)] = 3616,
  [SMALL_STATE(105)] = 3630,
  [SMALL_STATE(106)] = 3652,
  [SMALL_STATE(107)] = 3676,
  [SMALL_STATE(108)] = 3698,
  [SMALL_STATE(109)] = 3719,
  [SMALL_STATE(110)] = 3734,
  [SMALL_STATE(111)] = 3755,
  [SMALL_STATE(112)] = 3772,
  [SMALL_STATE(113)] = 3787,
  [SMALL_STATE(114)] = 3808,
  [SMALL_STATE(115)] = 3825,
  [SMALL_STATE(116)] = 3838,
  [SMALL_STATE(117)] = 3853,
  [SMALL_STATE(118)] = 3868,
  [SMALL_STATE(119)] = 3889,
  [SMALL_STATE(120)] = 3902,
  [SMALL_STATE(121)] = 3915,
  [SMALL_STATE(122)] = 3936,
  [SMALL_STATE(123)] = 3953,
  [SMALL_STATE(124)] = 3974,
  [SMALL_STATE(125)] = 3994,
  [SMALL_STATE(126)] = 4014,
  [SMALL_STATE(127)] = 4030,
  [SMALL_STATE(128)] = 4044,
  [SMALL_STATE(129)] = 4056,
  [SMALL_STATE(130)] = 4068,
  [SMALL_STATE(131)] = 4082,
  [SMALL_STATE(132)] = 4098,
  [SMALL_STATE(133)] = 4109,
  [SMALL_STATE(134)] = 4124,
  [SMALL_STATE(135)] = 4135,
  [SMALL_STATE(136)] = 4146,
  [SMALL_STATE(137)] = 4161,
  [SMALL_STATE(138)] = 4178,
  [SMALL_STATE(139)] = 4189,
  [SMALL_STATE(140)] = 4202,
  [SMALL_STATE(141)] = 4213,
  [SMALL_STATE(142)] = 4224,
  [SMALL_STATE(143)] = 4241,
  [SMALL_STATE(144)] = 4252,
  [SMALL_STATE(145)] = 4263,
  [SMALL_STATE(146)] = 4278,
  [SMALL_STATE(147)] = 4289,
  [SMALL_STATE(148)] = 4304,
  [SMALL_STATE(149)] = 4315,
  [SMALL_STATE(150)] = 4326,
  [SMALL_STATE(151)] = 4337,
  [SMALL_STATE(152)] = 4352,
  [SMALL_STATE(153)] = 4367,
  [SMALL_STATE(154)] = 4378,
  [SMALL_STATE(155)] = 4395,
  [SMALL_STATE(156)] = 4406,
  [SMALL_STATE(157)] = 4417,
  [SMALL_STATE(158)] = 4428,
  [SMALL_STATE(159)] = 4439,
  [SMALL_STATE(160)] = 4454,
  [SMALL_STATE(161)] = 4465,
  [SMALL_STATE(162)] = 4476,
  [SMALL_STATE(163)] = 4487,
  [SMALL_STATE(164)] = 4498,
  [SMALL_STATE(165)] = 4509,
  [SMALL_STATE(166)] = 4524,
  [SMALL_STATE(167)] = 4535,
  [SMALL_STATE(168)] = 4546,
  [SMALL_STATE(169)] = 4557,
  [SMALL_STATE(170)] = 4568,
  [SMALL_STATE(171)] = 4583,
  [SMALL_STATE(172)] = 4594,
  [SMALL_STATE(173)] = 4605,
  [SMALL_STATE(174)] = 4616,
  [SMALL_STATE(175)] = 4627,
  [SMALL_STATE(176)] = 4638,
  [SMALL_STATE(177)] = 4653,
  [SMALL_STATE(178)] = 4664,
  [SMALL_STATE(179)] = 4675,
  [SMALL_STATE(180)] = 4690,
  [SMALL_STATE(181)] = 4701,
  [SMALL_STATE(182)] = 4712,
  [SMALL_STATE(183)] = 4723,
  [SMALL_STATE(184)] = 4734,
  [SMALL_STATE(185)] = 4749,
  [SMALL_STATE(186)] = 4760,
  [SMALL_STATE(187)] = 4771,
  [SMALL_STATE(188)] = 4783,
  [SMALL_STATE(189)] = 4793,
  [SMALL_STATE(190)] = 4807,
  [SMALL_STATE(191)] = 4821,
  [SMALL_STATE(192)] = 4831,
  [SMALL_STATE(193)] = 4841,
  [SMALL_STATE(194)] = 4853,
  [SMALL_STATE(195)] = 4863,
  [SMALL_STATE(196)] = 4873,
  [SMALL_STATE(197)] = 4883,
  [SMALL_STATE(198)] = 4895,
  [SMALL_STATE(199)] = 4905,
  [SMALL_STATE(200)] = 4917,
  [SMALL_STATE(201)] = 4927,
  [SMALL_STATE(202)] = 4939,
  [SMALL_STATE(203)] = 4949,
  [SMALL_STATE(204)] = 4959,
  [SMALL_STATE(205)] = 4971,
  [SMALL_STATE(206)] = 4981,
  [SMALL_STATE(207)] = 4995,
  [SMALL_STATE(208)] = 5006,
  [SMALL_STATE(209)] = 5017,
  [SMALL_STATE(210)] = 5028,
  [SMALL_STATE(211)] = 5039,
  [SMALL_STATE(212)] = 5050,
  [SMALL_STATE(213)] = 5061,
  [SMALL_STATE(214)] = 5072,
  [SMALL_STATE(215)] = 5083,
  [SMALL_STATE(216)] = 5094,
  [SMALL_STATE(217)] = 5105,
  [SMALL_STATE(218)] = 5116,
  [SMALL_STATE(219)] = 5127,
  [SMALL_STATE(220)] = 5138,
  [SMALL_STATE(221)] = 5151,
  [SMALL_STATE(222)] = 5162,
  [SMALL_STATE(223)] = 5170,
  [SMALL_STATE(224)] = 5178,
  [SMALL_STATE(225)] = 5188,
  [SMALL_STATE(226)] = 5196,
  [SMALL_STATE(227)] = 5204,
  [SMALL_STATE(228)] = 5212,
  [SMALL_STATE(229)] = 5220,
  [SMALL_STATE(230)] = 5230,
  [SMALL_STATE(231)] = 5238,
  [SMALL_STATE(232)] = 5246,
  [SMALL_STATE(233)] = 5254,
  [SMALL_STATE(234)] = 5262,
  [SMALL_STATE(235)] = 5270,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(234),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(214),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(189),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(229),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(137),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(38),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(37),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(229),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(137),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(231),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(233),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(231),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(234),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(189),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(132),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(183),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(148),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(153),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(173),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(157),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(41),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(42),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(37),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(229),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(137),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(54),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(37),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(229),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(137),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(64),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(120),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(189),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(68),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(82),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(37),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(229),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(137),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(100),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(100),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(107),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(107),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(108),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(108),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(181),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(191),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(113),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(175),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(194),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(124),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(124),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(161),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(141),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(154),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
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
