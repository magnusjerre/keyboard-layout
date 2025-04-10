/*
* V2
*/
#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum custom_keycodes {
    ARROW_EQUALS = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ARROW_EQUALS:
            if (record->event.pressed) {
                // when keycode i pressed
                register_code(KC_LSFT);
                tap_code(KC_0);
                tap_code(KC_NUBS);
                unregister_code(KC_LSFT);
            } else {
                // when keycode is released
            }
            break;
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_S):
            return TAPPING_TERM + 30;
        case LSFT_T(KC_L):
            return TAPPING_TERM + 30;
        default:
            return TAPPING_TERM;
    }
}


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(3), /*...*/  KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_LGUI, KC_A, LSFT_T(KC_S), LCTL_T(KC_D), LALT_T(KC_F), RALT_T(KC_G), TG(2), /*...*/  KC_NO, RALT_T(KC_H), LALT_T(KC_J), LCTL_T(KC_K), LSFT_T(KC_L), KC_SCLN, KC_QUOT,
        OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, /*...*/ KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        KC_HOME, KC_PGDN, KC_PGUP, KC_END, LT(3,KC_TAB), LT(4,KC_SPC), LT(1,KC_ESC), /*...*/ LT(2,KC_BSPC), KC_ENT, LT(4,KC_DEL),  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
    [1] = LAYOUT(
        KC_NO, KC_NO, KC_AT, KC_NO, KC_NO, KC_NO, KC_TRNS,                              /*...*/ KC_TRNS, KC_NO, KC_7, KC_8, KC_9, KC_MINS, KC_SLSH,
        KC_EQL, KC_NUBS, KC_LSFT, KC_LCTL, KC_LALT, KC_RALT, KC_TRNS,                   /*...*/ KC_TRNS, KC_NO, KC_4, KC_5, KC_6, LSFT(KC_NUHS), LSFT(KC_7),
        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,   /*...*/ KC_TRNS, KC_0, KC_1, KC_2, KC_3, LSFT(KC_0), KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_DEL,                    /*...*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(
        KC_VOLU, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, /*...*/ KC_NO, KC_NO, ARROW_EQUALS, RGB_M_P, RGB_M_R, RGB_M_B, RGB_TOG,
        KC_VOLD, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, /*...*/ KC_NO, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO,
        KC_MPLY, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_TRNS, /*...*/ KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_TRNS, KC_SPC, KC_TRNS, /*...*/ KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_SPI, RGB_HUD, RGB_HUI),
    [3] = LAYOUT(
        KC_ESC, KC_RBRC, LSFT(KC_RBRC), KC_HASH, RALT(KC_4), RALT(KC_RBRC), KC_TRNS, /*...*/ LCTL(KC_PPLS), KC_HOME, KC_PGDN, KC_UP, KC_PGUP, KC_END, KC_PSCR,
        MO(4), KC_NO, KC_LSFT, KC_LCTL, KC_LALT, LSFT(KC_MINS), KC_TRNS, /*...*/ LCTL(KC_PMNS), KC_INS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_RBRC,
        KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_APP, KC_TRNS, /*...*/ KC_TRNS, KC_ACL0, KC_ACL1, KC_BTN1, KC_BTN2, KC_ACL2, KC_ENT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*...*/ KC_TRNS, KC_BSPC, KC_ENT, KC_DEL, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R),
    [4] = LAYOUT(
        KC_GRV, KC_NUBS,    LSFT(KC_NUBS), RALT(KC_7), RALT(KC_0), LSFT(KC_1), KC_NO, /*...*/ KC_NO, RALT(KC_4), LSFT(KC_2), KC_NUHS, RSFT(KC_EQL), RALT(KC_EQL), LSFT(KC_RBRC),
        KC_NO,  KC_EQL,     LSFT(KC_7),    LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_NO, /*...*/ KC_NO, LSFT(KC_0), KC_NO, KC_NO, KC_NO, LSFT(KC_3), RALT(KC_RBRC),
        KC_NO,  LSFT(KC_5), LSFT(KC_6),    RALT(KC_8), RALT(KC_9), LSFT(KC_MINS), KC_NO, /*...*/ KC_NO, RALT(KC_2), KC_NO, KC_NO, KC_NO, KC_NO, KC_RBRC,
        KC_NO,  KC_NO,      KC_NO,         KC_NO,      KC_NO,      KC_NO,      KC_NO, /*...*/ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



