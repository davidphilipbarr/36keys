#include "macro1.h"
#define KC_SSHOT SGUI(KC_4)
#define KC_MISSION LCTL(KC_UP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
	KC_BRMD, 	KC__MUTE, KC_MEDIA_PLAY_PAUSE, 

	    KC_MISSION, KC_SSHOT, RGB_MODE_FORWARD),

	

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}



#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    else if (index == 0) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_SLCK);
        } else {
            tap_code(KC_PAUS);
        }
    }
}
#endif