// Copyright 2021 Patrick McQuay (@Patrick McQuay)
// SPDX-License-Identifier: GPL-2.0-or-later
// this is a conglomeration of the config files for Victor Lucachis void ergo s.

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055
#define PRODUCT_ID 0x3535
#define DEVICE_VER 0x0001
#define MANUFACTURER Patrick McQuay
#define DESCRIPTION A handwired split keyboard inspired by Victor Lucachis void ergo.

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/* Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN. */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define SELECT_SOFT_SERIAL_SPEED 0
#define SPLIT_USB_DETECT

#define RGB_DI_PIN F4 //A3
#define RGBLED_NUM 25
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL

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
