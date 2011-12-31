/* vim:set et sw=4 sts=4: */
/* ibus-hangul - The Hangul Engine For IBus
 * Copyright (C) 2010-2011 Choe Hwanjin <choe.hwanjin@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <locale.h>
#include <hangul.h>

int main()
{
    int n;
    int i;

    setlocale(LC_ALL, "");

    n = hangul_ic_get_n_keyboards();
    for (i = 0; i < n; ++i) {
	const char* id;
	const char* name;

	id = hangul_ic_get_keyboard_id(i);
	name = hangul_ic_get_keyboard_name(i);

	printf("%s\t%s\n", id, name);
    }
    
    return 0;
}
