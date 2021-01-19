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

 KC_Q, KC_W, KC_E, KC_R, KC_T ,  		 KC_Y, KC_U, KC_I, KC_O, KC_P,\

 KC_A, KC_S, KC_D, KC_F, KC_G ,  		 KC_H, KC_J, KC_K, KC_L, KC_M,\

 KC_LSFTZ, KC_X, KC_C, 				KC_V, KC_B ,KC_N,\

        LOWER,   KC_RCTL , KC_SPC, RAISE \

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

