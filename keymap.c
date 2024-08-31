#include QMK_KEYBOARD_H


enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define EISU LALT(KC_GRV)


// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [_QWERTY] = LAYOUT(
//     KC_TAB,
// KC_Q,
// KC_W,
// KC_E,
// KC_R,
// KC_T,
// LALT(KC_F2),
// KC_F8,
// KC_Y,
// KC_U,
// KC_I,
// KC_O,
// KC_P,
// KC_LBRC,
// KC_LALT,
// KC_A,
// KC_S,
// KC_D,
// KC_F,
// KC_G,
// LALT(KC_F7),
// KC_F9,
// KC_H,
// KC_J,
// KC_K,
// KC_L,
// KC_SCLN,
// KC_QUOT,
// KC_LGUI,
// KC_Z,
// KC_X,
// KC_C,
// KC_V,
// KC_B,
// LSFT(KC_EQL),
// RALT(KC_EQL),
// KC_N,
// KC_M,
// KC_COMM,
// KC_DOT,
// KC_SLSH,
// KC_CIRC,
// _______,
// _______,
// _______,
// _______,
// LT(3,KC_TAB),
// KC_SPC,
// LCTL_T(KC_F3),
// LT(2,KC_BSPC),
// LSFT_T(KC_ENT),
// LT(1,KC_DEL),
// KC_LEFT,
// KC_DOWN,
// KC_UP,
// KC_RGHT
//   ),

//   /* Lower
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * |   `  |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * |   ~  |   1  |   2  |   3  |   4  |   5  |   {  |                    |   }  | Left | Down |  Up  | Right|   :  |  "   |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * | Shift|   6  |   7  |   8  |   9  |   0  | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift|
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|Delete|||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End |
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_LOWER] = LAYOUT(
//     KC_GRV,
// KC_EXLM,
// KC_AT,
// KC_NUHS,
// RSFT(KC_EQL),
// RALT(KC_EQL),
// _______,
// _______,
// KC_DOT,
// KC_7,
// KC_8,
// KC_9,
// RALT(KC_7),
// RALT(KC_0),
// KC_EQL,
// KC_NUBS,
// KC_LSFT,
// KC_LCTL,
// KC_LALT,
// KC_RALT,
// _______,
// _______,
// KC_COMM,
// KC_4,
// KC_5,
// KC_6,
// LSFT(KC_8),
// LSFT(KC_9),
// RALT(KC_2),
// KC_MINS,
// KC_SLSH,
// LSFT(KC_NUHS),
// LSFT(KC_7),
// LSFT(KC_0),
// _______,
// _______,
// KC_0,
// KC_1,
// KC_2,
// KC_3,
// RALT(KC_8),
// RALT(KC_9),
// _______,
// _______,
// _______,
// _______,
// KC_TRNS,
// KC_SPC,
// KC_DEL,
// KC_TRNS,
// KC_ENT,
// KC_TRNS,
// _______,
// _______,
// _______,
// _______
//   ),

//   /* Raise
//   * ,----------------------------------------------------------------------------------------------------------------------.
//   * |   `  |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   |
//   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//   * |   ~  |   F1 |   F2 |   F3 |   F4 |   F5 |   {  |                    |   }  | Left | Down |  Up  | Right|   :  |  "   |
//   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//   * | Shift|   F6 |   F7 |   F8 |   F9 |  F10 | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift|
//   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//   * | Ctrl |  F11 |  F12 | EISU |||||||| Lower| Space|Delete|||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End |
//   * ,----------------------------------------------------------------------------------------------------------------------.
//   */
//   [_RAISE] = LAYOUT(
//     KC_VOLU,
// KC_F1,
// KC_F2,
// KC_F3,
// KC_F4,
// KC_F5,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// RGB_VAI,
// RGB_TOG,
// KC_VOLD,
// KC_F6,
// KC_F7,
// KC_F8,
// KC_F9,
// KC_F10,
// _______,
// _______,
// _______,
// KC_LALT,
// KC_LCTL,
// KC_LSFT,
// RGB_VAD,
// RGB_MOD,
// KC_MPLY,
// _______,
// _______,
// _______,
// KC_F11,
// KC_F12,
// _______,
// _______,
// _______,
// _______,
// RGB_SAD,
// RGB_SAI,
// RGB_HUI,
// RGB_RMOD,
// _______,
// _______,
// _______,
// _______,
// KC_TRNS,
// KC_SPC,
// KC_TRNS,
// KC_TRNS,
// _______,
// KC_TRNS,
// RGB_SPD,
// RGB_SPI,
// RGB_HUD,
// RGB_HUI
//     ),

