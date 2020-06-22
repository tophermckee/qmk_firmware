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

// Macros


#include QMK_KEYBOARD_H

enum custom_keycodes {
    M_LIVBLUE = SAFE_RANGE,
    M_LIVGREY,
    M_GREEN,
    M_SSW,
	M_CHROME,
	M_PIN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all( /* Base */
	KC_ESC,  	KC_1,    	KC_2,    	KC_3,    	KC_4,    	KC_5,    	KC_6,    	KC_7,    	KC_8,    	KC_9,    	KC_0,    	KC_MINS, 	KC_EQL,  	KC_BSPC, 	KC_DEL,  	KC_DEL,
	KC_TAB,  	KC_Q,    	KC_W,    	KC_E,    	KC_R,    	KC_T,    	KC_Y,    	KC_U,    	KC_I,    	KC_O,    	KC_P,    	KC_LBRC, 	KC_RBRC,    KC_BSLS, 				KC_AUDIO_VOL_UP,
	KC_CAPS, 	KC_A,    	KC_S,    	KC_D,    	KC_F,    	KC_G,    	KC_H,    	KC_J,    	KC_K,    	KC_L,    	KC_SCLN, 	KC_QUOT,    KC_ENT,           					KC_AUDIO_VOL_DOWN,
	KC_LSFT, 	KC_BSLS, 	KC_Z,    	KC_X,    	KC_C,    	KC_V,    	KC_B,    	KC_N,    	KC_M,    	KC_COMM, 	KC_DOT,  	KC_SLSH, 	KC_RSFT,    KC_UP,   				MO(1),
	KC_LCTL, 	KC_LGUI, 	KC_LALT,          		KC_SPC,           		KC_SPC,           		KC_SPC,           		KC_RALT, 	KC_RCTL,    KC_LEFT,	KC_DOWN, 				KC_RGHT
  ),
  [1] = LAYOUT_all( /* FN */
	KC_GRV,		KC_F1,		KC_F2,   	KC_F3,   	KC_F4,   	KC_F5,   	KC_F6,   	KC_F7,   	KC_F8,   	KC_F9,  	KC_F10,  	KC_F11,  	KC_F12,  	_______, 	_______, 	_______,
	RESET, 		_______,	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,    _______, 				_______,
	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,   	M_PIN,          					_______,
	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,    KC_MUTE,				_______,
	KC_MPRV, 	KC_MPLY, 	KC_MNXT,				_______,				M_SSW,					_______,    			_______, 	M_CHROME,   M_GREEN, 	M_LIVBLUE, 				M_LIVGREY
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case M_GREEN:
        if (record->event.pressed) {
            // when keycode M_GREEN is pressed
            SEND_STRING("#3BB54A");
        } else {
            // when keycode M_GREEN is released
        }
        break;

    case M_LIVBLUE:
        if (record->event.pressed) {
            // when keycode M_LIVBLUE is pressed
            SEND_STRING("#083452");
        } else {
            // when keycode M_LIVBLUE is released
        }
        break;

	case M_CHROME:
        if (record->event.pressed) {
            // when keycode M_CHROME is pressed
            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(100) "chrome"SS_TAP(X_ENT) SS_DELAY(100));
        } else {
            // when keycode M_CHROME is released
        }
        break;

	case M_LIVGREY:
        if (record->event.pressed) {
            // when keycode M_LIVGREY is pressed
            SEND_STRING("#586775");
        } else {
            // when keycode M_LIVGREY is released
        }
        break;
	
	case M_PIN:
        if (record->event.pressed) {
            // when keycode M_PIN is pressed
            SEND_STRING("1423" SS_TAP(X_ENT));
        } else {
            // when keycode M_PIN is released
        }
        break;

	case M_SSW:
        if (record->event.pressed) {
            // when keycode M_LIVGREY is pressed
            tap_code16(C(A(KC_F11)));
        } else {
            // when keycode M_LIVGREY is released
        }
        break;
    }
    return true;
};