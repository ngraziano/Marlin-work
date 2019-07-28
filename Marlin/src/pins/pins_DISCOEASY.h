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



#include "pins_MKS_BASE_14.h"

// redfine for DISCOEASY
#undef BOARD_NAME
#define BOARD_NAME "Disco Easy"

// set the strange ofer of disco easy bord
#undef X_MIN_PIN
#define X_MIN_PIN 2
#undef Y_MAX_PIN
#define Y_MAX_PIN 3

#undef Z_MAX_PIN
#define Z_MAX_PIN 15

#undef Z_MIN_PROBE_PIN
#define Z_MIN_PROBE_PIN 15

#undef Z_MIN_PIN
#define Z_MIN_PIN 14

#undef ORIG_E0_AUTO_FAN_PIN
#define ORIG_E0_AUTO_FAN_PIN 7

#undef TEMP_BED_PIN
#define TEMP_BED_PIN       15   // Analog Input

static_assert(HEATER_BED_PIN == 8, "PIN 8");

// Pin not used
#undef HEATER_1_PIN
#undef X_MAX_PIN
#undef Y_MIN_PIN

#undef PS_ON_PIN
#define PS_ON_PIN        66


// TODO watch if necessary
#undef ORIG_E1_AUTO_FAN_PIN
#undef ORIG_E2_AUTO_FAN_PIN
#undef ORIG_E4_AUTO_FAN_PIN
