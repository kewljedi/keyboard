#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3173
#define PRODUCT_ID      0x0014
#define DEVICE_VER 		0x0001
#define MANUFACTURER    kewljedi
#define PRODUCT         kewlkeys14
#define DESCRIPTION     Small Keypad with encoders, underglow, sound, haptic feedback, RGB Keys



//##########################################################################################
//    KEY MATRIX

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4 }
#define MATRIX_COL_PINS { A5, A6, A7, E4, E5, E6, E7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200
//    KEY MATRIX
//##########################################################################################

//##########################################################################################
//    RGB MATRIX
// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D7
// The number of LEDs connected
#define DRIVER_LED_TOTAL 26 // this is all keys 4 encoders.
//    RGB MATRIX
//##########################################################################################

//##########################################################################################
//    ROTARY ENCODERS
#define ENCODERS_PAD_A { F0, F2, F4, F6 }
#define ENCODERS_PAD_B { F1, F3, F5, F7 }
//    ROTARY ENCODERS
//##########################################################################################

//##########################################################################################
//    UNDERGLOW
#define BACKLIGHT_PIN D6
#define RGBLED_NUM 14
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
//    UNDERGLOW
//##########################################################################################

//##########################################################################################
//    HAPTIC FEEDBACK
#define FB_ERM_LRA 1
#define FB_BRAKEFACTOR 3 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define FB_LOOPGAIN 1 /* For  Low:0, Medium:1, High:2, Very High:3 */

/* Please refer to your datasheet for the optimal setting for your specific motor. */
/* TODO: we need ot pick a motor and set these */
#define RATED_VOLTAGE 2
#define V_PEAK 2.8
#define V_RMS 2.0 
#define V_PEAK 2.1
#define F_LRA 205 /* resonance freq */
//    HAPTIC FEEDBACK
//#########################################################################################

//##########################################################################################
//    DIP SWITCHES
#define DIP_SWITCH_PINS { C0, C1, C2, C3, C4, C5, D2, C7 }
//    DIP SWITCHES
//##########################################################################################

//##########################################################################################
//    AUDIO
#define B5_AUDIO
#define C6_AUDIO
//    AUDIO
//##########################################################################################

//##########################################################################################
//    BLUETOOTH
#define AdafruitBleResetPin D4
#define AdafruitBleCSPin B4
#define AdafruitBleIRQPin D3
//    BLUETOOTH
//##########################################################################################

//##########################################################################################
//    OLED

//    OLED
//##########################################################################################
