/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
 *    `qmk chibios-confmigrate -i keyboards/phoenix/halconf.h -r platforms/chibios/common/configs/halconf.h`
 */

#pragma once

#define SERIAL_USB_BUFFERS_SIZE 256

#undef VAL_GPIOB_MODER
#define VAL_GPIOB_MODER (PIN_MODE_OUTPUT(8U) | PIN_MODE_OUTPUT(5U) | PIN_MODE_OUTPUT(6U))

#undef VAL_GPIOB_ODR
#define VAL_GPIOB_ODR (PIN_ODR_LOW(8U) | PIN_ODR_LOW(5U) | PIN_ODR_LOW(6U))

#include_next <halconf.h>

