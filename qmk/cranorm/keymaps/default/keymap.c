#include QMK_KEYBOARD_H

enum cranorm_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST
};


#define KC_XXXXX KC_NO
#define KC_RST   RESET
#define KC_CTLTB CTL_T(KC_TAB)
#define KC_GUIEI GUI_T(KC_LANG2)
#define KC_ALTKN ALT_T(KC_LANG1)
#define KC_LSFTZ LSFT_T(KC_Z)
#define KC_ASPACE LALT_T(KC_SPC)
#define KC_SAVE LCMD(KC_S)
#define KC_DRALT RALT(KC_BSPC)|



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT( \
//,-----------------------------------------.                ,-----------------------------------------.
     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                     		 KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,\
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                     		 KC_H,     KC_J,     KC_K,     KC_L,  KC_QUOT,\
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_LSFTZ,     KC_X,     KC_C,     KC_V,     KC_B,                			 KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SFTENT, \
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                KC_RGUI, KC_LOWER, KC_LCTL,     KC_SPC, KC_RAISE, KC_LALT \
                            //`--------------------'  `--------------------'
),

[_LOWER] = LAYOUT( \
//,-----------------------------------------.                ,-----------------------------------------.
     KC_1,    KC_2,     KC_3,     KC_4,     KC_5,                     			 KC_6,     KC_7,     KC_8,     KC_9,     KC_0, \
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_TAB,  KC_SAVE,  KC_DQUO  ,  KC_PIPE,    KC_HASH,    					KC_MINS,   KC_EQL,  KC_LCBR,  KC_RCBR,  KC_DEL,\
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_GESC, KC_TILD,   KC_NUBS,   KC_NUHS,  KC_NONUS_BSLASH,          		KC_MINS, KC_GRV, KC_LBRC, KC_RBRC, KC_BSPC,\
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                KC_RGUI, KC_LOWER,  KC_LGUI,      KC_SPC, KC_RAISE, KC_LALT \
),

[_RAISE] = LAYOUT( \
//,-----------------------------------------.                ,-----------------------------------------.
     KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,  KC_PERC,                   		KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN, \
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_HASH, KC_QUES, KC_SLSH, KC_COLN, KC_SCLN,                  			KC_MINS,   KC_EQL,  KC_LCBR,  KC_RCBR,  KC_BSPC, \
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_LSFT,  KC_PLUS,  KC_LBRC,  KC_RBRC,  KC_BSLS,                   		KC_UNDS,  KC_LEFT, KC_DOWN, KC_UP,KC_RGHT,  \
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                KC_GUIEI, KC_LOWER,   KC_SPC,      KC_ENT, KC_RAISE, KC_ALTKN \
                            //`-----------------|---'  `--------------------'
),

  [_ADJUST] = LAYOUT( \
//,-----------------------------------------.                ,-----------------------------------------.
     KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,   			KC_F6,    KC_F7,    KC_F8,  KC_F9, KC_F10, \
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_XXXXX,  KC_XXXXX,  KC_XXXXX, KC_XXXXX, KC_XXXXX,                  KC_XXXXX,KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,\
//|------+------+------+------+------+------|                |------+------+------+------+------+------|
     KC_XXXXX, KC_XXXXX,  KC_XXXXX, KC_XXXXX, KC_CAPSLOCK,                 KC_XXXXX, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_XXXXX,\
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                KC_GUIEI, KC_LOWER,   KC_SPC,      KC_ENT, KC_RAISE, KC_ALTKN \
                            //`--------------------'  `--------------------'
  )
};

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode  
	
	oled_write_P(PSTR("Crab Keyboard\n"), false);
	
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Layer: Default\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Layer: Raise\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Layer: Lower\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Layer: Adjust\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
  

    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(PSTR("[CapsLock]"), led_usb_state.caps_lock);  
	oled_write_P(PSTR("  "), false);
	
    oled_write_P(PSTR("[NumLock]"), led_usb_state.num_lock);  
   
}



oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_0;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
      
       
    }
    return true;
}
