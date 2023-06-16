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
#define STATE_COUNT 292
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
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
  sym__line_comment = 64,
  sym__eol = 65,
  anon_sym_SEMI = 66,
  sym__text_block_start = 67,
  sym__text_block_end = 68,
  sym__text_block_raw_text = 69,
  sym__block_comment = 70,
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
  sym_comment = 113,
  sym__end = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_connection_repeat1 = 116,
  aux_sym__connection_path_repeat1 = 117,
  aux_sym__connection_block_repeat1 = 118,
  aux_sym__classes_block_repeat1 = 119,
  aux_sym__classes_item_block_repeat1 = 120,
  aux_sym__container_block_repeat1 = 121,
  aux_sym__identifier_repeat1 = 122,
  aux_sym__text_block_attrs_repeat1 = 123,
  aux_sym_class_list_repeat1 = 124,
  aux_sym__style_attribute_block_repeat1 = 125,
  aux_sym_string_repeat1 = 126,
  alias_sym_class_name = 127,
  alias_sym_container_key = 128,
  alias_sym_reserved = 129,
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
  [sym__line_comment] = "_line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym__block_comment] = "_block_comment",
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
  [sym_comment] = "comment",
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
  [sym__line_comment] = sym__line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym__block_comment] = sym__block_comment,
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
  [sym_comment] = sym_comment,
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
  [sym__line_comment] = {
    .visible = false,
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
  [sym__block_comment] = {
    .visible = false,
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
  [sym_comment] = {
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 12,
  [15] = 11,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 7,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 25,
  [31] = 7,
  [32] = 26,
  [33] = 26,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 45,
  [49] = 49,
  [50] = 49,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 52,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 60,
  [66] = 66,
  [67] = 59,
  [68] = 66,
  [69] = 53,
  [70] = 52,
  [71] = 71,
  [72] = 72,
  [73] = 58,
  [74] = 53,
  [75] = 75,
  [76] = 76,
  [77] = 66,
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
  [91] = 83,
  [92] = 88,
  [93] = 84,
  [94] = 86,
  [95] = 95,
  [96] = 96,
  [97] = 82,
  [98] = 98,
  [99] = 99,
  [100] = 83,
  [101] = 101,
  [102] = 102,
  [103] = 82,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 83,
  [108] = 108,
  [109] = 109,
  [110] = 83,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 83,
  [115] = 115,
  [116] = 109,
  [117] = 84,
  [118] = 7,
  [119] = 119,
  [120] = 120,
  [121] = 104,
  [122] = 122,
  [123] = 119,
  [124] = 122,
  [125] = 106,
  [126] = 109,
  [127] = 83,
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
  [140] = 135,
  [141] = 122,
  [142] = 119,
  [143] = 130,
  [144] = 144,
  [145] = 122,
  [146] = 146,
  [147] = 83,
  [148] = 148,
  [149] = 122,
  [150] = 150,
  [151] = 151,
  [152] = 130,
  [153] = 153,
  [154] = 130,
  [155] = 155,
  [156] = 156,
  [157] = 130,
  [158] = 158,
  [159] = 159,
  [160] = 135,
  [161] = 161,
  [162] = 122,
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
  [191] = 130,
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
  [233] = 232,
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
  [256] = 256,
  [257] = 232,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 263,
  [266] = 266,
  [267] = 260,
  [268] = 266,
  [269] = 269,
  [270] = 264,
  [271] = 266,
  [272] = 262,
  [273] = 260,
  [274] = 274,
  [275] = 262,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
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
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(267);
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
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
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
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '<') ADVANCE(49);
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
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
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
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '{') ADVANCE(295);
      if (lookahead == '}') ADVANCE(296);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(294);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(8);
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
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
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
      if (lookahead == '{') ADVANCE(295);
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
      if (lookahead == '{') ADVANCE(295);
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
      if (lookahead == '}') ADVANCE(296);
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
      if (lookahead == '}') ADVANCE(296);
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
      ACCEPT_TOKEN(sym__line_comment);
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
      ACCEPT_TOKEN(sym__line_comment);
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
  [8] = {.lex_state = 291, .external_lex_state = 2},
  [9] = {.lex_state = 291, .external_lex_state = 2},
  [10] = {.lex_state = 291, .external_lex_state = 2},
  [11] = {.lex_state = 26, .external_lex_state = 2},
  [12] = {.lex_state = 26, .external_lex_state = 2},
  [13] = {.lex_state = 26, .external_lex_state = 2},
  [14] = {.lex_state = 26, .external_lex_state = 2},
  [15] = {.lex_state = 26, .external_lex_state = 2},
  [16] = {.lex_state = 26, .external_lex_state = 2},
  [17] = {.lex_state = 12, .external_lex_state = 2},
  [18] = {.lex_state = 12, .external_lex_state = 2},
  [19] = {.lex_state = 12, .external_lex_state = 2},
  [20] = {.lex_state = 12, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 26, .external_lex_state = 2},
  [25] = {.lex_state = 12, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 26, .external_lex_state = 2},
  [28] = {.lex_state = 12, .external_lex_state = 2},
  [29] = {.lex_state = 26, .external_lex_state = 2},
  [30] = {.lex_state = 12, .external_lex_state = 2},
  [31] = {.lex_state = 26, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 2},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 26, .external_lex_state = 2},
  [35] = {.lex_state = 12, .external_lex_state = 2},
  [36] = {.lex_state = 12, .external_lex_state = 2},
  [37] = {.lex_state = 12, .external_lex_state = 2},
  [38] = {.lex_state = 12, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 10, .external_lex_state = 3},
  [44] = {.lex_state = 28, .external_lex_state = 3},
  [45] = {.lex_state = 4, .external_lex_state = 2},
  [46] = {.lex_state = 4, .external_lex_state = 2},
  [47] = {.lex_state = 29, .external_lex_state = 3},
  [48] = {.lex_state = 9, .external_lex_state = 2},
  [49] = {.lex_state = 9, .external_lex_state = 2},
  [50] = {.lex_state = 4, .external_lex_state = 2},
  [51] = {.lex_state = 9, .external_lex_state = 2},
  [52] = {.lex_state = 43, .external_lex_state = 2},
  [53] = {.lex_state = 28, .external_lex_state = 2},
  [54] = {.lex_state = 24, .external_lex_state = 2},
  [55] = {.lex_state = 4, .external_lex_state = 2},
  [56] = {.lex_state = 9, .external_lex_state = 2},
  [57] = {.lex_state = 43, .external_lex_state = 2},
  [58] = {.lex_state = 28, .external_lex_state = 2},
  [59] = {.lex_state = 43, .external_lex_state = 2},
  [60] = {.lex_state = 43, .external_lex_state = 2},
  [61] = {.lex_state = 24, .external_lex_state = 2},
  [62] = {.lex_state = 43, .external_lex_state = 2},
  [63] = {.lex_state = 43, .external_lex_state = 2},
  [64] = {.lex_state = 10, .external_lex_state = 2},
  [65] = {.lex_state = 43, .external_lex_state = 2},
  [66] = {.lex_state = 10, .external_lex_state = 2},
  [67] = {.lex_state = 43, .external_lex_state = 2},
  [68] = {.lex_state = 28, .external_lex_state = 2},
  [69] = {.lex_state = 10, .external_lex_state = 2},
  [70] = {.lex_state = 43, .external_lex_state = 2},
  [71] = {.lex_state = 24, .external_lex_state = 2},
  [72] = {.lex_state = 24, .external_lex_state = 2},
  [73] = {.lex_state = 29, .external_lex_state = 2},
  [74] = {.lex_state = 29, .external_lex_state = 2},
  [75] = {.lex_state = 24, .external_lex_state = 2},
  [76] = {.lex_state = 24, .external_lex_state = 2},
  [77] = {.lex_state = 29, .external_lex_state = 2},
  [78] = {.lex_state = 12, .external_lex_state = 2},
  [79] = {.lex_state = 24, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 12, .external_lex_state = 2},
  [82] = {.lex_state = 12, .external_lex_state = 2},
  [83] = {.lex_state = 28, .external_lex_state = 3},
  [84] = {.lex_state = 12, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 9, .external_lex_state = 2},
  [87] = {.lex_state = 12, .external_lex_state = 2},
  [88] = {.lex_state = 12, .external_lex_state = 2},
  [89] = {.lex_state = 12, .external_lex_state = 2},
  [90] = {.lex_state = 12, .external_lex_state = 2},
  [91] = {.lex_state = 10, .external_lex_state = 3},
  [92] = {.lex_state = 9, .external_lex_state = 2},
  [93] = {.lex_state = 12, .external_lex_state = 2},
  [94] = {.lex_state = 12, .external_lex_state = 2},
  [95] = {.lex_state = 24, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 12, .external_lex_state = 2},
  [98] = {.lex_state = 12, .external_lex_state = 2},
  [99] = {.lex_state = 24, .external_lex_state = 2},
  [100] = {.lex_state = 43, .external_lex_state = 2},
  [101] = {.lex_state = 12, .external_lex_state = 2},
  [102] = {.lex_state = 24, .external_lex_state = 2},
  [103] = {.lex_state = 12, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 28, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 10, .external_lex_state = 2},
  [111] = {.lex_state = 12, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 24, .external_lex_state = 2},
  [114] = {.lex_state = 29, .external_lex_state = 3},
  [115] = {.lex_state = 12, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 12, .external_lex_state = 2},
  [118] = {.lex_state = 24, .external_lex_state = 2},
  [119] = {.lex_state = 32, .external_lex_state = 2},
  [120] = {.lex_state = 12, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 14, .external_lex_state = 2},
  [123] = {.lex_state = 14, .external_lex_state = 2},
  [124] = {.lex_state = 32, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 29, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 24, .external_lex_state = 2},
  [130] = {.lex_state = 14, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 24, .external_lex_state = 2},
  [133] = {.lex_state = 24, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 15, .external_lex_state = 2},
  [136] = {.lex_state = 24, .external_lex_state = 2},
  [137] = {.lex_state = 24, .external_lex_state = 2},
  [138] = {.lex_state = 24, .external_lex_state = 2},
  [139] = {.lex_state = 24, .external_lex_state = 2},
  [140] = {.lex_state = 34, .external_lex_state = 2},
  [141] = {.lex_state = 33, .external_lex_state = 2},
  [142] = {.lex_state = 33, .external_lex_state = 2},
  [143] = {.lex_state = 32, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 15, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 24, .external_lex_state = 2},
  [148] = {.lex_state = 24, .external_lex_state = 2},
  [149] = {.lex_state = 34, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 12, .external_lex_state = 2},
  [152] = {.lex_state = 34, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 33, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 15, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 12, .external_lex_state = 2},
  [160] = {.lex_state = 35, .external_lex_state = 2},
  [161] = {.lex_state = 12, .external_lex_state = 2},
  [162] = {.lex_state = 35, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 12, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 45, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 45, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 45, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 35, .external_lex_state = 2},
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
  [207] = {.lex_state = 24, .external_lex_state = 2},
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
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 45, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 12, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 46, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 12, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 12, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 47, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 5},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 46, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 5},
  [290] = {.lex_state = 0, .external_lex_state = 4},
  [291] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token__block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token__block_comment] = sym__block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token__block_comment] = true,
  },
  [2] = {
    [ts_external_token__block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token__block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token__block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [sym__line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym__block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(276),
    [sym__root_definition] = STATE(10),
    [sym_connection] = STATE(170),
    [sym__connection_path] = STATE(275),
    [sym_classes] = STATE(170),
    [sym_container] = STATE(170),
    [sym_shape] = STATE(170),
    [sym_shape_key] = STATE(84),
    [sym__identifier] = STATE(85),
    [sym__root_attribute] = STATE(170),
    [sym__root_attr_key] = STATE(274),
    [sym__grid_attr_key] = STATE(287),
    [sym__common_style_attr_key] = STATE(286),
    [sym_string] = STATE(85),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(15),
    [anon_sym_vertical_DASHgap] = ACTIONS(17),
    [anon_sym_horizontal_DASHgap] = ACTIONS(17),
    [anon_sym_grid_DASHgap] = ACTIONS(17),
    [anon_sym_grid_DASHcolumns] = ACTIONS(17),
    [anon_sym_grid_DASHrows] = ACTIONS(17),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(19),
    [anon_sym_fill_DASHpattern] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(19),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_double_DASHborder] = ACTIONS(15),
    [anon_sym_font] = ACTIONS(19),
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
    [sym_keyword_classes] = ACTIONS(21),
    [sym_keyword_style] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_escape_sequence] = ACTIONS(3),
    [sym__line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(27),
    [sym__block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(11), 1,
      anon_sym_direction,
    ACTIONS(21), 1,
      sym_keyword_classes,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__eol,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(10), 1,
      sym__root_definition,
    STATE(84), 1,
      sym_shape_key,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(274), 1,
      sym__root_attr_key,
    STATE(275), 1,
      sym__connection_path,
    STATE(286), 1,
      sym__common_style_attr_key,
    STATE(287), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_escape_sequence,
      sym__line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    STATE(170), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
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
  [105] = 24,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__identifier_token1,
    ACTIONS(36), 1,
      anon_sym_direction,
    ACTIONS(51), 1,
      sym_keyword_classes,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      sym_escape_sequence,
    ACTIONS(63), 1,
      sym__eol,
    STATE(10), 1,
      sym__root_definition,
    STATE(84), 1,
      sym_shape_key,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(274), 1,
      sym__root_attr_key,
    STATE(275), 1,
      sym__connection_path,
    STATE(286), 1,
      sym__common_style_attr_key,
    STATE(287), 1,
      sym__grid_attr_key,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(48), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(45), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    STATE(170), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
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
  [210] = 22,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(74), 1,
      sym__eol,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(192), 1,
      sym__container_block_definition,
    STATE(262), 1,
      sym__connection_path,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_escape_sequence,
      sym__line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    STATE(256), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [297] = 22,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(74), 1,
      sym__eol,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(93), 1,
      sym_shape_key,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(224), 1,
      sym__container_block_definition,
    STATE(262), 1,
      sym__connection_path,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_escape_sequence,
      sym__line_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    STATE(256), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [384] = 22,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      aux_sym__identifier_token1,
    ACTIONS(89), 1,
      sym_keyword_class,
    ACTIONS(92), 1,
      sym_keyword_style,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_escape_sequence,
    ACTIONS(104), 1,
      sym__eol,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(117), 1,
      sym_shape_key,
    STATE(252), 1,
      sym__container_block_definition,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(272), 1,
      sym__connection_path,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(6), 2,
      sym_comment,
      aux_sym__container_block_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    STATE(256), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
    ACTIONS(86), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(83), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [471] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(7), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(107), 35,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
  [524] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(8), 1,
      sym_comment,
    ACTIONS(113), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(111), 34,
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
  [576] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(9), 1,
      sym_comment,
    ACTIONS(117), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(115), 34,
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
  [628] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(10), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(119), 34,
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
  [680] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(123), 1,
      aux_sym__identifier_token1,
    ACTIONS(125), 1,
      sym_keyword_style,
    ACTIONS(127), 1,
      sym_escape_sequence,
    STATE(11), 1,
      sym_comment,
    STATE(121), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [752] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(132), 1,
      sym_keyword_style,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(12), 1,
      sym_comment,
    STATE(104), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(273), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [824] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(123), 1,
      aux_sym__identifier_token1,
    ACTIONS(127), 1,
      sym_escape_sequence,
    STATE(13), 1,
      sym_comment,
    STATE(105), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [896] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(14), 1,
      sym_comment,
    STATE(105), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [968] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(123), 1,
      aux_sym__identifier_token1,
    ACTIONS(127), 1,
      sym_escape_sequence,
    ACTIONS(132), 1,
      sym_keyword_style,
    STATE(15), 1,
      sym_comment,
    STATE(104), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(273), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1040] = 18,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(125), 1,
      sym_keyword_style,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_escape_sequence,
    STATE(16), 1,
      sym_comment,
    STATE(121), 1,
      sym_shape_key,
    STATE(203), 1,
      sym__shape_attribute,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(196), 2,
      sym_container,
      sym_shape,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1112] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_3d,
    ACTIONS(147), 1,
      sym__eol,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(202), 1,
      sym__inner_style_attribute,
    STATE(268), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    ACTIONS(19), 3,
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
  [1166] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(145), 1,
      anon_sym_3d,
    ACTIONS(147), 1,
      sym__eol,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(178), 1,
      sym__inner_style_attribute,
    STATE(268), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    ACTIONS(19), 3,
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
  [1220] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      anon_sym_3d,
    ACTIONS(162), 1,
      sym__eol,
    STATE(240), 1,
      sym__inner_style_attribute,
    STATE(266), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    STATE(19), 2,
      sym_comment,
      aux_sym__style_attribute_block_repeat1,
    ACTIONS(159), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(153), 16,
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
  [1272] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(20), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(107), 22,
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
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [1311] = 13,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym__eol,
    STATE(21), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(227), 1,
      sym__classes_item_attribute,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(230), 2,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1365] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      sym_keyword_style,
    ACTIONS(180), 1,
      sym__eol,
    STATE(258), 1,
      sym__classes_item_attribute,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(22), 2,
      sym_comment,
      aux_sym__classes_item_block_repeat1,
    STATE(230), 2,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(174), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(171), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1417] = 13,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(167), 1,
      sym__eol,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(172), 1,
      sym__classes_item_attribute,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(230), 2,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1471] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(78), 22,
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
  [1508] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(145), 1,
      anon_sym_3d,
    STATE(25), 1,
      sym_comment,
    STATE(167), 1,
      sym__inner_style_attribute,
    STATE(266), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    ACTIONS(19), 3,
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
  [1553] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(132), 1,
      sym_keyword_style,
    STATE(26), 1,
      sym_comment,
    STATE(177), 1,
      sym__shape_attribute,
    STATE(273), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1602] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_comment,
    ACTIONS(78), 21,
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
  [1641] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(145), 1,
      anon_sym_3d,
    STATE(28), 1,
      sym_comment,
    STATE(167), 1,
      sym__inner_style_attribute,
    STATE(268), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    ACTIONS(19), 3,
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
  [1686] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(192), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(190), 22,
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
  [1723] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(145), 1,
      anon_sym_3d,
    STATE(30), 1,
      sym_comment,
    STATE(167), 1,
      sym__inner_style_attribute,
    STATE(271), 1,
      sym__style_attr_key,
    STATE(281), 1,
      sym__common_style_attr_key,
    ACTIONS(19), 3,
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
  [1768] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(109), 1,
      aux_sym__identifier_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(107), 22,
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
  [1805] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(72), 1,
      sym_keyword_style,
    STATE(32), 1,
      sym_comment,
    STATE(177), 1,
      sym__shape_attribute,
    STATE(267), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1854] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(70), 1,
      sym_keyword_class,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(33), 1,
      sym_comment,
    STATE(177), 1,
      sym__shape_attribute,
    STATE(260), 1,
      sym__shape_attr_key,
    STATE(283), 1,
      sym__grid_attr_key,
    STATE(194), 3,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(17), 5,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(68), 10,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      sym__text_attr_key,
  [1903] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(78), 21,
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
  [1942] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(151), 18,
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
  [1980] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(202), 19,
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
  [2016] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(151), 18,
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
  [2054] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(151), 19,
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
  [2090] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(169), 17,
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
  [2122] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(169), 17,
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
  [2154] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(169), 18,
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
  [2184] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(215), 18,
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
  [2214] = 15,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(229), 1,
      sym__text_block_start,
    STATE(43), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(146), 1,
      sym_text_block,
    STATE(166), 1,
      sym_string,
    STATE(196), 1,
      sym__container_block,
    ACTIONS(217), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2262] = 15,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym__text_block_start,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(44), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(146), 1,
      sym_text_block,
    STATE(166), 1,
      sym_string,
    STATE(196), 1,
      sym__container_block,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2310] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(239), 1,
      aux_sym__identifier_token3,
    ACTIONS(241), 1,
      sym__dash,
    STATE(45), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(237), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2343] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(245), 1,
      aux_sym__identifier_token3,
    ACTIONS(247), 1,
      sym__dash,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(237), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(243), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2376] = 15,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym__text_block_start,
    ACTIONS(249), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(251), 1,
      sym_escape_sequence,
    STATE(47), 1,
      sym_comment,
    STATE(134), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(146), 1,
      sym_text_block,
    STATE(166), 1,
      sym_string,
    STATE(196), 1,
      sym__container_block,
    ACTIONS(217), 2,
      sym__eol,
      anon_sym_SEMI,
  [2423] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(241), 1,
      sym__dash,
    ACTIONS(255), 1,
      aux_sym__identifier_token3,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(253), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2456] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(259), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(262), 2,
      aux_sym__identifier_token3,
      sym__dash,
    STATE(49), 2,
      sym_comment,
      aux_sym__identifier_repeat1,
    ACTIONS(257), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2485] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(262), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(264), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    STATE(50), 2,
      sym_comment,
      aux_sym__identifier_repeat1,
    ACTIONS(257), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2514] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(247), 1,
      sym__dash,
    ACTIONS(267), 1,
      aux_sym__identifier_token3,
    STATE(48), 1,
      aux_sym__identifier_repeat1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(253), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(243), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2547] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(271), 1,
      sym_escape_sequence,
    STATE(52), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym__unquoted_string,
    STATE(199), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [2587] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(131), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(279), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2629] = 13,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym__eol,
    STATE(54), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym__classes_block_repeat1,
    STATE(108), 1,
      sym_shape_key,
    STATE(109), 1,
      sym__class_name,
    STATE(213), 1,
      sym__classes_item,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2671] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(285), 10,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__identifier_token2,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym_escape_sequence,
      sym__eol,
      anon_sym_SEMI,
  [2697] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(285), 10,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__identifier_token2,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym_escape_sequence,
      sym__eol,
      anon_sym_SEMI,
  [2723] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(57), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym__unquoted_string,
    STATE(199), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [2763] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(58), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(163), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(249), 1,
      sym__container_block,
    ACTIONS(293), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2805] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(59), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [2845] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(271), 1,
      sym_escape_sequence,
    STATE(60), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym__unquoted_string,
    STATE(198), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [2885] = 13,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym__eol,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym__classes_block_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(108), 1,
      sym_shape_key,
    STATE(109), 1,
      sym__class_name,
    STATE(183), 1,
      sym__classes_item,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [2927] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(62), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym__unquoted_string,
    STATE(198), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [2967] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(63), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(247), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [3007] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(221), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(165), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(253), 1,
      sym__classes_block,
    ACTIONS(301), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3049] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(65), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(198), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [3089] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(221), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(128), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(220), 1,
      sym__connection_block,
    ACTIONS(305), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3131] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(271), 1,
      sym_escape_sequence,
    STATE(67), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [3171] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__unquoted_string,
    STATE(128), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(220), 1,
      sym__connection_block,
    ACTIONS(305), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3213] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(221), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    STATE(131), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(279), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3255] = 12,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(70), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(199), 1,
      sym_attr_value,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_float,
    STATE(205), 2,
      sym_string,
      sym_boolean,
  [3295] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      sym__eol,
    STATE(108), 1,
      sym_shape_key,
    STATE(126), 1,
      sym__class_name,
    STATE(231), 1,
      sym__classes_item,
    ACTIONS(311), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(71), 2,
      sym_comment,
      aux_sym__classes_block_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3335] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(325), 1,
      sym__eol,
    STATE(72), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_class_list_repeat1,
    STATE(108), 1,
      sym_shape_key,
    STATE(197), 1,
      sym__class_name,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3374] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(251), 1,
      sym_escape_sequence,
    STATE(73), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(163), 1,
      sym_label,
    STATE(166), 1,
      sym_string,
    STATE(249), 1,
      sym__container_block,
    ACTIONS(293), 2,
      sym__eol,
      anon_sym_SEMI,
  [3415] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(251), 1,
      sym_escape_sequence,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_comment,
    STATE(131), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(166), 1,
      sym_string,
    STATE(177), 1,
      sym__classes_item_block,
    ACTIONS(279), 2,
      sym__eol,
      anon_sym_SEMI,
  [3456] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym__eol,
    STATE(108), 1,
      sym_shape_key,
    STATE(242), 1,
      sym__class_name,
    ACTIONS(327), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(75), 2,
      sym_comment,
      aux_sym_class_list_repeat1,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3493] = 12,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_class_list_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(108), 1,
      sym_shape_key,
    STATE(173), 1,
      sym__class_name,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [3532] = 13,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(251), 1,
      sym_escape_sequence,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_comment,
    STATE(128), 1,
      sym_label,
    STATE(142), 1,
      aux_sym__unquoted_string,
    STATE(166), 1,
      sym_string,
    STATE(220), 1,
      sym__connection_block,
    ACTIONS(305), 2,
      sym__eol,
      anon_sym_SEMI,
  [3573] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym__eol,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym__connection_block_repeat1,
    STATE(106), 1,
      sym__connection_arrowhead_attr_key,
    STATE(215), 1,
      sym__connection_attribute,
    ACTIONS(345), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(239), 2,
      sym__style_attribute,
      sym__connection_arrowhead_attribute,
  [3609] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_comment,
    STATE(108), 1,
      sym_shape_key,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(210), 2,
      sym_class_list,
      sym__class_name,
  [3643] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(72), 1,
      sym_keyword_style,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym__connection_block_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(106), 1,
      sym__connection_arrowhead_attr_key,
    STATE(218), 1,
      sym__connection_attribute,
    ACTIONS(345), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(239), 2,
      sym__style_attribute,
      sym__connection_arrowhead_attribute,
  [3679] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      sym_keyword_style,
    ACTIONS(361), 1,
      sym__eol,
    STATE(125), 1,
      sym__connection_arrowhead_attr_key,
    STATE(235), 1,
      sym__connection_attribute,
    ACTIONS(355), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(81), 2,
      sym_comment,
      aux_sym__connection_block_repeat1,
    STATE(239), 2,
      sym__style_attribute,
      sym__connection_arrowhead_attribute,
  [3713] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      sym_arrow,
    STATE(68), 1,
      sym__colon,
    STATE(82), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_connection_repeat1,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(366), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3746] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    STATE(83), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym__text_block_start,
      sym_escape_sequence,
    ACTIONS(372), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [3769] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(382), 1,
      sym_arrow,
    ACTIONS(384), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(84), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3802] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(85), 1,
      sym_comment,
    ACTIONS(386), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3823] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(390), 1,
      sym__dash,
    STATE(86), 1,
      sym_comment,
    ACTIONS(388), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3846] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(87), 1,
      sym_comment,
    ACTIONS(392), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3867] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(241), 1,
      sym__dash,
    STATE(88), 1,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3890] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(89), 1,
      sym_comment,
    ACTIONS(235), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3911] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(394), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3932] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    STATE(91), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym__text_block_start,
      sym_escape_sequence,
    ACTIONS(372), 7,
      anon_sym_,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [3955] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(396), 1,
      sym__dash,
    STATE(92), 1,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3978] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      sym_arrow,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(400), 1,
      sym_dot,
    STATE(44), 1,
      sym__colon,
    STATE(93), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4011] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(402), 1,
      sym__dash,
    STATE(94), 1,
      sym_comment,
    ACTIONS(388), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4034] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_comment,
    STATE(108), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__class_name,
    STATE(253), 1,
      sym__classes_item,
    ACTIONS(127), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
  [4067] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(96), 1,
      sym_comment,
    ACTIONS(388), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4088] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym_arrow,
    ACTIONS(404), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__colon,
    STATE(97), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_connection_repeat1,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(366), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4121] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(98), 1,
      sym_comment,
    ACTIONS(406), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4142] = 9,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__connection_path_repeat1,
    STATE(115), 1,
      sym_shape_key,
    STATE(120), 1,
      sym__connection_path,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(3), 3,
      aux_sym__identifier_token1,
      sym_escape_sequence,
      sym__line_comment,
  [4173] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(374), 1,
      sym_escape_sequence,
    STATE(100), 1,
      sym_comment,
    ACTIONS(372), 7,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
  [4195] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(410), 1,
      sym_dot,
    STATE(101), 1,
      sym_comment,
    ACTIONS(408), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4217] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(278), 1,
      sym_shape_key,
    ACTIONS(412), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    STATE(102), 2,
      sym_comment,
      aux_sym__connection_path_repeat1,
  [4245] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym_arrow,
    ACTIONS(421), 1,
      anon_sym_COLON,
    STATE(77), 1,
      sym__colon,
    STATE(103), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_connection_repeat1,
    STATE(186), 1,
      sym__connection_block,
    ACTIONS(366), 2,
      sym__eol,
      anon_sym_SEMI,
  [4277] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(104), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4307] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_dot,
    STATE(44), 1,
      sym__colon,
    STATE(105), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4337] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      sym_dot,
    STATE(58), 1,
      sym__colon,
    STATE(106), 1,
      sym_comment,
    STATE(237), 1,
      sym__container_block,
    ACTIONS(427), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4367] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(374), 1,
      sym_escape_sequence,
    STATE(107), 1,
      sym_comment,
    ACTIONS(372), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [4389] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(108), 1,
      sym_comment,
    ACTIONS(431), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4409] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      sym_dot,
    STATE(53), 1,
      sym__colon,
    STATE(109), 1,
      sym_comment,
    STATE(208), 1,
      sym__classes_item_block,
    ACTIONS(435), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4439] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(374), 1,
      sym_escape_sequence,
    STATE(110), 1,
      sym_comment,
    ACTIONS(372), 7,
      anon_sym_,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [4461] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(441), 1,
      sym_arrow,
    STATE(111), 2,
      sym_comment,
      aux_sym_connection_repeat1,
    ACTIONS(439), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [4483] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(404), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      sym_dot,
    STATE(64), 1,
      sym__colon,
    STATE(112), 1,
      sym_comment,
    STATE(236), 1,
      sym__classes_block,
    ACTIONS(444), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4513] = 8,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_shape_key,
    STATE(102), 1,
      aux_sym__connection_path_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(85), 2,
      sym__identifier,
      sym_string,
    ACTIONS(3), 3,
      aux_sym__identifier_token1,
      sym_escape_sequence,
      sym__line_comment,
  [4541] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    STATE(114), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym__text_block_start,
      sym_escape_sequence,
    ACTIONS(372), 6,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [4563] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(410), 1,
      sym_dot,
    STATE(115), 1,
      sym_comment,
    ACTIONS(382), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4585] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(404), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    ACTIONS(450), 1,
      sym_dot,
    STATE(69), 1,
      sym__colon,
    STATE(116), 1,
      sym_comment,
    STATE(208), 1,
      sym__classes_item_block,
    ACTIONS(435), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4615] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      sym_arrow,
    ACTIONS(452), 1,
      anon_sym_COLON,
    ACTIONS(454), 1,
      sym_dot,
    STATE(47), 1,
      sym__colon,
    STATE(117), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 2,
      sym__eol,
      anon_sym_SEMI,
  [4647] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_RBRACE,
      aux_sym__identifier_token1,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4666] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(119), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__unquoted_string,
    ACTIONS(456), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4691] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(120), 1,
      sym_comment,
    ACTIONS(439), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [4710] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      sym_dot,
    STATE(47), 1,
      sym__colon,
    STATE(121), 1,
      sym_comment,
    STATE(182), 1,
      sym__container_block,
    ACTIONS(376), 2,
      sym__eol,
      anon_sym_SEMI,
  [4739] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(462), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(465), 1,
      sym_escape_sequence,
    STATE(122), 2,
      aux_sym__unquoted_string,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4762] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(221), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(123), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4787] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(468), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(471), 1,
      sym_escape_sequence,
    STATE(124), 2,
      aux_sym__unquoted_string,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4810] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(474), 1,
      sym_dot,
    STATE(73), 1,
      sym__colon,
    STATE(125), 1,
      sym_comment,
    STATE(237), 1,
      sym__container_block,
    ACTIONS(427), 2,
      sym__eol,
      anon_sym_SEMI,
  [4839] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      sym_dot,
    STATE(74), 1,
      sym__colon,
    STATE(126), 1,
      sym_comment,
    STATE(208), 1,
      sym__classes_item_block,
    ACTIONS(435), 2,
      sym__eol,
      anon_sym_SEMI,
  [4868] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(374), 1,
      sym_escape_sequence,
    STATE(127), 1,
      sym_comment,
    ACTIONS(372), 6,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
      anon_sym_SEMI,
  [4889] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_comment,
    STATE(212), 1,
      sym__connection_block,
    ACTIONS(478), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4911] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_comment,
    ACTIONS(330), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4931] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(130), 1,
      sym_comment,
    ACTIONS(483), 5,
      anon_sym_,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [4951] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_comment,
    STATE(225), 1,
      sym__classes_item_block,
    ACTIONS(487), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4973] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_comment,
    ACTIONS(309), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [4993] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_comment,
    ACTIONS(309), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5013] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_comment,
    STATE(226), 1,
      sym__container_block,
    ACTIONS(495), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5035] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(135), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__unquoted_string,
    ACTIONS(497), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5059] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(330), 6,
      aux_sym__identifier_token1,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5077] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(137), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_RBRACE,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5095] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(138), 1,
      sym_comment,
    ACTIONS(501), 6,
      aux_sym__identifier_token1,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5113] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(139), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_RBRACE,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5131] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(140), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym__unquoted_string,
    ACTIONS(497), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5155] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(503), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(506), 1,
      sym_escape_sequence,
    STATE(141), 2,
      aux_sym__unquoted_string,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5177] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(249), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(251), 1,
      sym_escape_sequence,
    STATE(141), 1,
      aux_sym__unquoted_string,
    STATE(142), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5201] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(143), 1,
      sym_comment,
    ACTIONS(483), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [5221] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(144), 1,
      sym_comment,
    ACTIONS(509), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [5239] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(511), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(514), 1,
      sym_escape_sequence,
    STATE(145), 2,
      aux_sym__unquoted_string,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5261] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_comment,
    STATE(168), 1,
      sym__text_block_attrs,
    ACTIONS(495), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5283] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(147), 1,
      sym_comment,
    ACTIONS(374), 6,
      anon_sym_LBRACE,
      aux_sym__identifier_token1,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [5301] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_comment,
    ACTIONS(330), 5,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [5321] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(522), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(525), 1,
      sym_escape_sequence,
    STATE(149), 2,
      aux_sym__unquoted_string,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5343] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(150), 1,
      sym_comment,
    ACTIONS(528), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5360] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(151), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [5377] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(152), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [5396] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      sym__text_attr_key,
    ACTIONS(535), 1,
      sym__eol,
    STATE(243), 1,
      sym__text_shape_attribute,
    STATE(153), 2,
      sym_comment,
      aux_sym__text_block_attrs_repeat1,
  [5419] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(154), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_LBRACE,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [5438] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(155), 1,
      sym_comment,
    ACTIONS(538), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5455] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      sym__text_attr_key,
    ACTIONS(544), 1,
      sym__eol,
    STATE(156), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(181), 1,
      sym__text_shape_attribute,
  [5480] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(157), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [5499] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(542), 1,
      sym__text_attr_key,
    ACTIONS(544), 1,
      sym__eol,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(158), 1,
      sym_comment,
    STATE(187), 1,
      sym__text_shape_attribute,
  [5524] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(159), 1,
      sym_comment,
    ACTIONS(548), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [5541] = 7,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(269), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(271), 1,
      sym_escape_sequence,
    STATE(160), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym__unquoted_string,
    ACTIONS(497), 2,
      sym__eol,
      anon_sym_SEMI,
  [5564] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [5583] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(553), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(556), 1,
      sym_escape_sequence,
    ACTIONS(460), 2,
      sym__eol,
      anon_sym_SEMI,
    STATE(162), 2,
      aux_sym__unquoted_string,
      sym_comment,
  [5604] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
    STATE(255), 1,
      sym__container_block,
    ACTIONS(559), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5625] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [5644] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_comment,
    STATE(241), 1,
      sym__classes_block,
    ACTIONS(564), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5665] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(166), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5682] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(167), 1,
      sym_comment,
    ACTIONS(568), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5698] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(570), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5714] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_string_repeat1,
    ACTIONS(574), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5734] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(576), 1,
      anon_sym_,
    STATE(9), 1,
      sym__end,
    STATE(170), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym__eol,
      anon_sym_SEMI,
  [5754] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(580), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5770] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym__end,
    STATE(172), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [5790] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym__end,
    STATE(173), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [5810] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(174), 1,
      sym_comment,
    ACTIONS(588), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5826] = 6,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_string_repeat1,
    ACTIONS(574), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [5846] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(176), 1,
      sym_comment,
    ACTIONS(592), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5862] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(177), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5878] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__end,
    STATE(178), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [5898] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(179), 1,
      sym_comment,
    ACTIONS(596), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5914] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(180), 1,
      sym_comment,
    ACTIONS(598), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5930] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_comment,
    STATE(254), 1,
      sym__end,
    ACTIONS(578), 2,
      sym__eol,
      anon_sym_SEMI,
  [5950] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(182), 1,
      sym_comment,
    ACTIONS(600), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5966] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym__end,
    STATE(183), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [5986] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(602), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
    STATE(184), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [6004] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(185), 1,
      sym_comment,
    ACTIONS(607), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6020] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(186), 1,
      sym_comment,
    ACTIONS(609), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6036] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_comment,
    STATE(246), 1,
      sym__end,
    ACTIONS(578), 2,
      sym__eol,
      anon_sym_SEMI,
  [6056] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(188), 1,
      sym_comment,
    ACTIONS(613), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6072] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(189), 1,
      sym_comment,
    ACTIONS(615), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6088] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(190), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6104] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(485), 1,
      sym_escape_sequence,
    STATE(191), 1,
      sym_comment,
    ACTIONS(483), 3,
      aux_sym__unquoted_string_token1,
      sym__eol,
      anon_sym_SEMI,
  [6122] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym__end,
    STATE(192), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [6142] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(193), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6158] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(194), 1,
      sym_comment,
    ACTIONS(621), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6174] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(195), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6190] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(196), 1,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6206] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym__end,
    STATE(197), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [6226] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(198), 1,
      sym_comment,
    ACTIONS(629), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6242] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(199), 1,
      sym_comment,
    ACTIONS(631), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6258] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(200), 1,
      sym_comment,
    ACTIONS(633), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6274] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(201), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6290] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__end,
    STATE(202), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [6310] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(203), 1,
      sym_comment,
    ACTIONS(495), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6326] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(204), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6342] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(205), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6358] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(206), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6374] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(207), 1,
      sym_comment,
    ACTIONS(645), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [6390] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(208), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6406] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(209), 1,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6422] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(210), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6438] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(211), 1,
      sym_comment,
    ACTIONS(653), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6454] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(212), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6470] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym__end,
    STATE(213), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [6490] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(214), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6506] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__end,
    STATE(215), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [6526] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(216), 1,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6542] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(217), 1,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6558] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym__end,
    STATE(218), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [6578] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(219), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6594] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(220), 1,
      sym_comment,
    ACTIONS(478), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6610] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(221), 1,
      sym_comment,
    ACTIONS(669), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6626] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(222), 1,
      sym_comment,
    ACTIONS(671), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6642] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(223), 1,
      sym_comment,
    ACTIONS(673), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6658] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym__end,
    STATE(224), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [6678] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(225), 1,
      sym_comment,
    ACTIONS(677), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6694] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(226), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6710] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym__end,
    STATE(227), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [6730] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(228), 1,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6746] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(229), 1,
      sym_comment,
    ACTIONS(683), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [6761] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(230), 1,
      sym_comment,
    ACTIONS(685), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6776] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(139), 1,
      sym__end,
    STATE(231), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [6793] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(689), 1,
      sym_dot,
    STATE(232), 1,
      sym_comment,
    STATE(261), 1,
      sym__colon,
  [6812] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(691), 1,
      sym_dot,
    STATE(233), 1,
      sym_comment,
    STATE(261), 1,
      sym__colon,
  [6831] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(234), 1,
      sym_comment,
    ACTIONS(693), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [6846] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(151), 1,
      sym__end,
    STATE(235), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [6863] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(236), 1,
      sym_comment,
    ACTIONS(695), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [6878] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(237), 1,
      sym_comment,
    ACTIONS(697), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6893] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(238), 1,
      sym_comment,
    ACTIONS(530), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [6908] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(239), 1,
      sym_comment,
    ACTIONS(699), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [6923] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(38), 1,
      sym__end,
    STATE(240), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__eol,
      anon_sym_SEMI,
  [6940] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(241), 1,
      sym_comment,
    ACTIONS(701), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [6955] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(136), 1,
      sym__end,
    STATE(242), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym__eol,
      anon_sym_SEMI,
  [6972] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(238), 1,
      sym__end,
    STATE(243), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym__eol,
      anon_sym_SEMI,
  [6989] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(244), 1,
      sym_comment,
    ACTIONS(703), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [7004] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      sym_comment,
    ACTIONS(707), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [7021] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_comment,
    ACTIONS(530), 2,
      sym__text_attr_key,
      sym__eol,
  [7038] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(247), 1,
      sym_comment,
    ACTIONS(712), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [7053] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(248), 1,
      sym_comment,
    ACTIONS(714), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [7068] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(249), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [7083] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(250), 1,
      sym_comment,
    ACTIONS(716), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [7098] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(251), 1,
      sym_comment,
    ACTIONS(718), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [7113] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(24), 1,
      sym__end,
    STATE(252), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [7130] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(253), 1,
      sym_comment,
    ACTIONS(564), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [7145] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_comment,
    ACTIONS(530), 2,
      sym__text_attr_key,
      sym__eol,
  [7162] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(255), 1,
      sym_comment,
    ACTIONS(723), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [7177] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(256), 1,
      sym_comment,
    ACTIONS(725), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [7192] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(727), 1,
      sym_dot,
    STATE(257), 1,
      sym_comment,
    STATE(261), 1,
      sym__colon,
  [7211] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    STATE(41), 1,
      sym__end,
    STATE(258), 1,
      sym_comment,
    ACTIONS(584), 2,
      sym__eol,
      anon_sym_SEMI,
  [7228] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym__colon,
    STATE(259), 1,
      sym_comment,
  [7244] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym__colon,
    STATE(260), 1,
      sym_comment,
  [7260] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym__style_attribute_block,
    STATE(261), 1,
      sym_comment,
  [7276] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(370), 1,
      sym_arrow,
    STATE(82), 1,
      aux_sym_connection_repeat1,
    STATE(262), 1,
      sym_comment,
  [7292] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(72), 1,
      sym_keyword_style,
    STATE(249), 1,
      sym__style_attribute,
    STATE(263), 1,
      sym_comment,
  [7308] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym__colon,
    STATE(264), 1,
      sym_comment,
  [7324] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(249), 1,
      sym__style_attribute,
    STATE(265), 1,
      sym_comment,
  [7340] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym__colon,
    STATE(266), 1,
      sym_comment,
  [7356] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    STATE(267), 1,
      sym_comment,
  [7372] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym__colon,
    STATE(268), 1,
      sym_comment,
  [7388] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(733), 1,
      aux_sym_text_block_token1,
    ACTIONS(735), 1,
      sym_language,
    STATE(269), 1,
      sym_comment,
  [7404] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym__colon,
    STATE(270), 1,
      sym_comment,
  [7420] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym__colon,
    STATE(271), 1,
      sym_comment,
  [7436] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(370), 1,
      sym_arrow,
    STATE(103), 1,
      aux_sym_connection_repeat1,
    STATE(272), 1,
      sym_comment,
  [7452] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym__colon,
    STATE(273), 1,
      sym_comment,
  [7468] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym__colon,
    STATE(274), 1,
      sym_comment,
  [7484] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(370), 1,
      sym_arrow,
    STATE(97), 1,
      aux_sym_connection_repeat1,
    STATE(275), 1,
      sym_comment,
  [7500] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_comment,
  [7513] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(739), 1,
      sym__text_block_raw_text,
    STATE(277), 1,
      sym_comment,
  [7526] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(410), 1,
      sym_dot,
    STATE(278), 1,
      sym_comment,
  [7539] = 4,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(741), 1,
      sym__unescaped_single_string_fragment,
    STATE(279), 1,
      sym_comment,
  [7552] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      sym_comment,
  [7565] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(745), 1,
      anon_sym_COLON,
    STATE(281), 1,
      sym_comment,
  [7578] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(747), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_comment,
  [7591] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(749), 1,
      anon_sym_COLON,
    STATE(283), 1,
      sym_comment,
  [7604] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(284), 1,
      sym_comment,
  [7617] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(753), 1,
      sym__text_block_end,
    STATE(285), 1,
      sym_comment,
  [7630] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(755), 1,
      anon_sym_COLON,
    STATE(286), 1,
      sym_comment,
  [7643] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(757), 1,
      anon_sym_COLON,
    STATE(287), 1,
      sym_comment,
  [7656] = 4,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(9), 1,
      sym__line_comment,
    ACTIONS(759), 1,
      aux_sym_text_block_token1,
    STATE(288), 1,
      sym_comment,
  [7669] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(761), 1,
      sym__text_block_end,
    STATE(289), 1,
      sym_comment,
  [7682] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(763), 1,
      sym__text_block_raw_text,
    STATE(290), 1,
      sym_comment,
  [7695] = 1,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 384,
  [SMALL_STATE(7)] = 471,
  [SMALL_STATE(8)] = 524,
  [SMALL_STATE(9)] = 576,
  [SMALL_STATE(10)] = 628,
  [SMALL_STATE(11)] = 680,
  [SMALL_STATE(12)] = 752,
  [SMALL_STATE(13)] = 824,
  [SMALL_STATE(14)] = 896,
  [SMALL_STATE(15)] = 968,
  [SMALL_STATE(16)] = 1040,
  [SMALL_STATE(17)] = 1112,
  [SMALL_STATE(18)] = 1166,
  [SMALL_STATE(19)] = 1220,
  [SMALL_STATE(20)] = 1272,
  [SMALL_STATE(21)] = 1311,
  [SMALL_STATE(22)] = 1365,
  [SMALL_STATE(23)] = 1417,
  [SMALL_STATE(24)] = 1471,
  [SMALL_STATE(25)] = 1508,
  [SMALL_STATE(26)] = 1553,
  [SMALL_STATE(27)] = 1602,
  [SMALL_STATE(28)] = 1641,
  [SMALL_STATE(29)] = 1686,
  [SMALL_STATE(30)] = 1723,
  [SMALL_STATE(31)] = 1768,
  [SMALL_STATE(32)] = 1805,
  [SMALL_STATE(33)] = 1854,
  [SMALL_STATE(34)] = 1903,
  [SMALL_STATE(35)] = 1942,
  [SMALL_STATE(36)] = 1980,
  [SMALL_STATE(37)] = 2016,
  [SMALL_STATE(38)] = 2054,
  [SMALL_STATE(39)] = 2090,
  [SMALL_STATE(40)] = 2122,
  [SMALL_STATE(41)] = 2154,
  [SMALL_STATE(42)] = 2184,
  [SMALL_STATE(43)] = 2214,
  [SMALL_STATE(44)] = 2262,
  [SMALL_STATE(45)] = 2310,
  [SMALL_STATE(46)] = 2343,
  [SMALL_STATE(47)] = 2376,
  [SMALL_STATE(48)] = 2423,
  [SMALL_STATE(49)] = 2456,
  [SMALL_STATE(50)] = 2485,
  [SMALL_STATE(51)] = 2514,
  [SMALL_STATE(52)] = 2547,
  [SMALL_STATE(53)] = 2587,
  [SMALL_STATE(54)] = 2629,
  [SMALL_STATE(55)] = 2671,
  [SMALL_STATE(56)] = 2697,
  [SMALL_STATE(57)] = 2723,
  [SMALL_STATE(58)] = 2763,
  [SMALL_STATE(59)] = 2805,
  [SMALL_STATE(60)] = 2845,
  [SMALL_STATE(61)] = 2885,
  [SMALL_STATE(62)] = 2927,
  [SMALL_STATE(63)] = 2967,
  [SMALL_STATE(64)] = 3007,
  [SMALL_STATE(65)] = 3049,
  [SMALL_STATE(66)] = 3089,
  [SMALL_STATE(67)] = 3131,
  [SMALL_STATE(68)] = 3171,
  [SMALL_STATE(69)] = 3213,
  [SMALL_STATE(70)] = 3255,
  [SMALL_STATE(71)] = 3295,
  [SMALL_STATE(72)] = 3335,
  [SMALL_STATE(73)] = 3374,
  [SMALL_STATE(74)] = 3415,
  [SMALL_STATE(75)] = 3456,
  [SMALL_STATE(76)] = 3493,
  [SMALL_STATE(77)] = 3532,
  [SMALL_STATE(78)] = 3573,
  [SMALL_STATE(79)] = 3609,
  [SMALL_STATE(80)] = 3643,
  [SMALL_STATE(81)] = 3679,
  [SMALL_STATE(82)] = 3713,
  [SMALL_STATE(83)] = 3746,
  [SMALL_STATE(84)] = 3769,
  [SMALL_STATE(85)] = 3802,
  [SMALL_STATE(86)] = 3823,
  [SMALL_STATE(87)] = 3846,
  [SMALL_STATE(88)] = 3867,
  [SMALL_STATE(89)] = 3890,
  [SMALL_STATE(90)] = 3911,
  [SMALL_STATE(91)] = 3932,
  [SMALL_STATE(92)] = 3955,
  [SMALL_STATE(93)] = 3978,
  [SMALL_STATE(94)] = 4011,
  [SMALL_STATE(95)] = 4034,
  [SMALL_STATE(96)] = 4067,
  [SMALL_STATE(97)] = 4088,
  [SMALL_STATE(98)] = 4121,
  [SMALL_STATE(99)] = 4142,
  [SMALL_STATE(100)] = 4173,
  [SMALL_STATE(101)] = 4195,
  [SMALL_STATE(102)] = 4217,
  [SMALL_STATE(103)] = 4245,
  [SMALL_STATE(104)] = 4277,
  [SMALL_STATE(105)] = 4307,
  [SMALL_STATE(106)] = 4337,
  [SMALL_STATE(107)] = 4367,
  [SMALL_STATE(108)] = 4389,
  [SMALL_STATE(109)] = 4409,
  [SMALL_STATE(110)] = 4439,
  [SMALL_STATE(111)] = 4461,
  [SMALL_STATE(112)] = 4483,
  [SMALL_STATE(113)] = 4513,
  [SMALL_STATE(114)] = 4541,
  [SMALL_STATE(115)] = 4563,
  [SMALL_STATE(116)] = 4585,
  [SMALL_STATE(117)] = 4615,
  [SMALL_STATE(118)] = 4647,
  [SMALL_STATE(119)] = 4666,
  [SMALL_STATE(120)] = 4691,
  [SMALL_STATE(121)] = 4710,
  [SMALL_STATE(122)] = 4739,
  [SMALL_STATE(123)] = 4762,
  [SMALL_STATE(124)] = 4787,
  [SMALL_STATE(125)] = 4810,
  [SMALL_STATE(126)] = 4839,
  [SMALL_STATE(127)] = 4868,
  [SMALL_STATE(128)] = 4889,
  [SMALL_STATE(129)] = 4911,
  [SMALL_STATE(130)] = 4931,
  [SMALL_STATE(131)] = 4951,
  [SMALL_STATE(132)] = 4973,
  [SMALL_STATE(133)] = 4993,
  [SMALL_STATE(134)] = 5013,
  [SMALL_STATE(135)] = 5035,
  [SMALL_STATE(136)] = 5059,
  [SMALL_STATE(137)] = 5077,
  [SMALL_STATE(138)] = 5095,
  [SMALL_STATE(139)] = 5113,
  [SMALL_STATE(140)] = 5131,
  [SMALL_STATE(141)] = 5155,
  [SMALL_STATE(142)] = 5177,
  [SMALL_STATE(143)] = 5201,
  [SMALL_STATE(144)] = 5221,
  [SMALL_STATE(145)] = 5239,
  [SMALL_STATE(146)] = 5261,
  [SMALL_STATE(147)] = 5283,
  [SMALL_STATE(148)] = 5301,
  [SMALL_STATE(149)] = 5321,
  [SMALL_STATE(150)] = 5343,
  [SMALL_STATE(151)] = 5360,
  [SMALL_STATE(152)] = 5377,
  [SMALL_STATE(153)] = 5396,
  [SMALL_STATE(154)] = 5419,
  [SMALL_STATE(155)] = 5438,
  [SMALL_STATE(156)] = 5455,
  [SMALL_STATE(157)] = 5480,
  [SMALL_STATE(158)] = 5499,
  [SMALL_STATE(159)] = 5524,
  [SMALL_STATE(160)] = 5541,
  [SMALL_STATE(161)] = 5564,
  [SMALL_STATE(162)] = 5583,
  [SMALL_STATE(163)] = 5604,
  [SMALL_STATE(164)] = 5625,
  [SMALL_STATE(165)] = 5644,
  [SMALL_STATE(166)] = 5665,
  [SMALL_STATE(167)] = 5682,
  [SMALL_STATE(168)] = 5698,
  [SMALL_STATE(169)] = 5714,
  [SMALL_STATE(170)] = 5734,
  [SMALL_STATE(171)] = 5754,
  [SMALL_STATE(172)] = 5770,
  [SMALL_STATE(173)] = 5790,
  [SMALL_STATE(174)] = 5810,
  [SMALL_STATE(175)] = 5826,
  [SMALL_STATE(176)] = 5846,
  [SMALL_STATE(177)] = 5862,
  [SMALL_STATE(178)] = 5878,
  [SMALL_STATE(179)] = 5898,
  [SMALL_STATE(180)] = 5914,
  [SMALL_STATE(181)] = 5930,
  [SMALL_STATE(182)] = 5950,
  [SMALL_STATE(183)] = 5966,
  [SMALL_STATE(184)] = 5986,
  [SMALL_STATE(185)] = 6004,
  [SMALL_STATE(186)] = 6020,
  [SMALL_STATE(187)] = 6036,
  [SMALL_STATE(188)] = 6056,
  [SMALL_STATE(189)] = 6072,
  [SMALL_STATE(190)] = 6088,
  [SMALL_STATE(191)] = 6104,
  [SMALL_STATE(192)] = 6122,
  [SMALL_STATE(193)] = 6142,
  [SMALL_STATE(194)] = 6158,
  [SMALL_STATE(195)] = 6174,
  [SMALL_STATE(196)] = 6190,
  [SMALL_STATE(197)] = 6206,
  [SMALL_STATE(198)] = 6226,
  [SMALL_STATE(199)] = 6242,
  [SMALL_STATE(200)] = 6258,
  [SMALL_STATE(201)] = 6274,
  [SMALL_STATE(202)] = 6290,
  [SMALL_STATE(203)] = 6310,
  [SMALL_STATE(204)] = 6326,
  [SMALL_STATE(205)] = 6342,
  [SMALL_STATE(206)] = 6358,
  [SMALL_STATE(207)] = 6374,
  [SMALL_STATE(208)] = 6390,
  [SMALL_STATE(209)] = 6406,
  [SMALL_STATE(210)] = 6422,
  [SMALL_STATE(211)] = 6438,
  [SMALL_STATE(212)] = 6454,
  [SMALL_STATE(213)] = 6470,
  [SMALL_STATE(214)] = 6490,
  [SMALL_STATE(215)] = 6506,
  [SMALL_STATE(216)] = 6526,
  [SMALL_STATE(217)] = 6542,
  [SMALL_STATE(218)] = 6558,
  [SMALL_STATE(219)] = 6578,
  [SMALL_STATE(220)] = 6594,
  [SMALL_STATE(221)] = 6610,
  [SMALL_STATE(222)] = 6626,
  [SMALL_STATE(223)] = 6642,
  [SMALL_STATE(224)] = 6658,
  [SMALL_STATE(225)] = 6678,
  [SMALL_STATE(226)] = 6694,
  [SMALL_STATE(227)] = 6710,
  [SMALL_STATE(228)] = 6730,
  [SMALL_STATE(229)] = 6746,
  [SMALL_STATE(230)] = 6761,
  [SMALL_STATE(231)] = 6776,
  [SMALL_STATE(232)] = 6793,
  [SMALL_STATE(233)] = 6812,
  [SMALL_STATE(234)] = 6831,
  [SMALL_STATE(235)] = 6846,
  [SMALL_STATE(236)] = 6863,
  [SMALL_STATE(237)] = 6878,
  [SMALL_STATE(238)] = 6893,
  [SMALL_STATE(239)] = 6908,
  [SMALL_STATE(240)] = 6923,
  [SMALL_STATE(241)] = 6940,
  [SMALL_STATE(242)] = 6955,
  [SMALL_STATE(243)] = 6972,
  [SMALL_STATE(244)] = 6989,
  [SMALL_STATE(245)] = 7004,
  [SMALL_STATE(246)] = 7021,
  [SMALL_STATE(247)] = 7038,
  [SMALL_STATE(248)] = 7053,
  [SMALL_STATE(249)] = 7068,
  [SMALL_STATE(250)] = 7083,
  [SMALL_STATE(251)] = 7098,
  [SMALL_STATE(252)] = 7113,
  [SMALL_STATE(253)] = 7130,
  [SMALL_STATE(254)] = 7145,
  [SMALL_STATE(255)] = 7162,
  [SMALL_STATE(256)] = 7177,
  [SMALL_STATE(257)] = 7192,
  [SMALL_STATE(258)] = 7211,
  [SMALL_STATE(259)] = 7228,
  [SMALL_STATE(260)] = 7244,
  [SMALL_STATE(261)] = 7260,
  [SMALL_STATE(262)] = 7276,
  [SMALL_STATE(263)] = 7292,
  [SMALL_STATE(264)] = 7308,
  [SMALL_STATE(265)] = 7324,
  [SMALL_STATE(266)] = 7340,
  [SMALL_STATE(267)] = 7356,
  [SMALL_STATE(268)] = 7372,
  [SMALL_STATE(269)] = 7388,
  [SMALL_STATE(270)] = 7404,
  [SMALL_STATE(271)] = 7420,
  [SMALL_STATE(272)] = 7436,
  [SMALL_STATE(273)] = 7452,
  [SMALL_STATE(274)] = 7468,
  [SMALL_STATE(275)] = 7484,
  [SMALL_STATE(276)] = 7500,
  [SMALL_STATE(277)] = 7513,
  [SMALL_STATE(278)] = 7526,
  [SMALL_STATE(279)] = 7539,
  [SMALL_STATE(280)] = 7552,
  [SMALL_STATE(281)] = 7565,
  [SMALL_STATE(282)] = 7578,
  [SMALL_STATE(283)] = 7591,
  [SMALL_STATE(284)] = 7604,
  [SMALL_STATE(285)] = 7617,
  [SMALL_STATE(286)] = 7630,
  [SMALL_STATE(287)] = 7643,
  [SMALL_STATE(288)] = 7656,
  [SMALL_STATE(289)] = 7669,
  [SMALL_STATE(290)] = 7682,
  [SMALL_STATE(291)] = 7695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(46),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(283),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(282),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(259),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(232),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(279),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(169),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(46),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(279),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(169),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(284),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(281),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(284),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(283),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(282),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(232),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(201),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 1),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(180),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(214),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 1),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(221),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(209),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(189),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(56),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(55),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(51),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(279),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(169),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(137),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(51),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(279),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(169),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(138),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(144),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(232),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(159),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(51),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(279),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(169),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(130),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(130),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(143),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(143),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(219),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(234),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(229),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 1),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(154),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(154),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(157),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(157),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(211),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(152),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(152),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(270),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(250),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 1),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(174),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(191),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(191),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(193),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(245),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_attribute, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(217),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(206),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [737] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grid_attr_key, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
