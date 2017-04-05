/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * DiscoEasy (MKS_BASE with special pinout)
 */



#include "pins_MKS_BASE.h"

// redfine for DISCOEASY
#undef BOARD_NAME
#define BOARD_NAME "Disco Easy"
#undef HEATER_1_PIN
#define HEATER_1_PIN -1
#undef PRINTER_HEAD_EASY_CONSTANT_FAN_PIN
#define PRINTER_HEAD_EASY_CONSTANT_FAN_PIN 7
#undef X_MAX_PIN
#define X_MAX_PIN -1
#undef X_MIN_PIN
#define X_MIN_PIN 2
#undef Y_MAX_PIN
#define Y_MAX_PIN 3
#undef Y_MIN_MIN
#define Y_MIN_MIN -1
#undef Z_MAX_PIN
#define Z_MAX_PIN -1
#undef Z_MIN_PIN
#define Z_MIN_PIN 15

