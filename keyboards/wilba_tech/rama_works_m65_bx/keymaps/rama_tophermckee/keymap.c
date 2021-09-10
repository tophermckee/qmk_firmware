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
    M_ARSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
	[0] = LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_DEL,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_VOLU,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_VOLD,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,   MO(1),
		KC_LCTRL,KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_RALT,          KC_LEFT, KC_DOWN, KC_RGHT),

	// Fn1 Layer
	[1] = LAYOUT_all(
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  BR_DEC,  BR_INC, M_ARSE,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_TRNS, M_LIVGREY,KC_TRNS,KC_TRNS, KC_TRNS, M_GPUSH, KC_TRNS, KC_TRNS, KC_TRNS,          BR_INC,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M_GREEN, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  KC_TRNS, KC_TRNS, M_PIN  ,                   BR_DEC,
		KC_TRNS, KC_TRNS, KC_TRNS, M_GCMMT, KC_TRNS, M_LIVBLUE,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,
		KC_PSCR, KC_SLCK, KC_TRNS,                            KC_TRNS,                                     KC_MUTE,            KC_MPRV, KC_MPLY, KC_MNXT),
/*
	// Fn2 Layer
	[2] = LAYOUT_all(
		KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                                     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),
*/
	// Fn3 Layer
/*
	[3] = LAYOUT_all(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                                     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),
*/
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
                SEND_STRING("git push origin master" SS_TAP(X_ENT));
            } else {
            }
            break;
        case M_ARSE:
            if (record->event.pressed) {
                SEND_STRING("Arsenal1423!" SS_TAP(X_ENT));
            } else {
            }
            break;
    }
  return true;
}
