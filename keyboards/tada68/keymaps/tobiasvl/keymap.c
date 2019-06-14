#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc§| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  +|  \|Backspa | | |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  Å|  ¨| Ent-|Del |
   * |-------------------------------------------------------| er|----|
   * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  Ø|  Æ| @ |   |PgUp|
   * |----------------------------------------------------------------|
   * |Sft (| <>|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  -| Sft)| ^ |PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl{|Win |Alt[|        Space          |Alt]| FN|Ctrl}|<-| v |->|
   * `----------------------------------------------------------------'
   */
  [_BL] = LAYOUT_iso(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_GRV,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_DEL,  \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_PGUP, \
    KC_LSPO, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, KC_UP,   KC_PGDN, \
    KC_LCPO, KC_LGUI, KC_LAPO,                   KC_SPC,                             KC_RAPC, MO(_FL), KC_RCPC, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  /* Keymap _FL1: Function Layer
   * ,----------------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |PSCR|
   * |----------------------------------------------------------------|
   * |     |   | Up|   |   |   |   |   |   |   |   |   |         | INS|
   * |----------------------------------------------------------------|
   * |      |Lef|Dow|Rig|   |   |   |   |   |   |   |   |    |   |HOME|
   * |----------------------------------------------------------------|
   * |    |   |   |   |BL-|BL |BL+|   |   |  V-| MV| V+|     |   | END|
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
  [_FL] = LAYOUT_iso(
     KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_PSCR, \
    _______, _______,   KC_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_INS,  \
    _______, KC_LEFT, KC_DOWN,KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, \
    _______, _______, _______, _______,  BL_DEC, BL_TOGG,  BL_INC, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, KC_PGUP, KC_END,  \
    _______, _______, _______,                   _______,                            _______, _______, _______, KC_HOME, KC_PGDN, KC_END
  ),

};
