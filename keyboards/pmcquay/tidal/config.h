// Copyright 2022 patrickmcquay (@patrickmcquay)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 1

#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { D1 } //2

#define MATRIX_COL_PINS { D0, D4, C6 } //3, 4, 5

#define PMW3360_CS_PIN B6 //10
#define POINTING_DEVICE_ROTATION_180

#define ENCODERS_PAD_B { D7 } //6
#define ENCODERS_PAD_A { E6 } //7
#define ENCODER_RESOLUTION 2

#define RGB_DI_PIN F4 //A3
#define RGBLED_NUM 25
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL

#define USB_POLLING_INTERVAL_MS 1

// Arduino	AVR
// TX0	    D3
// RX1	    D2
// 2	    D1
// 3	    D0
// 4	    D4
// 5	    C6
// 6	    D7
// 7	    E6
// 8	    B4
// 9	    B5
// 10	    B6
// 14	    B3      MISO
// 15	    B1      SCK
// 16	    B2      MOSI
// A0	    F7
// A1	    F6
// A2	    F5
// A3	    F4
// LED pin (left of crystal)	B0
// LED pin (right of crystal)	D5
