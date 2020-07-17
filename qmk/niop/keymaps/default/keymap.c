#include "niop.h"

enum combos {
  AN_Q,
  TN_B,
  SE_D,
  TO_G,
  AT_F,
  NP_M,
  SI_K,
  SN_J,
  IO_L,
  AS_W,
  ET_R,
  AI_Z,
  NI_H,
  ST_C,
  NO_U,
  AE_X,
  TI_V,
  EN_Y,
  ASET_TAB,  
  NOIP_ENT,
  TP_BS,
  IP_EX,
  EP_COMM

};

const uint16_t PROGMEM an_combo[] = {KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM tn_combo[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM se_combo[] = {KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM to_combo[] = {KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM at_combo[] = {KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM np_combo[] = {KC_N, KC_P, COMBO_END};
const uint16_t PROGMEM si_combo[] = {KC_S, KC_I, COMBO_END};
const uint16_t PROGMEM sn_combo[] = {KC_S, KC_N, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM et_combo[] = {KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM ai_combo[] = {KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM ni_combo[] = {KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM st_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM no_combo[] = {KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM ae_combo[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM ti_combo[] = {KC_T, KC_I, COMBO_END};
const uint16_t PROGMEM en_combo[] = {KC_E, KC_N, COMBO_END};
//PUNKS
const uint16_t PROGMEM tp_combo[] = {KC_T, KC_P, COMBO_END};
const uint16_t PROGMEM aset_combo[] = {KC_A, KC_S, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM noip_combo[] = {KC_N, KC_O, KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM ip_combo[] = {KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM ep_combo[] = {KC_E, KC_P, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  [AN_Q] = COMBO(an_combo, KC_Q),
  [TN_B] = COMBO(tn_combo, KC_B),
  [SE_D] = COMBO(se_combo, KC_D),
  [TO_G] = COMBO(to_combo, KC_G),
  [AT_F] = COMBO(at_combo, KC_F),
  [NP_M] = COMBO(np_combo, KC_M),
  [SI_K] = COMBO(si_combo, KC_K),
  [SN_J] = COMBO(sn_combo, KC_J),
  [IO_L] = COMBO(io_combo, KC_L),
  [AS_W] = COMBO(as_combo, KC_W),
  [ET_R] = COMBO(et_combo, KC_R),
  [AI_Z] = COMBO(ai_combo, KC_Z),
  [NI_H] = COMBO(ni_combo, KC_H),
  [ST_C] = COMBO(st_combo, KC_C),
  [NO_U] = COMBO(no_combo, KC_U),
  [AE_X] = COMBO(ae_combo, KC_X),
  [TI_V] = COMBO(ti_combo, KC_V),
  [EN_Y] = COMBO(en_combo, KC_Y),
//PUNKS
  [TP_BS] = COMBO(tp_combo, KC_BSPC),
  [ASET_TAB ] = COMBO(aset_combo, KC_TAB),
  [NOIP_ENT ] = COMBO(noip_combo, KC_ENT),
  [IP_EX ] = COMBO(ip_combo, KC_EXLM),
  [EP_COMM ] = COMBO(ep_combo, KC_COMM)
	  
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
        KC_A,     KC_S,     KC_E,     KC_T,    KC_N,     KC_I,     KC_O,     KC_P,  KC_LSFT,    KC_SPC ),

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

