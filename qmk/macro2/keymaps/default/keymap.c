#include "macro2.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
	KC_BRMD, 	KC__MUTE, KC_MEDIA_PLAY_PAUSE, KC_F11, 

	  KC_LGUI, KC_MNXT, KC_A, KC_B),

	

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}




