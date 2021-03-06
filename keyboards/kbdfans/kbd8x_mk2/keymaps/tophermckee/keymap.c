/* Copyright 2019 Ryota Goto
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

enum custom_keycodes {
    M_LIVBLUE = SAFE_RANGE,
    M_LIVGREY,
    M_GREEN,
    M_SSW,
    M_PIN,
    M_GHUB,
    M_GCMMT,
    M_GPUSH,
    M_ARSE,
    M_ENRL,
    M_ENRP,
    M_COLP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    
	KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,        KC_F5,   KC_F6,   KC_F7,   KC_F8,       KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SLCK, KC_LGUI, \
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,           KC_VOLD,  KC_MUTE, KC_VOLU, \
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,          KC_MPRV,  KC_MPLY,  KC_MNXT, \
	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,                                      \
	KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(1),                    KC_UP,            \
	KC_LCTL, KC_LGUI, KC_LALT,                           KC_SPC,                                       KC_RALT, KC_RALT, KC_APP,  KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT  \
  ),
    [1] = LAYOUT( /* FN */
        M_ARSE,           RGB_TOG,   KC_TRNS,   KC_TRNS,   KC_TRNS,        M_COLP,   M_ENRL,   M_ENRP,   KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, \
        RESET  , KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    RESET,    KC_TRNS,    M_LIVGREY,    KC_TRNS,    KC_TRNS,    KC_TRNS,    M_GPUSH,    KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS, \
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    M_GREEN,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,                   M_PIN,                                      \
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    M_GCMMT,    KC_TRNS,    M_LIVBLUE,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,          M_GHUB, KC_TRNS,                    KC_TRNS,            \
        KC_TRNS, KC_TRNS, KC_TRNS,                           M_SSW,                                       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS  \
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case M_GREEN:
            if (record->event.pressed) {
                SEND_STRING("#3BB54A");
            } else {
            }
            break;

        case M_LIVBLUE:
            if (record->event.pressed) {
                SEND_STRING("#083452");
            } else {
            }
            break;
            
        case M_LIVGREY:
            if (record->event.pressed) {
                SEND_STRING("#586775");
            } else {
            }
            break;

        case M_PIN:
            if (record->event.pressed) {
                SEND_STRING("1423" SS_TAP(X_ENT));
            } else {
            }
            break;

        case M_GHUB:
            if (record->event.pressed) {
                SEND_STRING("fo*gren2dauk6DEEG" SS_TAP(X_ENT));
            } else {
            }
            break;

        case M_SSW:
            if (record->event.pressed) {
                tap_code16(C(A(KC_F11)));
            } else {
            }
            break;
        
        case M_GCMMT:
            if (record->event.pressed) {
                SEND_STRING("git commit -m \"\" -a" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
            } else {
            }
            break;

        case M_GPUSH:
            if (record->event.pressed) {
                SEND_STRING("git push origin main" SS_TAP(X_ENT));
            } else {
            }
            break;
        case M_ARSE:
            if (record->event.pressed) {
                SEND_STRING("Arsenal1423!" SS_TAP(X_ENT));
            } else {
            }
            break;
        case M_ENRL:
            if (record->event.pressed) {
                SEND_STRING("livingstonstudent@livingstoncollegiate.org"  SS_TAP(X_ENT));
            } else {
            }
            break;
        case M_ENRP:
            if (record->event.pressed) {
                SEND_STRING("wolves16"  SS_TAP(X_ENT));
            } else {
            }
            break;
        case M_COLP:
            if (record->event.pressed) {
                SEND_STRING("collegiateacademies"  SS_TAP(X_ENT));
            } else {
            }
            break;
    }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}