#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

enum combos {
  HJ_CTL,
  KL_ALT,
  JK_GUI
};

const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [HJ_CTL] = COMBO(hj_combo, KC_RCTL),
  [KL_ALT] = COMBO(kl_combo, KC_LALT),
  [JK_GUI] = COMBO(jk_combo, KC_RGUI)
};

#define KC_XXXXX KC_NO
#define KC_RST   RESET
#define KC_CTLTB CTL_T(KC_TAB)
#define KC_GUIEI GUI_T(KC_LANG2)
#define KC_ALTKN ALT_T(KC_LANG1)
#define KC_LSFTZ LSFT_T(KC_Z)
#define KC_ASPACE LALT_T(KC_SPC)
#define KC_SAVE LCTL(KC_S)
#define KC_DRALT RALT(KC_BSPC)
#define KC_SPALT RALT_T(KC_SPC)
#define KC_CTH LCTL_T(KC_H)
#define KC_ALJ LALT_T(KC_J)
#define KC_GUL RGUI_T(KC_L)
#define KC_CTEQL LCTL_T(KC_EQL)
#define KC_ALLCBR LALT_T(KC_LCBR)
#define KC_GURCBR RGUI_T(KC_RCBR)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
[_QWERTY] = LAYOUT( \
//,-----------------------------------------.    ,-----------------------------------------.
 KC_Q, KC_W, KC_E, KC_R, KC_T ,  		 KC_Y, KC_U, KC_I, KC_O, KC_P,\
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_A, KC_S, KC_D, KC_F, KC_G ,  		 KC_H, KC_J, KC_K, KC_L,  KC_QUOT,\
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_LSFTZ, KC_X, KC_C, KC_V, KC_B , 			 KC_N, KC_M,  KC_COMM,   KC_DOT,  KC_SFTENT, \
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
        LOWER,   KC_RCTL , KC_SPC, RAISE \
        //`--------------------'  `--------------------'
),


[_RAISE] = LAYOUT( \
//,-----------------------------------------.    ,-----------------------------------------.
 KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,		KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, \
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_HASH, KC_QUES, KC_SLSH, KC_COLN, KC_SCLN,	KC_MINS, KC_CTEQL, KC_LCBR, KC_RCBR, KC_BSPC, \
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_LSFT,  KC_PLUS,  KC_LBRC,  KC_RBRC,  KC_BSLS,	KC_UNDS,  KC_LEFT, KC_DOWN, KC_UP,KC_RGHT,  \
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
         			LOWER,  KC_RGUI,	KC_LGUI, RAISE \
),


[_LOWER] = LAYOUT( \
//,-----------------------------------------.    ,-----------------------------------------.
 KC_1 , KC_2, KC_3, KC_4, KC_5 ,  			 	KC_6, KC_7, KC_8, KC_9, KC_0, \
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_TAB,  KC_SAVE,  KC_DQUO  ,  KC_PIPE , KC_HASH , 		KC_MINS,   KC_EQL,  KC_LCBR,  KC_RCBR,  KC_DEL,\
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_GESC, KC_TILD,   KC_NUBS,   KC_NUHS,  KC_NONUS_HASH,  	KC_MINS, KC_GRV, KC_LBRC, KC_RBRC, KC_BSPC,\
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
         				LOWER,  KC_RGUI, 	KC_LGUI, KC_LALT \

),

[_ADJUST] =  LAYOUT( \
//,-----------------------------------------.    ,-----------------------------------------.
 KC_F1 , KC_F2 , KC_F3 , KC_F4,   KC_F5,   	KC_F6 , KC_F7 , KC_F8,  KC_F9, KC_F10, \
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_XXXXX,  KC_XXXXX,  KC_XXXXX, KC_XXXXX, KC_XXXXX ,   KC_XXXXX,KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,\
//|------+------+------+------+------+------|    |------+------+------+------+------+------|
 KC_XXXXX, KC_XXXXX,  KC_XXXXX, KC_XXXXX, KC_CAPSLOCK ,  KC_XXXXX, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_XXXXX,\
//|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
          				LOWER,  KC_RGUI, KC_ALTKN, RAISE  \
 ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
  if (record->event.pressed) {
    // persistant_default_layer_set(1UL<<_QWERTY);
    set_single_persistent_default_layer(_QWERTY);
  }
  return false;
  break;
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

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

