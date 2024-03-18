/* Copyright 2022 DOIO
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
 * Copyright 2022 Kolloom <https://github.com/thompson-vii>
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

#include "quantum.h"
#include "../util.h"

#define ANIM_SIZE 512  // number of bytes in array, minimize for adequate firmware size, max is 1024

void render_layer_status(void) {
    static const char PROGMEM layer_status[][ANIM_SIZE] = {
{
	0x7c, 0x3e, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x7c, 0x3e, 
	0x3e, 0x7c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x04, 0x3e, 0x7c, 
	0x1f, 0xf8, 0xe0, 0x02, 0x00, 0x80, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x03, 0x1f, 0xf8, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x00, 0x30, 0x00, 0x30, 0x01, 0x01, 0x80, 0x30, 0x01, 0x8f, 0x30, 
	0x0d, 0xe3, 0x00, 0x18, 0x02, 0x00, 0x40, 0x18, 0x0e, 0x00, 0x00, 0x40, 0x10, 0x00, 0xc7, 0xb0, 
	0x05, 0xc6, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x20, 0x08, 0x00, 0x63, 0xa0, 
	0x07, 0x8c, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x21, 0xe0, 
	0x07, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xe0, 
	0x0f, 0x10, 0x6f, 0xfc, 0x00, 0x7e, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x07, 0xf0, 0x00, 0x00, 0xf0, 
	0x0e, 0x10, 0x4f, 0xff, 0x01, 0xff, 0x8f, 0xff, 0x8f, 0xfe, 0x1f, 0x83, 0xf0, 0x08, 0x00, 0x70, 
	0x1e, 0x00, 0x87, 0xff, 0x83, 0xff, 0xc7, 0xff, 0xcf, 0xfe, 0x1f, 0x83, 0xf0, 0x04, 0x00, 0x78, 
	0x14, 0x00, 0x87, 0xff, 0xc7, 0xff, 0xe7, 0xc7, 0xcf, 0xfc, 0x3f, 0xc1, 0xf0, 0x04, 0x00, 0x28, 
	0x34, 0x01, 0x03, 0xc7, 0xc7, 0xc3, 0xe3, 0xc3, 0xe1, 0xe0, 0x3f, 0xc0, 0xf0, 0x00, 0x00, 0x2c, 
	0x7c, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x39, 0xc0, 0xf0, 0x00, 0x00, 0x3e, 
	0xcc, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x33, 
	0x86, 0x01, 0x03, 0xc3, 0xef, 0x00, 0xf3, 0xc7, 0xc1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x61, 
	0x86, 0x10, 0x03, 0xc7, 0xcf, 0x00, 0xf3, 0xff, 0x81, 0xe0, 0x70, 0xe0, 0xf0, 0x00, 0x80, 0x61, 
	0xcc, 0x10, 0x03, 0xff, 0xcf, 0x81, 0xf3, 0xff, 0x01, 0xe0, 0xf0, 0xf0, 0xf0, 0x00, 0x80, 0x33, 
	0x7c, 0x08, 0x83, 0xff, 0x8f, 0x81, 0xf3, 0xcf, 0x01, 0xe0, 0xff, 0xf0, 0xf0, 0x00, 0x80, 0x3e, 
	0x34, 0x00, 0x03, 0xff, 0x07, 0xc3, 0xe3, 0xcf, 0x81, 0xe0, 0xff, 0xf0, 0xf0, 0x60, 0x80, 0x2c, 
	0x14, 0x08, 0x03, 0x8c, 0x07, 0xff, 0xe3, 0xc7, 0x81, 0xe1, 0xff, 0xf8, 0xf1, 0xe1, 0x00, 0x28, 
	0x1e, 0x00, 0x07, 0xc0, 0x03, 0xff, 0xc7, 0xc7, 0xc3, 0xf1, 0xf0, 0xf9, 0xff, 0xe1, 0x00, 0x78, 
	0x0e, 0x00, 0x07, 0xc0, 0x21, 0xff, 0x8f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe2, 0x08, 0x70, 
	0x0f, 0x00, 0x07, 0xc0, 0x20, 0x7e, 0x0f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe6, 0x08, 0xf0, 
	0x07, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0xe0, 
	0x07, 0x84, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x20, 0x00, 0x08, 0x31, 0xe0, 
	0x05, 0xc6, 0x00, 0x10, 0x0c, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x63, 0xa0, 
	0x0d, 0xe3, 0x00, 0x08, 0x02, 0x00, 0x80, 0x30, 0x04, 0x02, 0x00, 0x80, 0x18, 0x00, 0xc7, 0xb0, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x80, 0x60, 0x0f, 0x10, 0x0c, 0x02, 0x00, 0x30, 0x01, 0x8f, 0x30, 
	0x1f, 0xf8, 0xc0, 0x06, 0x00, 0x00, 0x18, 0x00, 0x00, 0x10, 0x06, 0x00, 0x40, 0x07, 0x1f, 0xf8, 
	0x3e, 0x7c, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0e, 0x3e, 0x7c, 
	0x7c, 0x3e, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x38, 0x7c, 0x3e
}, {
	0x7c, 0x3e, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x7c, 0x3e, 
	0x3e, 0x7c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x04, 0x3e, 0x7c, 
	0x1f, 0xf8, 0xe0, 0x02, 0x00, 0x80, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x03, 0x1f, 0xf8, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x00, 0x30, 0x00, 0x30, 0x01, 0x01, 0x80, 0x30, 0x01, 0x8f, 0x30, 
	0x0d, 0xe3, 0x00, 0x18, 0x02, 0x00, 0x40, 0x18, 0x0e, 0x00, 0x00, 0x40, 0x10, 0x00, 0xc7, 0xb0, 
	0x05, 0xc6, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x20, 0x08, 0x00, 0x63, 0xa0, 
	0x07, 0x8c, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x21, 0xe0, 
	0x07, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xe0, 
	0x0f, 0x10, 0x6f, 0xfc, 0x00, 0x7e, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x07, 0xf0, 0x00, 0x00, 0xf0, 
	0x0e, 0x10, 0x4f, 0xff, 0x01, 0xff, 0x8f, 0xff, 0x8f, 0xfe, 0x1f, 0x83, 0xf0, 0x08, 0x00, 0x70, 
	0x1e, 0x00, 0x87, 0xff, 0x83, 0xff, 0xc7, 0xff, 0xcf, 0xfe, 0x1f, 0x83, 0xf0, 0x04, 0x00, 0x78, 
	0x14, 0x00, 0x87, 0xff, 0xc7, 0xff, 0xe7, 0xc7, 0xcf, 0xfc, 0x3f, 0xc1, 0xf0, 0x04, 0x00, 0x28, 
	0x34, 0x01, 0x03, 0xc7, 0xc7, 0xc3, 0xe3, 0xc3, 0xe1, 0xe0, 0x3f, 0xc0, 0xf0, 0x00, 0x00, 0x2c, 
	0x7c, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x39, 0xc0, 0xf0, 0x00, 0x00, 0x3e, 
	0xcc, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x33, 
	0x86, 0x01, 0x03, 0xc3, 0xef, 0x00, 0xf3, 0xc7, 0xc1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x61, 
	0x86, 0x10, 0x03, 0xc7, 0xcf, 0x00, 0xf3, 0xff, 0x81, 0xe0, 0x70, 0xe0, 0xf0, 0x00, 0x80, 0x61, 
	0xcc, 0x10, 0x03, 0xff, 0xcf, 0x81, 0xf3, 0xff, 0x01, 0xe0, 0xf0, 0xf0, 0xf0, 0x00, 0x80, 0x33, 
	0x7c, 0x08, 0x83, 0xff, 0x8f, 0x81, 0xf3, 0xcf, 0x01, 0xe0, 0xff, 0xf0, 0xf0, 0x00, 0x80, 0x3e, 
	0x34, 0x00, 0x03, 0xff, 0x07, 0xc3, 0xe3, 0xcf, 0x81, 0xe0, 0xff, 0xf0, 0xf0, 0x60, 0x80, 0x2c, 
	0x14, 0x08, 0x03, 0x8c, 0x07, 0xff, 0xe3, 0xc7, 0x81, 0xe1, 0xff, 0xf8, 0xf1, 0xe1, 0x00, 0x28, 
	0x1e, 0x00, 0x07, 0xc0, 0x03, 0xff, 0xc7, 0xc7, 0xc3, 0xf1, 0xf0, 0xf9, 0xff, 0xe1, 0x00, 0x78, 
	0x0e, 0x00, 0x07, 0xc0, 0x21, 0xff, 0x8f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe2, 0x08, 0x70, 
	0x0f, 0x00, 0x07, 0xc0, 0x20, 0x7e, 0x0f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe6, 0x08, 0xf0, 
	0x07, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0xe0, 
	0x07, 0x84, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x20, 0x00, 0x08, 0x31, 0xe0, 
	0x05, 0xc6, 0x00, 0x10, 0x0c, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x63, 0xa0, 
	0x0d, 0xe3, 0x00, 0x08, 0x02, 0x00, 0x80, 0x30, 0x04, 0x02, 0x00, 0x80, 0x18, 0x00, 0xc7, 0xb0, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x80, 0x60, 0x0f, 0x10, 0x0c, 0x02, 0x00, 0x30, 0x01, 0x8f, 0x30, 
	0x1f, 0xf8, 0xc0, 0x06, 0x00, 0x00, 0x18, 0x00, 0x00, 0x10, 0x06, 0x00, 0x40, 0x07, 0x1f, 0xf8, 
	0x3e, 0x7c, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0e, 0x3e, 0x7c, 
	0x7c, 0x3e, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x38, 0x7c, 0x3e
},{
	0x7c, 0x3e, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x7c, 0x3e, 
	0x3e, 0x7c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x04, 0x3e, 0x7c, 
	0x1f, 0xf8, 0xe0, 0x02, 0x00, 0x80, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x03, 0x1f, 0xf8, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x00, 0x30, 0x00, 0x30, 0x01, 0x01, 0x80, 0x30, 0x01, 0x8f, 0x30, 
	0x0d, 0xe3, 0x00, 0x18, 0x02, 0x00, 0x40, 0x18, 0x0e, 0x00, 0x00, 0x40, 0x10, 0x00, 0xc7, 0xb0, 
	0x05, 0xc6, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x20, 0x08, 0x00, 0x63, 0xa0, 
	0x07, 0x8c, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x21, 0xe0, 
	0x07, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xe0, 
	0x0f, 0x10, 0x6f, 0xfc, 0x00, 0x7e, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x07, 0xf0, 0x00, 0x00, 0xf0, 
	0x0e, 0x10, 0x4f, 0xff, 0x01, 0xff, 0x8f, 0xff, 0x8f, 0xfe, 0x1f, 0x83, 0xf0, 0x08, 0x00, 0x70, 
	0x1e, 0x00, 0x87, 0xff, 0x83, 0xff, 0xc7, 0xff, 0xcf, 0xfe, 0x1f, 0x83, 0xf0, 0x04, 0x00, 0x78, 
	0x14, 0x00, 0x87, 0xff, 0xc7, 0xff, 0xe7, 0xc7, 0xcf, 0xfc, 0x3f, 0xc1, 0xf0, 0x04, 0x00, 0x28, 
	0x34, 0x01, 0x03, 0xc7, 0xc7, 0xc3, 0xe3, 0xc3, 0xe1, 0xe0, 0x3f, 0xc0, 0xf0, 0x00, 0x00, 0x2c, 
	0x7c, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x39, 0xc0, 0xf0, 0x00, 0x00, 0x3e, 
	0xcc, 0x01, 0x03, 0xc3, 0xef, 0x81, 0xf3, 0xc3, 0xe1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x33, 
	0x86, 0x01, 0x03, 0xc3, 0xef, 0x00, 0xf3, 0xc7, 0xc1, 0xe0, 0x79, 0xe0, 0xf0, 0x00, 0x00, 0x61, 
	0x86, 0x10, 0x03, 0xc7, 0xcf, 0x00, 0xf3, 0xff, 0x81, 0xe0, 0x70, 0xe0, 0xf0, 0x00, 0x80, 0x61, 
	0xcc, 0x10, 0x03, 0xff, 0xcf, 0x81, 0xf3, 0xff, 0x01, 0xe0, 0xf0, 0xf0, 0xf0, 0x00, 0x80, 0x33, 
	0x7c, 0x08, 0x83, 0xff, 0x8f, 0x81, 0xf3, 0xcf, 0x01, 0xe0, 0xff, 0xf0, 0xf0, 0x00, 0x80, 0x3e, 
	0x34, 0x00, 0x03, 0xff, 0x07, 0xc3, 0xe3, 0xcf, 0x81, 0xe0, 0xff, 0xf0, 0xf0, 0x60, 0x80, 0x2c, 
	0x14, 0x08, 0x03, 0x8c, 0x07, 0xff, 0xe3, 0xc7, 0x81, 0xe1, 0xff, 0xf8, 0xf1, 0xe1, 0x00, 0x28, 
	0x1e, 0x00, 0x07, 0xc0, 0x03, 0xff, 0xc7, 0xc7, 0xc3, 0xf1, 0xf0, 0xf9, 0xff, 0xe1, 0x00, 0x78, 
	0x0e, 0x00, 0x07, 0xc0, 0x21, 0xff, 0x8f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe2, 0x08, 0x70, 
	0x0f, 0x00, 0x07, 0xc0, 0x20, 0x7e, 0x0f, 0xc3, 0xf3, 0xf3, 0xe0, 0x7d, 0xff, 0xe6, 0x08, 0xf0, 
	0x07, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0xe0, 
	0x07, 0x84, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x20, 0x00, 0x08, 0x31, 0xe0, 
	0x05, 0xc6, 0x00, 0x10, 0x0c, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x63, 0xa0, 
	0x0d, 0xe3, 0x00, 0x08, 0x02, 0x00, 0x80, 0x30, 0x04, 0x02, 0x00, 0x80, 0x18, 0x00, 0xc7, 0xb0, 
	0x0c, 0xf1, 0x80, 0x0c, 0x00, 0x80, 0x60, 0x0f, 0x10, 0x0c, 0x02, 0x00, 0x30, 0x01, 0x8f, 0x30, 
	0x1f, 0xf8, 0xc0, 0x06, 0x00, 0x00, 0x18, 0x00, 0x00, 0x10, 0x06, 0x00, 0x40, 0x07, 0x1f, 0xf8, 
	0x3e, 0x7c, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0e, 0x3e, 0x7c, 
	0x7c, 0x3e, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x38, 0x7c, 0x3e
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0xf8,
	0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x7f,
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8,
	0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x7f,
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x83, 0x83, 0x83, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff,
	0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0xfe,
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
	0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x1f,
	0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
},{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
	0xf8, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8,
	0x00, 0x00, 0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,
	0xf8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
	0x7f, 0x00, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
	0x00, 0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00,
	0x7f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x7f, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff,
	0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0xfe, 0x00, 0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0x00, 0x00, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00,
	0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe,
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
	0x13, 0x13, 0x10, 0x10, 0x10, 0x10, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	0x1f, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f,
	0x00, 0x00, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00,
	0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f,
	0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}

    };

	WRITE_RAW(layer_status[get_highest_layer(layer_state)]);
}
