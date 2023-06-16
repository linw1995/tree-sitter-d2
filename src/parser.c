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
#define STATE_COUNT 256
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 3
#define TOKEN_COUNT 71
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
  sym__text_block_attrs = 88,
  sym__root_attribute = 89,
  sym__root_attr_key = 90,
  sym__shape_attribute = 91,
  sym__class_attribute = 92,
  sym_class_list = 93,
  sym__class_name = 94,
  sym__base_shape_attribute = 95,
  sym__shape_attr_key = 96,
  sym__style_attribute = 97,
  sym__style_attribute_block = 98,
  sym__inner_style_attribute = 99,
  sym__grid_attr_key = 100,
  sym__style_attr_key = 101,
  sym__common_style_attr_key = 102,
  sym__text_shape_attribute = 103,
  sym__connection_attribute = 104,
  sym__connection_arrowhead_attribute = 105,
  sym__connection_arrowhead_attr_key = 106,
  sym_label = 107,
  sym_attr_value = 108,
  sym__colon = 109,
  aux_sym__unquoted_string = 110,
  sym_string = 111,
  sym_boolean = 112,
  sym__end = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_connection_repeat1 = 115,
  aux_sym__connection_path_repeat1 = 116,
  aux_sym__connection_block_repeat1 = 117,
  aux_sym__classes_block_repeat1 = 118,
  aux_sym__classes_item_block_repeat1 = 119,
  aux_sym__container_block_repeat1 = 120,
  aux_sym__identifier_repeat1 = 121,
  aux_sym__text_block_attrs_repeat1 = 122,
  aux_sym_class_list_repeat1 = 123,
  aux_sym__style_attribute_block_repeat1 = 124,
  aux_sym_string_repeat1 = 125,
  alias_sym_class_name = 126,
  alias_sym_container_key = 127,
  alias_sym_reserved = 128,
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
  [22] = 20,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 37,
  [42] = 40,
  [43] = 35,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 48,
  [57] = 49,
  [58] = 55,
  [59] = 59,
  [60] = 46,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 53,
  [65] = 65,
  [66] = 55,
  [67] = 45,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 80,
  [81] = 78,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 83,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 76,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 78,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 90,
  [105] = 105,
  [106] = 103,
  [107] = 92,
  [108] = 105,
  [109] = 88,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 103,
  [122] = 122,
  [123] = 103,
  [124] = 111,
  [125] = 103,
  [126] = 105,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 103,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 111,
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
  [203] = 201,
  [204] = 201,
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
  [233] = 232,
  [234] = 231,
  [235] = 230,
  [236] = 227,
  [237] = 237,
  [238] = 231,
  [239] = 232,
  [240] = 228,
  [241] = 227,
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
  [253] = 253,
  [254] = 254,
  [255] = 255,
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
      if (lookahead == 'n') ADVANCE(304);
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
      if (lookahead == 'n') ADVANCE(304);
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
  [5] = {.lex_state = 26, .external_lex_state = 2},
  [6] = {.lex_state = 26, .external_lex_state = 2},
  [7] = {.lex_state = 291, .external_lex_state = 2},
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
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 26, .external_lex_state = 2},
  [21] = {.lex_state = 12, .external_lex_state = 2},
  [22] = {.lex_state = 26, .external_lex_state = 2},
  [23] = {.lex_state = 12, .external_lex_state = 2},
  [24] = {.lex_state = 26, .external_lex_state = 2},
  [25] = {.lex_state = 26, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 12, .external_lex_state = 2},
  [28] = {.lex_state = 26, .external_lex_state = 2},
  [29] = {.lex_state = 12, .external_lex_state = 2},
  [30] = {.lex_state = 12, .external_lex_state = 2},
  [31] = {.lex_state = 12, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 10, .external_lex_state = 3},
  [36] = {.lex_state = 28, .external_lex_state = 3},
  [37] = {.lex_state = 4, .external_lex_state = 2},
  [38] = {.lex_state = 4, .external_lex_state = 2},
  [39] = {.lex_state = 7, .external_lex_state = 2},
  [40] = {.lex_state = 4, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 29, .external_lex_state = 3},
  [44] = {.lex_state = 43, .external_lex_state = 2},
  [45] = {.lex_state = 28, .external_lex_state = 2},
  [46] = {.lex_state = 43, .external_lex_state = 2},
  [47] = {.lex_state = 24, .external_lex_state = 2},
  [48] = {.lex_state = 43, .external_lex_state = 2},
  [49] = {.lex_state = 43, .external_lex_state = 2},
  [50] = {.lex_state = 43, .external_lex_state = 2},
  [51] = {.lex_state = 10, .external_lex_state = 2},
  [52] = {.lex_state = 24, .external_lex_state = 2},
  [53] = {.lex_state = 28, .external_lex_state = 2},
  [54] = {.lex_state = 43, .external_lex_state = 2},
  [55] = {.lex_state = 28, .external_lex_state = 2},
  [56] = {.lex_state = 43, .external_lex_state = 2},
  [57] = {.lex_state = 43, .external_lex_state = 2},
  [58] = {.lex_state = 10, .external_lex_state = 2},
  [59] = {.lex_state = 24, .external_lex_state = 2},
  [60] = {.lex_state = 43, .external_lex_state = 2},
  [61] = {.lex_state = 10, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 24, .external_lex_state = 2},
  [64] = {.lex_state = 29, .external_lex_state = 2},
  [65] = {.lex_state = 24, .external_lex_state = 2},
  [66] = {.lex_state = 29, .external_lex_state = 2},
  [67] = {.lex_state = 29, .external_lex_state = 2},
  [68] = {.lex_state = 12, .external_lex_state = 2},
  [69] = {.lex_state = 24, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 12, .external_lex_state = 2},
  [73] = {.lex_state = 12, .external_lex_state = 2},
  [74] = {.lex_state = 24, .external_lex_state = 2},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 12, .external_lex_state = 2},
  [77] = {.lex_state = 12, .external_lex_state = 2},
  [78] = {.lex_state = 12, .external_lex_state = 2},
  [79] = {.lex_state = 12, .external_lex_state = 2},
  [80] = {.lex_state = 24, .external_lex_state = 2},
  [81] = {.lex_state = 12, .external_lex_state = 2},
  [82] = {.lex_state = 12, .external_lex_state = 2},
  [83] = {.lex_state = 12, .external_lex_state = 2},
  [84] = {.lex_state = 12, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 12, .external_lex_state = 2},
  [87] = {.lex_state = 4, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 12, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 2},
  [96] = {.lex_state = 24, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 12, .external_lex_state = 2},
  [99] = {.lex_state = 12, .external_lex_state = 2},
  [100] = {.lex_state = 12, .external_lex_state = 2},
  [101] = {.lex_state = 24, .external_lex_state = 2},
  [102] = {.lex_state = 12, .external_lex_state = 2},
  [103] = {.lex_state = 14, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 32, .external_lex_state = 2},
  [106] = {.lex_state = 32, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 14, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 15, .external_lex_state = 2},
  [112] = {.lex_state = 24, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 24, .external_lex_state = 2},
  [116] = {.lex_state = 24, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 24, .external_lex_state = 2},
  [120] = {.lex_state = 24, .external_lex_state = 2},
  [121] = {.lex_state = 34, .external_lex_state = 2},
  [122] = {.lex_state = 24, .external_lex_state = 2},
  [123] = {.lex_state = 33, .external_lex_state = 2},
  [124] = {.lex_state = 34, .external_lex_state = 2},
  [125] = {.lex_state = 15, .external_lex_state = 2},
  [126] = {.lex_state = 33, .external_lex_state = 2},
  [127] = {.lex_state = 12, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 35, .external_lex_state = 2},
  [133] = {.lex_state = 12, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 12, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 35, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 45, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 45, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 45, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
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
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 24, .external_lex_state = 2},
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
  [227] = {.lex_state = 12, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 12, .external_lex_state = 2},
  [237] = {.lex_state = 46, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 12, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 46, .external_lex_state = 2},
  [249] = {.lex_state = 47, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_source_file] = STATE(244),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(147),
    [sym__connection_path] = STATE(241),
    [sym_classes] = STATE(147),
    [sym_container] = STATE(147),
    [sym_shape] = STATE(147),
    [sym_shape_key] = STATE(78),
    [sym__identifier] = STATE(85),
    [sym__root_attribute] = STATE(147),
    [sym__root_attr_key] = STATE(226),
    [sym__grid_attr_key] = STATE(242),
    [sym__common_style_attr_key] = STATE(252),
    [sym_string] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(101),
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__identifier_token1,
    ACTIONS(44), 1,
      sym_keyword_classes,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_escape_sequence,
    ACTIONS(56), 1,
      sym__eol,
    STATE(78), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(226), 1,
      sym__root_attr_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(242), 1,
      sym__grid_attr_key,
    STATE(252), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(41), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(147), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(32), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(35), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(38), 16,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym__eol,
    STATE(78), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(226), 1,
      sym__root_attr_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(242), 1,
      sym__grid_attr_key,
    STATE(252), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(147), 5,
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
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(81), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(227), 1,
      sym__connection_path,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(163), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [274] = 18,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      aux_sym__identifier_token1,
    ACTIONS(81), 1,
      sym_keyword_class,
    ACTIONS(84), 1,
      sym_keyword_style,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(99), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(236), 1,
      sym__connection_path,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(215), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(78), 15,
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
  [352] = 18,
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
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(81), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(227), 1,
      sym__connection_path,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(193), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [430] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(105), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(103), 34,
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
  [477] = 14,
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
    ACTIONS(109), 1,
      sym_escape_sequence,
    STATE(89), 1,
      sym_shape_key,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [540] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(111), 1,
      aux_sym__identifier_token1,
    ACTIONS(114), 1,
      sym_keyword_style,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_escape_sequence,
    STATE(88), 1,
      sym_shape_key,
    STATE(239), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [603] = 14,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(107), 1,
      aux_sym__identifier_token1,
    ACTIONS(109), 1,
      sym_escape_sequence,
    ACTIONS(114), 1,
      sym_keyword_style,
    STATE(88), 1,
      sym_shape_key,
    STATE(239), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [666] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(111), 1,
      aux_sym__identifier_token1,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_escape_sequence,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(109), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [729] = 14,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(111), 1,
      aux_sym__identifier_token1,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_escape_sequence,
    STATE(89), 1,
      sym_shape_key,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [792] = 14,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(107), 1,
      aux_sym__identifier_token1,
    ACTIONS(109), 1,
      sym_escape_sequence,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(109), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(164), 2,
      sym_container,
      sym_shape,
    STATE(166), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [855] = 10,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_3d,
    ACTIONS(131), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(182), 1,
      sym__inner_style_attribute,
    STATE(234), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [904] = 10,
    ACTIONS(129), 1,
      anon_sym_3d,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(158), 1,
      sym__inner_style_attribute,
    STATE(234), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [953] = 10,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_3d,
    ACTIONS(148), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(200), 1,
      sym__inner_style_attribute,
    STATE(231), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [1002] = 9,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym_keyword_style,
    ACTIONS(159), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(219), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(153), 15,
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
  [1047] = 9,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym__eol,
    STATE(19), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(191), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [1092] = 9,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(143), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [1137] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(114), 1,
      sym_keyword_style,
    STATE(239), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(190), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [1177] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(234), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [1217] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(69), 1,
      sym_keyword_style,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(190), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [1257] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(231), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [1297] = 4,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(73), 21,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1331] = 3,
    ACTIONS(173), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(73), 22,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1363] = 7,
    ACTIONS(67), 1,
      sym_keyword_class,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(190), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(65), 15,
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
  [1403] = 7,
    ACTIONS(129), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(238), 1,
      sym__style_attr_key,
    STATE(247), 1,
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
  [1443] = 4,
    ACTIONS(173), 1,
      aux_sym__identifier_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(73), 21,
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
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1477] = 4,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 3,
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
  [1510] = 4,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 3,
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
  [1543] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 3,
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
  [1574] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(151), 18,
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
  [1599] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(151), 17,
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
  [1626] = 3,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(151), 17,
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
  [1653] = 14,
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
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(113), 1,
      sym_text_block,
    STATE(118), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(164), 1,
      sym__container_block,
    ACTIONS(192), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1698] = 14,
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
    STATE(113), 1,
      sym_text_block,
    STATE(118), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(164), 1,
      sym__container_block,
    ACTIONS(192), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1743] = 6,
    ACTIONS(216), 1,
      aux_sym__identifier_token3,
    ACTIONS(218), 1,
      sym__dash,
    STATE(40), 1,
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
  [1771] = 6,
    ACTIONS(224), 1,
      aux_sym__identifier_token3,
    ACTIONS(226), 1,
      sym__dash,
    STATE(37), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(220), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1799] = 6,
    ACTIONS(226), 1,
      sym__dash,
    ACTIONS(230), 1,
      aux_sym__identifier_token3,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(220), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1827] = 5,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(237), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(232), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1853] = 6,
    ACTIONS(218), 1,
      sym__dash,
    ACTIONS(241), 1,
      aux_sym__identifier_token3,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 2,
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
  [1881] = 5,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(237), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(243), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(232), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1907] = 14,
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
    STATE(113), 1,
      sym_text_block,
    STATE(118), 1,
      sym_label,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_string,
    STATE(164), 1,
      sym__container_block,
    ACTIONS(192), 2,
      sym__eol,
      anon_sym_SEMI,
  [1951] = 11,
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
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(217), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [1988] = 12,
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
    STATE(134), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(207), 1,
      sym__container_block,
    ACTIONS(258), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2027] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(262), 1,
      sym_escape_sequence,
    STATE(138), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2064] = 11,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym__eol,
    STATE(52), 1,
      aux_sym__classes_block_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(93), 1,
      sym__class_name,
    STATE(181), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2101] = 11,
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
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2138] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(262), 1,
      sym_escape_sequence,
    STATE(138), 1,
      aux_sym__unquoted_string,
    STATE(210), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2175] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(270), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2212] = 12,
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
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_string,
    STATE(139), 1,
      sym_label,
    STATE(223), 1,
      sym__classes_block,
    ACTIONS(272), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2251] = 11,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym__eol,
    STATE(52), 1,
      aux_sym__classes_block_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(104), 1,
      sym__class_name,
    STATE(212), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2288] = 12,
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
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(110), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(190), 1,
      sym__classes_item_block,
    ACTIONS(292), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2327] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(262), 1,
      sym_escape_sequence,
    STATE(138), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2364] = 12,
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
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      aux_sym__unquoted_string,
    STATE(114), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(187), 1,
      sym__connection_block,
    ACTIONS(296), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2403] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(270), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2440] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(270), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(210), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2477] = 12,
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
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(114), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(187), 1,
      sym__connection_block,
    ACTIONS(296), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2516] = 11,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__classes_block_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(93), 1,
      sym__class_name,
    STATE(151), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2553] = 11,
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
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_integer,
      sym_float,
    STATE(171), 2,
      sym_string,
      sym_boolean,
  [2590] = 12,
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
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      aux_sym__unquoted_string,
    STATE(110), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(190), 1,
      sym__classes_item_block,
    ACTIONS(292), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2629] = 10,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym__eol,
    STATE(62), 1,
      aux_sym_class_list_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(206), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2663] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      sym__eol,
    STATE(65), 1,
      aux_sym_class_list_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(154), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2697] = 12,
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
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_label,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_string,
    STATE(190), 1,
      sym__classes_item_block,
    ACTIONS(292), 2,
      sym__eol,
      anon_sym_SEMI,
  [2735] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(322), 1,
      sym__eol,
    STATE(62), 1,
      aux_sym_class_list_repeat1,
    STATE(91), 1,
      sym_shape_key,
    STATE(177), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2769] = 12,
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
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_label,
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(137), 1,
      sym_string,
    STATE(187), 1,
      sym__connection_block,
    ACTIONS(296), 2,
      sym__eol,
      anon_sym_SEMI,
  [2807] = 12,
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
    STATE(126), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(137), 1,
      sym_string,
    STATE(207), 1,
      sym__container_block,
    ACTIONS(258), 2,
      sym__eol,
      anon_sym_SEMI,
  [2845] = 8,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      sym_keyword_style,
    ACTIONS(332), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__connection_block_repeat1,
    STATE(107), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(221), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2874] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(170), 2,
      sym_class_list,
      sym__class_name,
  [2903] = 8,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      sym__eol,
    STATE(71), 1,
      aux_sym__connection_block_repeat1,
    STATE(92), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(185), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2932] = 8,
    ACTIONS(69), 1,
      sym_keyword_style,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__connection_block_repeat1,
    STATE(92), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(176), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2961] = 3,
    ACTIONS(218), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2979] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(347), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2995] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_shape_key,
    STATE(101), 1,
      aux_sym__connection_path_repeat1,
    STATE(102), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3023] = 3,
    ACTIONS(349), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3041] = 8,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      sym_arrow,
    STATE(58), 1,
      sym__colon,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3069] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3085] = 8,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      sym_arrow,
    ACTIONS(369), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3113] = 8,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      sym_arrow,
    ACTIONS(371), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym__colon,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3141] = 8,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym__class_name,
    STATE(91), 1,
      sym_shape_key,
    STATE(223), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3169] = 8,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      sym_arrow,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3197] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3213] = 3,
    ACTIONS(379), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3231] = 2,
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
  [3247] = 2,
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
  [3263] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3279] = 3,
    ACTIONS(385), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3297] = 7,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3322] = 7,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3347] = 7,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      sym_dot,
    STATE(61), 1,
      sym__colon,
    STATE(178), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3372] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3387] = 7,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      sym_dot,
    STATE(45), 1,
      sym__colon,
    STATE(216), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(401), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3412] = 7,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      sym_dot,
    STATE(53), 1,
      sym__colon,
    STATE(178), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3437] = 8,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      sym_arrow,
    ACTIONS(411), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__colon,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      sym__eol,
      anon_sym_SEMI,
  [3464] = 4,
    ACTIONS(415), 1,
      sym_arrow,
    STATE(95), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [3483] = 7,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym__connection_path_repeat1,
    STATE(243), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(418), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3508] = 7,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      sym_dot,
    STATE(51), 1,
      sym__colon,
    STATE(213), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(427), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3533] = 3,
    ACTIONS(437), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3550] = 8,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      sym_arrow,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 2,
      sym__eol,
      anon_sym_SEMI,
  [3577] = 3,
    ACTIONS(437), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3594] = 7,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym__connection_path_repeat1,
    STATE(98), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3619] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3633] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(448), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3655] = 7,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(451), 1,
      anon_sym_COLON,
    ACTIONS(453), 1,
      sym_dot,
    STATE(64), 1,
      sym__colon,
    STATE(178), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 2,
      sym__eol,
      anon_sym_SEMI,
  [3679] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(459), 1,
      sym_escape_sequence,
    STATE(106), 1,
      aux_sym__unquoted_string,
    ACTIONS(455), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3701] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(464), 1,
      sym_escape_sequence,
    STATE(106), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3723] = 7,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      sym_dot,
    STATE(67), 1,
      sym__colon,
    STATE(216), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(401), 2,
      sym__eol,
      anon_sym_SEMI,
  [3747] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(473), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym__unquoted_string,
    ACTIONS(455), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3769] = 7,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 2,
      sym__eol,
      anon_sym_SEMI,
  [3793] = 4,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3810] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(483), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    ACTIONS(479), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3831] = 3,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3846] = 4,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3863] = 4,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3880] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3895] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_RBRACE,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3908] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3921] = 4,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3938] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 6,
      aux_sym__identifier_token1,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3951] = 3,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3966] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(505), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3987] = 3,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4002] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(514), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4023] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(519), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(479), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4044] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(524), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4065] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(529), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(455), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4086] = 3,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(324), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4100] = 6,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(536), 1,
      sym__text_attr_key,
    ACTIONS(539), 1,
      sym__eol,
    STATE(128), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(208), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4120] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(542), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4132] = 6,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      sym__text_attr_key,
    ACTIONS(548), 1,
      sym__eol,
    STATE(128), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(167), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4152] = 6,
    ACTIONS(546), 1,
      sym__text_attr_key,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(552), 1,
      sym__eol,
    STATE(130), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(161), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4172] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(557), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(443), 2,
      sym__eol,
      anon_sym_SEMI,
  [4192] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(324), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4204] = 4,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4220] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(324), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4234] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(565), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4246] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(567), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4258] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(571), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym__unquoted_string,
    ACTIONS(479), 2,
      sym__eol,
      anon_sym_SEMI,
  [4278] = 4,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4294] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4305] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4316] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(579), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4327] = 4,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 2,
      sym__eol,
      anon_sym_SEMI,
  [4342] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4353] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(587), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4364] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      aux_sym_string_repeat1,
    ACTIONS(591), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4381] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4394] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(595), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4405] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_repeat1,
    ACTIONS(599), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4422] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(601), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4433] = 4,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 2,
      sym__eol,
      anon_sym_SEMI,
  [4448] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_repeat1,
    ACTIONS(607), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4465] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(610), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4476] = 4,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(612), 2,
      sym__eol,
      anon_sym_SEMI,
  [4491] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4502] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(616), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4513] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4524] = 4,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 2,
      sym__eol,
      anon_sym_SEMI,
  [4539] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4550] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(624), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4561] = 4,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(626), 2,
      sym__eol,
      anon_sym_SEMI,
  [4576] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(628), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4587] = 4,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(630), 2,
      sym__eol,
      anon_sym_SEMI,
  [4602] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(632), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4613] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(634), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4624] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4635] = 4,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(638), 2,
      sym__eol,
      anon_sym_SEMI,
  [4650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(640), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4661] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(642), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4672] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4683] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4694] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(648), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4705] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(650), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4716] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(652), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4727] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(654), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4738] = 4,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(658), 2,
      sym__eol,
      anon_sym_SEMI,
  [4753] = 4,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(662), 2,
      sym__eol,
      anon_sym_SEMI,
  [4768] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4779] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(666), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4790] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(668), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4801] = 4,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(672), 2,
      sym__eol,
      anon_sym_SEMI,
  [4816] = 4,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      sym__eol,
      anon_sym_SEMI,
  [4831] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(678), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4842] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(680), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4853] = 4,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(682), 2,
      sym__eol,
      anon_sym_SEMI,
  [4868] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(684), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4879] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4890] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(686), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4901] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(688), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4912] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4923] = 4,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(690), 2,
      sym__eol,
      anon_sym_SEMI,
  [4938] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4949] = 4,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(696), 2,
      sym__eol,
      anon_sym_SEMI,
  [4964] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(698), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4975] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(700), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4986] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(702), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4997] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(704), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5008] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(706), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5019] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(708), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5030] = 3,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(710), 2,
      sym__eol,
      anon_sym_SEMI,
  [5042] = 4,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(716), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5066] = 4,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(718), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5080] = 4,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(720), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5094] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(722), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5104] = 3,
    STATE(119), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(724), 2,
      sym__eol,
      anon_sym_SEMI,
  [5116] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5126] = 3,
    STATE(224), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(726), 2,
      sym__eol,
      anon_sym_SEMI,
  [5138] = 3,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 2,
      sym__text_attr_key,
      sym__eol,
  [5150] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(731), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5160] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(733), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5170] = 3,
    STATE(116), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(735), 2,
      sym__eol,
      anon_sym_SEMI,
  [5182] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(737), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5192] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(739), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5202] = 3,
    STATE(25), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(741), 2,
      sym__eol,
      anon_sym_SEMI,
  [5214] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(743), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5224] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(745), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5234] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(747), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5244] = 3,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(749), 2,
      sym__eol,
      anon_sym_SEMI,
  [5256] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(751), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5266] = 3,
    STATE(133), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(753), 2,
      sym__eol,
      anon_sym_SEMI,
  [5278] = 3,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 2,
      sym__text_attr_key,
      sym__eol,
  [5290] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5300] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5310] = 3,
    ACTIONS(758), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5321] = 3,
    ACTIONS(760), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5332] = 3,
    ACTIONS(357), 1,
      sym_arrow,
    STATE(79), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5343] = 3,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(207), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5354] = 3,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5365] = 3,
    ACTIONS(764), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5376] = 3,
    ACTIONS(766), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5387] = 3,
    ACTIONS(768), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5398] = 3,
    ACTIONS(770), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5409] = 3,
    ACTIONS(772), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5420] = 3,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5431] = 3,
    ACTIONS(357), 1,
      sym_arrow,
    STATE(94), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5442] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      aux_sym_text_block_token1,
    ACTIONS(778), 1,
      sym_language,
  [5455] = 3,
    ACTIONS(780), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5466] = 3,
    ACTIONS(782), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5477] = 3,
    ACTIONS(69), 1,
      sym_keyword_style,
    STATE(207), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5488] = 3,
    ACTIONS(357), 1,
      sym_arrow,
    STATE(76), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5499] = 2,
    ACTIONS(784), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5507] = 2,
    ACTIONS(437), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5515] = 2,
    ACTIONS(786), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5523] = 2,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5531] = 2,
    ACTIONS(790), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5539] = 2,
    ACTIONS(792), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5547] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      aux_sym_text_block_token1,
  [5557] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      sym__unescaped_single_string_fragment,
  [5567] = 2,
    ACTIONS(798), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5575] = 2,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5583] = 2,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5591] = 2,
    ACTIONS(804), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5599] = 2,
    ACTIONS(806), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5607] = 2,
    ACTIONS(808), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 274,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 477,
  [SMALL_STATE(9)] = 540,
  [SMALL_STATE(10)] = 603,
  [SMALL_STATE(11)] = 666,
  [SMALL_STATE(12)] = 729,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 855,
  [SMALL_STATE(15)] = 904,
  [SMALL_STATE(16)] = 953,
  [SMALL_STATE(17)] = 1002,
  [SMALL_STATE(18)] = 1047,
  [SMALL_STATE(19)] = 1092,
  [SMALL_STATE(20)] = 1137,
  [SMALL_STATE(21)] = 1177,
  [SMALL_STATE(22)] = 1217,
  [SMALL_STATE(23)] = 1257,
  [SMALL_STATE(24)] = 1297,
  [SMALL_STATE(25)] = 1331,
  [SMALL_STATE(26)] = 1363,
  [SMALL_STATE(27)] = 1403,
  [SMALL_STATE(28)] = 1443,
  [SMALL_STATE(29)] = 1477,
  [SMALL_STATE(30)] = 1510,
  [SMALL_STATE(31)] = 1543,
  [SMALL_STATE(32)] = 1574,
  [SMALL_STATE(33)] = 1599,
  [SMALL_STATE(34)] = 1626,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1698,
  [SMALL_STATE(37)] = 1743,
  [SMALL_STATE(38)] = 1771,
  [SMALL_STATE(39)] = 1799,
  [SMALL_STATE(40)] = 1827,
  [SMALL_STATE(41)] = 1853,
  [SMALL_STATE(42)] = 1881,
  [SMALL_STATE(43)] = 1907,
  [SMALL_STATE(44)] = 1951,
  [SMALL_STATE(45)] = 1988,
  [SMALL_STATE(46)] = 2027,
  [SMALL_STATE(47)] = 2064,
  [SMALL_STATE(48)] = 2101,
  [SMALL_STATE(49)] = 2138,
  [SMALL_STATE(50)] = 2175,
  [SMALL_STATE(51)] = 2212,
  [SMALL_STATE(52)] = 2251,
  [SMALL_STATE(53)] = 2288,
  [SMALL_STATE(54)] = 2327,
  [SMALL_STATE(55)] = 2364,
  [SMALL_STATE(56)] = 2403,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2477,
  [SMALL_STATE(59)] = 2516,
  [SMALL_STATE(60)] = 2553,
  [SMALL_STATE(61)] = 2590,
  [SMALL_STATE(62)] = 2629,
  [SMALL_STATE(63)] = 2663,
  [SMALL_STATE(64)] = 2697,
  [SMALL_STATE(65)] = 2735,
  [SMALL_STATE(66)] = 2769,
  [SMALL_STATE(67)] = 2807,
  [SMALL_STATE(68)] = 2845,
  [SMALL_STATE(69)] = 2874,
  [SMALL_STATE(70)] = 2903,
  [SMALL_STATE(71)] = 2932,
  [SMALL_STATE(72)] = 2961,
  [SMALL_STATE(73)] = 2979,
  [SMALL_STATE(74)] = 2995,
  [SMALL_STATE(75)] = 3023,
  [SMALL_STATE(76)] = 3041,
  [SMALL_STATE(77)] = 3069,
  [SMALL_STATE(78)] = 3085,
  [SMALL_STATE(79)] = 3113,
  [SMALL_STATE(80)] = 3141,
  [SMALL_STATE(81)] = 3169,
  [SMALL_STATE(82)] = 3197,
  [SMALL_STATE(83)] = 3213,
  [SMALL_STATE(84)] = 3231,
  [SMALL_STATE(85)] = 3247,
  [SMALL_STATE(86)] = 3263,
  [SMALL_STATE(87)] = 3279,
  [SMALL_STATE(88)] = 3297,
  [SMALL_STATE(89)] = 3322,
  [SMALL_STATE(90)] = 3347,
  [SMALL_STATE(91)] = 3372,
  [SMALL_STATE(92)] = 3387,
  [SMALL_STATE(93)] = 3412,
  [SMALL_STATE(94)] = 3437,
  [SMALL_STATE(95)] = 3464,
  [SMALL_STATE(96)] = 3483,
  [SMALL_STATE(97)] = 3508,
  [SMALL_STATE(98)] = 3533,
  [SMALL_STATE(99)] = 3550,
  [SMALL_STATE(100)] = 3577,
  [SMALL_STATE(101)] = 3594,
  [SMALL_STATE(102)] = 3619,
  [SMALL_STATE(103)] = 3633,
  [SMALL_STATE(104)] = 3655,
  [SMALL_STATE(105)] = 3679,
  [SMALL_STATE(106)] = 3701,
  [SMALL_STATE(107)] = 3723,
  [SMALL_STATE(108)] = 3747,
  [SMALL_STATE(109)] = 3769,
  [SMALL_STATE(110)] = 3793,
  [SMALL_STATE(111)] = 3810,
  [SMALL_STATE(112)] = 3831,
  [SMALL_STATE(113)] = 3846,
  [SMALL_STATE(114)] = 3863,
  [SMALL_STATE(115)] = 3880,
  [SMALL_STATE(116)] = 3895,
  [SMALL_STATE(117)] = 3908,
  [SMALL_STATE(118)] = 3921,
  [SMALL_STATE(119)] = 3938,
  [SMALL_STATE(120)] = 3951,
  [SMALL_STATE(121)] = 3966,
  [SMALL_STATE(122)] = 3987,
  [SMALL_STATE(123)] = 4002,
  [SMALL_STATE(124)] = 4023,
  [SMALL_STATE(125)] = 4044,
  [SMALL_STATE(126)] = 4065,
  [SMALL_STATE(127)] = 4086,
  [SMALL_STATE(128)] = 4100,
  [SMALL_STATE(129)] = 4120,
  [SMALL_STATE(130)] = 4132,
  [SMALL_STATE(131)] = 4152,
  [SMALL_STATE(132)] = 4172,
  [SMALL_STATE(133)] = 4192,
  [SMALL_STATE(134)] = 4204,
  [SMALL_STATE(135)] = 4220,
  [SMALL_STATE(136)] = 4234,
  [SMALL_STATE(137)] = 4246,
  [SMALL_STATE(138)] = 4258,
  [SMALL_STATE(139)] = 4278,
  [SMALL_STATE(140)] = 4294,
  [SMALL_STATE(141)] = 4305,
  [SMALL_STATE(142)] = 4316,
  [SMALL_STATE(143)] = 4327,
  [SMALL_STATE(144)] = 4342,
  [SMALL_STATE(145)] = 4353,
  [SMALL_STATE(146)] = 4364,
  [SMALL_STATE(147)] = 4381,
  [SMALL_STATE(148)] = 4394,
  [SMALL_STATE(149)] = 4405,
  [SMALL_STATE(150)] = 4422,
  [SMALL_STATE(151)] = 4433,
  [SMALL_STATE(152)] = 4448,
  [SMALL_STATE(153)] = 4465,
  [SMALL_STATE(154)] = 4476,
  [SMALL_STATE(155)] = 4491,
  [SMALL_STATE(156)] = 4502,
  [SMALL_STATE(157)] = 4513,
  [SMALL_STATE(158)] = 4524,
  [SMALL_STATE(159)] = 4539,
  [SMALL_STATE(160)] = 4550,
  [SMALL_STATE(161)] = 4561,
  [SMALL_STATE(162)] = 4576,
  [SMALL_STATE(163)] = 4587,
  [SMALL_STATE(164)] = 4602,
  [SMALL_STATE(165)] = 4613,
  [SMALL_STATE(166)] = 4624,
  [SMALL_STATE(167)] = 4635,
  [SMALL_STATE(168)] = 4650,
  [SMALL_STATE(169)] = 4661,
  [SMALL_STATE(170)] = 4672,
  [SMALL_STATE(171)] = 4683,
  [SMALL_STATE(172)] = 4694,
  [SMALL_STATE(173)] = 4705,
  [SMALL_STATE(174)] = 4716,
  [SMALL_STATE(175)] = 4727,
  [SMALL_STATE(176)] = 4738,
  [SMALL_STATE(177)] = 4753,
  [SMALL_STATE(178)] = 4768,
  [SMALL_STATE(179)] = 4779,
  [SMALL_STATE(180)] = 4790,
  [SMALL_STATE(181)] = 4801,
  [SMALL_STATE(182)] = 4816,
  [SMALL_STATE(183)] = 4831,
  [SMALL_STATE(184)] = 4842,
  [SMALL_STATE(185)] = 4853,
  [SMALL_STATE(186)] = 4868,
  [SMALL_STATE(187)] = 4879,
  [SMALL_STATE(188)] = 4890,
  [SMALL_STATE(189)] = 4901,
  [SMALL_STATE(190)] = 4912,
  [SMALL_STATE(191)] = 4923,
  [SMALL_STATE(192)] = 4938,
  [SMALL_STATE(193)] = 4949,
  [SMALL_STATE(194)] = 4964,
  [SMALL_STATE(195)] = 4975,
  [SMALL_STATE(196)] = 4986,
  [SMALL_STATE(197)] = 4997,
  [SMALL_STATE(198)] = 5008,
  [SMALL_STATE(199)] = 5019,
  [SMALL_STATE(200)] = 5030,
  [SMALL_STATE(201)] = 5042,
  [SMALL_STATE(202)] = 5056,
  [SMALL_STATE(203)] = 5066,
  [SMALL_STATE(204)] = 5080,
  [SMALL_STATE(205)] = 5094,
  [SMALL_STATE(206)] = 5104,
  [SMALL_STATE(207)] = 5116,
  [SMALL_STATE(208)] = 5126,
  [SMALL_STATE(209)] = 5138,
  [SMALL_STATE(210)] = 5150,
  [SMALL_STATE(211)] = 5160,
  [SMALL_STATE(212)] = 5170,
  [SMALL_STATE(213)] = 5182,
  [SMALL_STATE(214)] = 5192,
  [SMALL_STATE(215)] = 5202,
  [SMALL_STATE(216)] = 5214,
  [SMALL_STATE(217)] = 5224,
  [SMALL_STATE(218)] = 5234,
  [SMALL_STATE(219)] = 5244,
  [SMALL_STATE(220)] = 5256,
  [SMALL_STATE(221)] = 5266,
  [SMALL_STATE(222)] = 5278,
  [SMALL_STATE(223)] = 5290,
  [SMALL_STATE(224)] = 5300,
  [SMALL_STATE(225)] = 5310,
  [SMALL_STATE(226)] = 5321,
  [SMALL_STATE(227)] = 5332,
  [SMALL_STATE(228)] = 5343,
  [SMALL_STATE(229)] = 5354,
  [SMALL_STATE(230)] = 5365,
  [SMALL_STATE(231)] = 5376,
  [SMALL_STATE(232)] = 5387,
  [SMALL_STATE(233)] = 5398,
  [SMALL_STATE(234)] = 5409,
  [SMALL_STATE(235)] = 5420,
  [SMALL_STATE(236)] = 5431,
  [SMALL_STATE(237)] = 5442,
  [SMALL_STATE(238)] = 5455,
  [SMALL_STATE(239)] = 5466,
  [SMALL_STATE(240)] = 5477,
  [SMALL_STATE(241)] = 5488,
  [SMALL_STATE(242)] = 5499,
  [SMALL_STATE(243)] = 5507,
  [SMALL_STATE(244)] = 5515,
  [SMALL_STATE(245)] = 5523,
  [SMALL_STATE(246)] = 5531,
  [SMALL_STATE(247)] = 5539,
  [SMALL_STATE(248)] = 5547,
  [SMALL_STATE(249)] = 5557,
  [SMALL_STATE(250)] = 5567,
  [SMALL_STATE(251)] = 5575,
  [SMALL_STATE(252)] = 5583,
  [SMALL_STATE(253)] = 5591,
  [SMALL_STATE(254)] = 5599,
  [SMALL_STATE(255)] = 5607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(254),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(225),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(203),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(249),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(146),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(39),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(249),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(146),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(251),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(247),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(251),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(254),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(203),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(17),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(160),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(142),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(194),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(169),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(189),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(141),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(40),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(42),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(38),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(249),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(146),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(52),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(38),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(249),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(146),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(117),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(203),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(68),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(74),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(38),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(249),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(146),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(103),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(103),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(106),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(106),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(198),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(202),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(140),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(205),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(123),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(125),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(125),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(148),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(235),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(128),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(132),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(173),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(152),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(197),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(186),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [786] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
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
