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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(//DEFAULT
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_L,    KC_U, KC_MINS,  KC_DOT,                         KC_F,    KC_W,    KC_R,    KC_Y,   KC_P,    KC_UP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_E,    KC_I,    KC_A,    KC_O, KC_LEFT,                         KC_K,    KC_T,    KC_N,    KC_S,    KC_H, KC_RGHT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG,    KC_Z,    KC_X,    KC_C,    KC_V, KC_COMM,                         KC_G,    KC_D,    KC_M,    KC_J,    KC_B, KC_DOWN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             GUI_T(KC_LANGUAGE_2), KC_LCTL,LT(1, KC_BSPC),LT(2, KC_ENT),LT(3, KC_SPC),SFT_T(KC_LANGUAGE_1)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(//NUMBERS
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        MO(4),    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                      S(KC_1),S(KC_COMM),S(KC_SCLN),S(KC_QUOT),KC_QUOT,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,                      S(KC_6),S(KC_MINS),KC_MINS,KC_SLSH, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,  KC_ENT,  KC_DEL, KC_BSPC,                   S(KC_SLSH),S(KC_DOT),S(KC_INT1),S(KC_5),S(KC_INT3),XXXXXXX,
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
      XXXXXXX, XXXXXXX, RGB_SAI, RGB_HUI, RGB_VAI, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, RGB_SAD, RGB_HUD, RGB_VAD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,RGB_RMOD, RGB_M_P, RGB_MOD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(//QWERTY
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    MO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             GUI_T(KC_LANGUAGE_2), KC_LCTL,LT(1, KC_BSPC),LT(2, KC_ENT),LT(3, KC_SPC),SFT_T(KC_LANGUAGE_1)
                                      //`--------------------------'  `--------------------------'

  )
};
