#include "macro2.h"
#define KC_SSHOT SGUI(KC_4)
#define KC_MISSION LCTL(KC_UP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
	KC_BRMD, 	KC__MUTE, KC_MEDIA_PLAY_PAUSE, KC_F11, 

	    KC_LGUI, KC_MNXT, RGB_MODE_FORWARD, RGB_TOG ),

	

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}




