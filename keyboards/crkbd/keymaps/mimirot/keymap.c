/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

//macros
enum custom_keycodes{
    KANA_NN = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch(keycode){
        case KANA_NN:
            if(record->event.pressed){
                SEND_STRING("nn");
            }else{
                //when keycode KANA_NN is released
            }
            break;
        }
    return true;
};

//combos
enum combos{
    PLCTL_F,
    TLCTL_D,
    SLCTL_Z,
    KLCTL_G,
    RK_M,
    HLCTL_B,
    NLCTL_COMM,
    HN_W,
    HNLCTL_V,
    BSPCLCTL_X,
    ENTLCTL_DOT,
    NNLCTL_MINS,
    MINSDOT_F1,
    OLEFT_F2,
    VCOMM_F3,
    UMINS_F4,
    AO_F5,
    CV_F6,
    LU_F7,
    IA_F8,
    XC_F9,
    QL_F10,
//    EI_F11,
    ZX_F12
};

const uint16_t PROGMEM plctl_combo[] = {KC_P, KC_LCTL, COMBO_END};
const uint16_t PROGMEM tlctl_combo[] = {KC_T, KC_LCTL, COMBO_END};
const uint16_t PROGMEM slctl_combo[] = {KC_S, KC_LCTL, COMBO_END};
const uint16_t PROGMEM klctl_combo[] = {KC_K, KC_LCTL, COMBO_END};
const uint16_t PROGMEM rk_combo[] = {KC_R, KC_K, COMBO_END};
const uint16_t PROGMEM hlctl_combo[] = {KC_H, KC_LCTL, COMBO_END};
const uint16_t PROGMEM nlctl_combo[] = {KC_N, KC_LCTL, COMBO_END};
const uint16_t PROGMEM hn_combo[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM hnlctl_combo[] = {KC_H, KC_N, KC_LCTL, COMBO_END};
const uint16_t PROGMEM bspclctl_combo[] = {KC_BSPC, KC_LCTL, COMBO_END};
const uint16_t PROGMEM entlctl_combo[] = {KC_ENT, KC_LCTL, COMBO_END};
const uint16_t PROGMEM nnlctl_combo[] = {KANA_NN, KC_LCTL, COMBO_END};
const uint16_t PROGMEM minsdot_combo[] = {KC_MINS, KC_DOT, COMBO_END};
const uint16_t PROGMEM oleft_combo[] = {KC_O, KC_LEFT, COMBO_END};
const uint16_t PROGMEM vcomm_combo[] = {KC_V, KC_COMM, COMBO_END};
const uint16_t PROGMEM umins_combo[] = {KC_U, KC_MINS, COMBO_END};
const uint16_t PROGMEM ao_combo[] = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM ia_combo[] = {KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM ql_combo[] = {KC_Q, KC_L, COMBO_END};
//const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};

combo_t key_combos[] = {
    [PLCTL_F] = COMBO(plctl_combo, KC_F),
    [TLCTL_D] = COMBO(tlctl_combo, KC_D),
    [SLCTL_Z] = COMBO(slctl_combo, KC_Z),
    [KLCTL_G] = COMBO(klctl_combo, KC_G),
    [RK_M] = COMBO(rk_combo, KC_M),
    [HLCTL_B] = COMBO(hlctl_combo, KC_B),
    [NLCTL_COMM] = COMBO(nlctl_combo, KC_COMM),
    [HN_W] = COMBO(hn_combo, KC_W),
    [HNLCTL_V] = COMBO(hnlctl_combo, KC_V),
    [BSPCLCTL_X] = COMBO(bspclctl_combo, KC_X),
    [ENTLCTL_DOT] = COMBO(entlctl_combo, KC_DOT),
    [NNLCTL_MINS] = COMBO(nnlctl_combo, KC_MINS),
    [MINSDOT_F1] = COMBO(minsdot_combo, KC_F1),
    [OLEFT_F2] = COMBO(oleft_combo, KC_F2),
    [VCOMM_F3] = COMBO(vcomm_combo, KC_F3),
    [UMINS_F4] = COMBO(umins_combo, KC_F4),
    [AO_F5] = COMBO(ao_combo, KC_F5),
    [CV_F6] = COMBO(cv_combo, KC_F6),
    [LU_F7] = COMBO(lu_combo, KC_F7),
    [IA_F8] = COMBO(ia_combo, KC_F8),
    [XC_F9] = COMBO(xc_combo, KC_F9),
    [QL_F10] = COMBO(ql_combo, KC_F10),
//    [EI_F11] = COMBO(ei_combo, KC_F11),
    [ZX_F12] = COMBO(zx_combo, KC_F12),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(//DEFAULT
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_L,    KC_U, KC_MINS,  KC_DOT,                         KC_F,    KC_W,    KC_R,    KC_Y,   KC_P,    KC_UP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_E,    KC_I,    KC_A,    KC_O, KC_LEFT,                         KC_K,    KC_T,    KC_N,    KC_S,    KC_H, KC_RGHT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LT(7, RGB_TOG),   KC_Z,    KC_X,    KC_C,    KC_V, KC_COMM,                         KC_G,    KC_D,    KC_M,    KC_J,    KC_B, KC_DOWN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             GUI_T(KC_LANGUAGE_2), KC_LCTL,LT(1, KC_BSPC),LT(2, KC_ENT),LT(3, KC_SPC),SFT_T(KC_LANGUAGE_1)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(//NUMBERS
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                      S(KC_1),S(KC_COMM),S(KC_SCLN),S(KC_QUOT),KC_QUOT,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        TG(6),    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,                      S(KC_6),S(KC_MINS),KC_MINS,KC_SLSH, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        TG(5), KC_HOME,  KC_END,  KC_ENT,  KC_DEL, KC_BSPC,                   S(KC_SLSH),S(KC_DOT),S(KC_INT1),S(KC_5),S(KC_INT3),XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(//FIGURES AND COMMANDS
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_EQL, KC_RBRC, S(KC_2), KC_NUHS, KC_LBRC,                      C(KC_P), KC_VOLD, KC_MUTE, KC_VOLU, C(KC_L), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,S(KC_EQL),S(KC_8), S(KC_7), S(KC_9), KC_INT3,                      KC_PSCR, KC_WBAK, KC_WREF, KC_WFWD, C(KC_C), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, S(KC_3),S(KC_RBRC),S(KC_LBRC),S(KC_NUHS),S(KC_4),              SGUI(KC_S), KC_BRID,   KC_F4, KC_BRIU, C(KC_V), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(//RGB SETTINGS
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, RGB_SAI, RGB_HUI, RGB_VAI, XXXXXXX,                      XXXXXXX, KC_WH_U, KC_MS_U, XXXXXXX, XXXXXXX, KC_ACL2,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_BTN2, RGB_SAD, RGB_HUD, RGB_VAD, KC_BTN1,                      KC_WH_L, KC_MS_L, KC_BTN1, KC_MS_R, KC_WH_R, KC_ACL1,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,RGB_RMOD, RGB_M_P, RGB_MOD, XXXXXXX,                      XXXXXXX, KC_WH_D, KC_MS_D, XXXXXXX, XXXXXXX, KC_ACL0,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

/*
    [4] = LAYOUT_split_3x6_3(//QWERTY
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    TO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'

  ),
*/
  
    [5] = LAYOUT_split_3x6_3(//Layer_template
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'

  ),
    
    [6] = LAYOUT_split_3x6_3(//KATANA
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    KC_P,    KC_T,    KC_S, XXXXXXX,                        KC_UP, KC_BSPC,    KC_I,    KC_E, XXXXXXX,   TO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,    KC_R,    KC_K, KC_LEFT,                      KC_RGHT,    KC_A,    KC_U,    KC_Y, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,    KC_H,    KC_N, KC_DOWN,                       KC_ENT,    KC_O, KANA_NN, KC_MINS, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'

  ),
        
    [7] = LAYOUT_split_3x6_3(//CADsuper
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_PGUP, XXXXXXX,    KC_P,  KC_INS, KC_PAUS, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PGDN,    KC_H,    KC_Y,    KC_N,    KC_T,    KC_K,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_G,    KC_S,    KC_M,    KC_D,    KC_J,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'

  ),
 
};


