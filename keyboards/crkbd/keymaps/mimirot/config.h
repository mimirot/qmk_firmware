/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
//#define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#define LAYER_STATE_8BIT

/*
#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
*/

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    //#define RGB_MATRIX_KEYRELEASES
    //#define RGB_MATRIX_SLEEP
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    #define ENABLE_RGB_MATRIX_ALPHAS_MODS
    //#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    //#define ENABLE_RGB_MATRIX_RAINDROPS
    //#define ENABLE_RGB_MATRIX_PIXEL_FLOW

// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    //#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MUITIWIDE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MUITICROSS
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    //#define ENABLE_RGB_MATRIX_SPLASH
    //#define ENABLE_RGB_MATRIX_MULTISPLASH
    //#define ENABLE_RGB_MATRIX_SOLID_SPLASH
    //#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#ifdef MOUSEKEY_ENABLE
    #define MOUSEKEY_DELAY 20 //default 10
    #define MOUSEKEY_INTERVAL 20 //default
    #define MOUSEKEY_MOVE_DELTA 8 //default
    #define MOUSEKEY_MAX_SPEED 5 //default 10
    #define MOUSEKEY_TIME_TO_MAX 60 //default 30
    #define MOUSEKEY_WHEEL_DELAY 20 //default 10
    #define MOUSEKEY_WHEEL_INTERVAL 80 //default
    #define MOUSEKEY_WHEEL_DELTA 1 //default
    #define MOUSEKEY_WHEEL_MAX_SPEED 5 //default 8
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 80 //default 40
#endif
