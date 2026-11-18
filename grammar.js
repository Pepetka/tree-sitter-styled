const CSS = require("tree-sitter-css/grammar")

const propertyName = $ =>
  choice(
    alias($.identifier, $.property_name),
    alias($.from, $.property_name),
    alias($.to, $.property_name),
  )

module.exports = grammar(CSS, {
  name: "styled",
  externals: ($, original) => [...original, $._js_expression],
  conflicts: ($, original) => [
    ...original,
    [$._keyframe_selector, $._selector],
  ],
  rules: {
    _top_level_item: ($, original) =>
      choice(original, $.keyframe_block, $.interpolation),

    _block_item: ($, original) => choice(original, $.interpolation),

    // Prefer bare keyframes, but keep keyword-only lists as CSS selectors.
    keyframe_block: $ =>
      seq(
        choice(
          prec.dynamic(1, $._keyframe_selector),
          prec.dynamic(
            -1,
            seq($._keyframe_selector, repeat1(seq(",", $._keyframe_selector))),
          ),
        ),
        $.block,
      ),

    _keyframe_selector: $ =>
      choice(
        $.from,
        $.to,
        alias($._integer_percentage, $.integer_value),
        alias($._float_percentage, $.float_value),
      ),

    _integer_percentage: $ =>
      seq(/[+-]?\d+/, alias(token.immediate("%"), $.unit)),

    _float_percentage: $ =>
      seq(
        /[+-]?(?:\d*\.\d+(?:[eE][+-]?\d+)?|\d+[eE][+-]?\d+)/,
        alias(token.immediate("%"), $.unit),
      ),

    from: _ => /[fF][rR][oO][mM]/,
    to: _ => /[tT][oO]/,

    _selector: ($, original) =>
      choice(original, alias($.from, $.tag_name), alias($.to, $.tag_name)),

    declaration: ($, original) =>
      seq(propertyName($), ...original.members.slice(1)),

    last_declaration: ($, original) =>
      prec(
        original.value,
        seq(propertyName($), ...original.content.members.slice(1)),
      ),

    _value: ($, original) =>
      prec(
        -1,
        choice(
          ...original.content.members,
          alias($._inline_interpolation, $.interpolation),
        ),
      ),

    interpolation: $ => seq("${", $.js_expression, choice("}", "};")),

    _inline_interpolation: $ => seq("${", $.js_expression, "}"),

    js_expression: $ => $._js_expression,
  },
})
