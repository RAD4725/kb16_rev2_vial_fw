/* Copyright 2022 DOIO
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
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
#include "./util.h"

#define ANIM_SIZE 512  // number of bytes in array, minimize for adequate firmware size, max is 1024

void render_logo(void) {
    static const char PROGMEM doio[][ANIM_SIZE] = {
        {
    0x00, 0x01, 0x03, 0x07, 0x1f, 0xff, 0xc6, 0xf4, 0x7c, 0x3e, 0x1f, 0x0f, 0xc7, 0x63, 0x31, 0x18, 
	0x0c, 0x06, 0x86, 0x43, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x18, 0x08, 0x04, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x10, 0x08, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x10, 0x00, 0x20, 0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x60, 0x40, 0x00, 0x00, 0x01, 0x01, 
	0x02, 0x06, 0x0c, 0x18, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x02, 0x04, 0x0c, 
	0x18, 0x31, 0x63, 0x87, 0x0f, 0x1f, 0x3e, 0x7c, 0xf4, 0xc6, 0xff, 0x1f, 0x07, 0x03, 0x01, 0x00, 
	0xc0, 0x60, 0x30, 0x3c, 0x67, 0xff, 0x87, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf0, 
	0x0c, 0x03, 0x01, 0x00, 0x00, 0x03, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x1f, 0xfe, 
	0xfe, 0xfc, 0xf8, 0xe0, 0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0x7e, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 
	0x7e, 0xfe, 0xfc, 0xf8, 0xe0, 0x03, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x8f, 0xff, 
	0xff, 0xfe, 0xfc, 0x70, 0x00, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x07, 
	0x01, 0x00, 0xc0, 0xf8, 0xfe, 0xff, 0x1f, 0x1f, 0xff, 0xfe, 0xf8, 0xc0, 0x00, 0x00, 0x01, 0x07, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xff, 0x67, 0x3c, 0x30, 0x60, 0xc0, 
	0x03, 0x06, 0x0c, 0x3c, 0xe6, 0xff, 0xe1, 0x80, 0x00, 0x00, 0x00, 0x03, 0x14, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xef, 0x0e, 0x0e, 0x1e, 0x1f, 0x0f, 
	0x0f, 0x07, 0xc3, 0x00, 0x00, 0x07, 0x1f, 0x3f, 0x7f, 0x7e, 0xf8, 0xf0, 0xf0, 0xf0, 0xf0, 0xf8, 
	0x7e, 0x7f, 0x3f, 0x1f, 0x07, 0xc0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x03, 0x0f, 0x3f, 0xff, 
	0xff, 0xf9, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0xc0, 
	0xf0, 0xfe, 0xff, 0xff, 0x3f, 0x1c, 0x1c, 0x1c, 0x1c, 0x3f, 0xff, 0xff, 0xfe, 0xf0, 0xc0, 0x00, 
	0xe0, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0x00, 0x80, 0xc0, 0x30, 
	0x0f, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x80, 0xe1, 0xff, 0xe6, 0x3c, 0x0c, 0x06, 0x03, 
	0x00, 0x80, 0xc0, 0xe0, 0xf8, 0xff, 0x63, 0x2f, 0x3e, 0x7c, 0xf8, 0xf0, 0xe0, 0xc1, 0x86, 0x0c, 
	0x18, 0x30, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x30, 0x60, 0x40, 
	0x80, 0x80, 0x00, 0x03, 0x06, 0x04, 0x08, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 
	0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x08, 0x04, 0x04, 0x02, 0x00, 0x00, 0x20, 0x10, 0x10, 0x08, 0x00, 
	0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x30, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x20, 0x10, 0x18, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc2, 0x61, 0x60, 0x30, 
	0x18, 0x8c, 0xc6, 0xe3, 0xf0, 0xf8, 0x7c, 0x3e, 0x2f, 0x63, 0xff, 0xf8, 0xe0, 0xc0, 0x80, 0x00
        }
    };

    WRITE_RAW(doio[0]);
}
