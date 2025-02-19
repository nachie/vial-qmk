/*
Copyright 2024 Nachie

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

#define RP2040_FLASH_GENERIC_03H

#define SPLIT_HAND_PIN GP3
#define USB_VBUS_PIN GP2

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* Oled config */
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23
#define OLED_TIMEOUT 60000       // Turns off the OLED screen after x ms of screen update inactivity. Helps reduce OLED Burn-in. Set to 0 to disable.
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 13
#define OLED_BRIGHTNESS 50       // The default brightness level of the OLED, from 0 to 255.
#define OLED_UPDATE_INTERVAL 16  // limits in milliseconds how frequently the OLED updates. Calculation 1000/fps (increases keyboard responsiveness)
#endif

#define VIA_CUSTOM_LIGHTING_ENABLE