//   /* Adjust
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * |      | Reset|RGB ON|  MODE|  HUE-|  HUE+|      |                    |      |  SAT-|  SAT+|  VAL-|  VAL+|      |      |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      |
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * |      |      |      |      ||||||||      |      |      ||||||||      |      |      ||||||||      |      |      |      |
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_ADJUST] = LAYOUT(
//     KC_ESC,
// KC_RBRC,
// LSFT(KC_RBRC),
// KC_HASH,
// RALT(KC_4),
// RALT(KC_RBRC),
// _______,
// _______,
// KC_HOME,
// KC_PGUP,
// KC_UP,
// KC_PGDN,
// KC_END,
// KC_PSCR,
// KC_CAPS,
// KC_PERC,
// KC_LSFT,
// KC_LCTL,
// KC_LALT,
// LSFT(KC_MINS),
// _______,
// _______,
// KC_INS,
// KC_LEFT,
// KC_DOWN,
// KC_RGHT,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// KC_APP,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// _______,
// KC_TRNS,
// _______,
// _______,
// KC_BSPC,
// KC_ENT,
// KC_DEL,
// _______,
// _______,
// _______,
// _______
//   )
// };

 /* Qwerty
   * ,----------------------------------------------------------------------------------------------------------------------.
   * |  Esc |   Q  |   W  |   E  |   R  |   T  |   -  |                    |   =  |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   F  |   G  |   [  |                    |   ]  |   H  |   J  |   K  |   L  |   ;  |  "   |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  | Space|                    | Enter|   N  |   M  |   ,  |   .  |   /  | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|Delete|||||||| Bksp | Enter| Raise|||||||| Left | Down |  Up  | Right|
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
// key not mapped: _______,   
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//         [_QWERTY] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, LALT(KC_F2), KC_F8, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G, LALT(KC_F7), KC_F9, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, LSFT(KC_EQL), RALT(KC_EQL), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LSFT(KC_8), KC_HOME, KC_PGDN, KC_PGUP, KC_END, LT(3,KC_TAB), KC_SPC, KC_LCTL, MO(2), KC_LSFT, MO(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
//         [_LOWER] = LAYOUT(KC_GRV, KC_EXLM, KC_AT, KC_NUHS, RSFT(KC_EQL), RALT(KC_EQL), KC_TRNS, KC_TRNS, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_EQL, KC_NUBS, KC_LSFT, KC_LCTL, KC_LALT, KC_RALT, KC_TRNS, KC_TRNS, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, RALT(KC_2), KC_MINS, KC_SLSH, LSFT(KC_NUHS), LSFT(KC_7), LSFT(KC_0), KC_TRNS, KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//         [_RAISE] = LAYOUT(KC_VOLU, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI, RGB_TOG, KC_VOLD, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_TRNS, KC_LALT, KC_LCTL, KC_LSFT, RGB_VAD, RGB_MOD, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_SAI, RGB_HUI, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_SPI, RGB_HUD, RGB_HUI),
//         [_ADJUST] = LAYOUT(KC_ESC, KC_RBRC, LSFT(KC_RBRC), KC_HASH, RALT(KC_4), RALT(KC_RBRC), KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_END, KC_PSCR, KC_CAPS, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, LSFT(KC_MINS), KC_TRNS, KC_TRNS, KC_INS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_APP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_7), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_ENT, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
// };

// Compile command: qmk compile -kb omkbd/ergodash/mini -km jerre

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,LALT(KC_F2),KC_F8,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_LALT,KC_A,KC_S,KC_D,KC_F,KC_G,LALT(KC_F7),KC_F9,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_LGUI,KC_Z,KC_X,KC_C,KC_V,KC_B,LSFT(KC_EQL),RALT(KC_EQL),KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_ENT,KC_HOME,KC_PGDN,KC_PGUP,KC_END,LT(3,KC_TAB),KC_SPC,KC_LCTL,MO(2),KC_LSFT,MO(1),KC_LEFT,KC_DOWN,KC_UP,KC_RGHT),
  [_LOWER] = LAYOUT(KC_GRV,KC_EXLM,KC_AT,KC_NUHS,RSFT(KC_EQL),RALT(KC_EQL),KC_TRNS,KC_TRNS,KC_NO,KC_7,KC_8,KC_9,RALT(KC_7),RALT(KC_0),KC_EQL,KC_NUBS,KC_LSFT,KC_LCTL,KC_LALT,KC_RALT,KC_TRNS,KC_TRNS,KC_NO,KC_4,KC_5,KC_6,LSFT(KC_8),LSFT(KC_9),RALT(KC_2),KC_MINS,KC_SLSH,LSFT(KC_NUHS),LSFT(KC_7),LSFT(KC_0),KC_TRNS,KC_TRNS,KC_0,KC_1,KC_2,KC_3,RALT(KC_8),RALT(KC_9),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_SPC,KC_DEL,KC_TRNS,KC_NO,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),
  [_RAISE] = LAYOUT(KC_VOLU,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,RGB_M_R,RGB_M_B,RGB_TOG,KC_VOLD,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_TRNS,KC_TRNS,KC_TRNS,KC_LALT,KC_LCTL,KC_LSFT,RGB_VAD,RGB_VAI,KC_MPLY,KC_TRNS,KC_TRNS,KC_TRNS,KC_F11,KC_F12,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,RGB_SAD,RGB_SAI,RGB_M_P,RALT(KC_8),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_SPC,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,RGB_SPD,RGB_SPI,RGB_HUD,RGB_HUI),
  [_ADJUST] = LAYOUT(KC_ESC,KC_RBRC,LSFT(KC_RBRC),KC_HASH,RALT(KC_4),RALT(KC_RBRC),KC_TRNS,KC_TRNS,KC_HOME,KC_PGUP,KC_UP,KC_PGDN,KC_END,KC_PSCR,KC_CAPS,KC_NO,KC_LSFT,KC_LCTL,KC_LALT,LSFT(KC_MINS),KC_TRNS,KC_TRNS,KC_INS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_APP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_ENT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_BSPC,KC_ENT,KC_DEL,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
