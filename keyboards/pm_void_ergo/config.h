// Copyright 2021 Patrick McQuay (@Patrick McQuay)
// SPDX-License-Identifier: GPL-2.0-or-later
// this is a conglomeration of the config files for Victor Lucachis void ergo s.

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055
#define PRODUCT_ID 0x3535
#define DEVICE_VER 0x0001
#define MANUFACTURER Victor Lucachi
#define DESCRIPTION A handwired split keyboard inspired by the Corne

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/* Encoder pins */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F6 }

#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F6 }

#define ENCODER_DIRECTION_FLIP

/* Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN. */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1  // or D1, D2, D3, E6
#define SELECT_SOFT_SERIAL_SPEED 0
#define SPLIT_USB_DETECT