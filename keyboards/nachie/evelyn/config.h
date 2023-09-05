/*
Copyright 2021 KapCave

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

//#include "config_common.h"
#define RP2040_FLASH_GENERIC_03H

/* USB Device descriptor parameter
#define VENDOR_ID       0x4B43
#define PRODUCT_ID      0x5359
#define DEVICE_VER      0x0001
#define MANUFACTURER    KapCave
#define PRODUCT         Syndrome
*/

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 6

#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_ACTION

/* key matrix pins */
//#define MATRIX_ROW_PINS { GP25, GP24, GP16, GP7, GP17, GP18, GP19, GP4 }
//#define MATRIX_COL_PINS { GP28, GP21, GP20, GP3, GP2}
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW

/*
#define RGB_DI_PIN GP29
#define DRIVER_LED_TOTAL 16
#define RGBLED_NUM 16
#define RGBLIGHT_LIMIT_VAL 173
#define RGB_MATRIX_LED_COUNT 16
*/


//#define ENCODERS_PAD_A { GP22, GP26, GP0 }
//#define ENCODERS_PAD_B { GP23, GP27, GP1 }

//#define ENCODER_RESOLUTION 2

/* Set 0 if debouncing isn't needed */
//#define DEBOUNCE 5

/* Oled config */
#define OLED_DISPLAY_ADDRESS 0x3C
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11
/* Oled config */
#define OLED_TIMEOUT 60000       // Turns off the OLED screen after x ms of keyboard inactivity. Helps reduce OLED Burn-in. Set to 0 to disable.
#define OLED_BRIGHTNESS 50       // The default brightness level of the OLED, from 0 to 255.
#define OLED_UPDATE_INTERVAL 16  // limits in milliseconds how frequently the OLED updates. Calculation 1000/fps (increases keyboard responsiveness)


#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES

#define VIA_CUSTOM_LIGHTING_ENABLE
