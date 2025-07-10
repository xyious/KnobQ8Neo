/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum layers{
    QWERTY,
    DEVIL_1,
    DEVIL_3,
    DEVIL_CTRL,
    _FN1,
    _FN2,
    _FN3,
};

#define _______ KC_TRNS
// NEO_3 special characters
#define L3_CAPITAL_SS           RSA(DE_S)                   // ẞ
#define L3_CAPITAL_UE           S(DE_UDIA)                  // Ü
#define L3_CAPITAL_OE           S(DE_ODIA)                  // Ö
#define L3_CAPITAL_AE           S(DE_ADIA)                  // Ä
#define L3_SUPERSCRIPT_1        RALT(DE_1)                  // ¹
#define L3_SUPERSCRIPT_2        DE_SUP2                     // ²
#define L3_SUPERSCRIPT_3        DE_SUP3                     // ³
#define L3_RSAQUO               RSA(DE_Y)                   // ›
#define L3_LSAQUO               RSA(DE_X)                   // ‹
#define L3_RAQUO                RALT(DE_Y)                  // »
#define L3_LAQUO                RALT(DE_X)                  // «
#define L3_CENT                 RALT(DE_C)                  // ¢
#define L3_YEN                  RSA(DE_Z)                   // ¥
#define L3_SBQUO                RSA(DE_V)                   // ‚
#define L3_LEFT_SINGLE_QUOTE    RSA(DE_B)                   // ‘
#define L3_RIGHT_SINGLE_QUOTE   RSA(DE_N)                   // ’
#define L3_LOW9_DBQUOTE         RALT(DE_V)                  // „
#define L3_LEFT_DBQUOTE         RALT(DE_B)                  // “
#define L3_RIGHT_DBQUOTE        RALT(DE_N)                  // ”
#define L3_ELLIPSIS             RALT(DE_DOT)                // …
#define L3_UNDERSCORE           DE_UNDS                     // _
#define L3_LBRACKET             DE_LBRC                     // [
#define L3_RBRACKET             DE_RBRC                     // ]
#define L3_CIRCUMFLEX           DE_CIRC                     // ^
#define L3_EXCLAMATION          DE_EXLM                     // !
#define L3_LESSTHAN             DE_LABK                     // <
#define L3_GREATERTHAN          DE_RABK                     // >
#define L3_EQUAL                DE_EQL                      // =
#define L3_AMPERSAND            DE_AMPR                     // &
#define L3_SMALL_LONG_S         RALT(DE_S)                  // ſ
#define L3_BSLASH               DE_BSLS                     // (backslash)
#define L3_SLASH                DE_SLSH                     // /
#define L3_CLBRACKET            DE_LCBR                     // {
#define L3_CRBRACKET            DE_RCBR                     // }
#define L3_ASTERISK             DE_ASTR                     // *
#define L3_QUESTIONMARK         DE_QUES                     // ?
#define L3_LPARENTHESES         DE_LPRN                     // (
#define L3_RPARENTHESES         DE_RPRN                     // )
#define L3_HYPHEN_MINUS         DE_MINS                     // -
#define L3_COLON                DE_COLN                     // :
#define L3_AT                   DE_AT                       // @
#define L3_HASH                 DE_HASH                     // #
#define L3_PIPE                 DE_PIPE                     // |
#define L3_TILDE                DE_TILD                     // ~
#define L3_BACKTICK             DE_GRV                      // `
#define L3_PLUS                 DE_PLUS                     // +
#define L3_PERCENT              DE_PERC                     // %
#define L3_DOUBLE_QUOTE         DE_DQUO                     // "
#define L3_SINGLE_QUOTE         DE_QUOT                     // '
#define L3_SEMICOLON            DE_SCLN                     // ;
#define L3_DOLLAR               DE_DLR                      // $

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,         KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,         KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,          KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,
        MO(DEVIL_CTRL), KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN1), MO(_FN2),         KC_SPC,            KC_RCMD,                   KC_LEFT, KC_DOWN, KC_RGHT),

    [DEVIL_1] = LAYOUT_ansi_69(
        KC_ESC,   DE_1,     DE_2,     DE_3,     DE_4,     DE_5,     DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_MINS,  DE_GRV,   KC_BSPC,           KC_MUTE,
        KC_TAB,   DE_X,     DE_V,     DE_L,     DE_C,     DE_W,     DE_K,     DE_H,     DE_G,     DE_F,     DE_Q,     DE_SS,    KC_RBRC,  MO(DEVIL_3),          KC_DEL,
        MO(DEVIL_3), DE_U,     DE_I,     DE_A,     DE_E,     DE_O,     DE_S,     DE_N,     DE_R,     DE_T,     DE_D,     DE_Y,                    KC_ENT,       KC_HOME,
        KC_LSFT,  DE_UDIA,  DE_ODIA,  DE_ADIA,  DE_P,     DE_Z, DE_B,    DE_B,     DE_M,     DE_COMM,  DE_DOT,   DE_J,                         KC_RSFT,  KC_UP,
        MO(DEVIL_CTRL), KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN1), MO(_FN2),         KC_SPC,            KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT),

    [DEVIL_3] = LAYOUT_ansi_69(
        _______,       _______,          _______,            _______,           _______,           _______,            _______,              L3_YEN,          DE_8,                 DE_9,                 DE_0,              DE_MINS,                 DE_GRV,        KC_BSPC,                   KC_MUTE,
        _______,       L3_ELLIPSIS, L3_UNDERSCORE, L3_LBRACKET,  L3_RBRACKET,  L3_CIRCUMFLEX, L3_EXCLAMATION,  L3_LESSTHAN,     L3_GREATERTHAN,  L3_EQUAL,        L3_AMPERSAND, _______,    _______,  _______,           KC_DEL,
        _______,       L3_BSLASH,   L3_SLASH,      L3_CLBRACKET, L3_CRBRACKET, L3_ASTERISK,   L3_QUESTIONMARK, L3_LPARENTHESES, L3_RPARENTHESES, L3_HYPHEN_MINUS, L3_COLON,                DE_AT,                    KC_ENT,       KC_HOME,
        _______,       L3_HASH,     L3_DOLLAR,     L3_PIPE,      L3_TILDE,      L3_BACKTICK,  L3_BACKTICK,  L3_PLUS,        L3_PERCENT,      L3_DOUBLE_QUOTE, L3_SINGLE_QUOTE, L3_SEMICOLON,                                   KC_RSFT,     KC_UP,
        MO(DEVIL_CTRL), KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN1), MO(_FN2),         KC_SPC,            KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT),

    [DEVIL_CTRL] = LAYOUT_ansi_69(
        C(KC_ESC), C(KC_1), C(KC_2), C(KC_3), C(KC_4), C(KC_5), C(KC_6), C(KC_7), C(KC_8), C(KC_9), C(KC_0), C(KC_MINS), C(KC_EQL), C(KC_BSPC),         KC_MUTE,
        C(KC_TAB), C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T), C(KC_Y), C(KC_U), C(KC_I), C(KC_O), C(KC_P), C(KC_LBRC), C(KC_RBRC), C(KC_BSLS),        C(KC_DEL),
        C(KC_CAPS), C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G), C(KC_H), C(KC_J), C(KC_K), C(KC_L), C(KC_SCLN), C(KC_QUOT), C(KC_ENT),                 C(KC_HOME),
        C(KC_LSFT), C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B), C(KC_B), C(KC_N), C(KC_M), C(KC_COMM), C(KC_DOT), C(KC_SLSH), C(KC_RSFT),              C(KC_UP),
        KC_TRNS, C(KC_LWIN),    C(KC_LALT), C(KC_SPC), MO(_FN1),       MO(_FN2), C(KC_SPC), C(KC_RCMD),                                   C(KC_LEFT), C(KC_DOWN), C(KC_RGHT)),

    [_FN1] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_NO,   KC_NO,   RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RM_TOGG,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    [_FN2] = LAYOUT_ansi_69(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN2]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN3]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE

