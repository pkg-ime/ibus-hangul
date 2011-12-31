/* vim:set et sts=4: */
/* ibus-hangul - The Hangul Engine For IBus
 * Copyright (C) 2008-2009 Peng Huang <shawn.p.huang@gmail.com>
 * Copyright (C) 2009-2011 Choe Hwanjin <choe.hwanjin@gmail.com>
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

#ifndef __ENGINE_H__
#define __ENGINE_H__

#include <ibus.h>

#define IBUS_TYPE_HANGUL_ENGINE	\
	(ibus_hangul_engine_get_type ())

GType   ibus_hangul_engine_get_type    (void);

void    ibus_hangul_init (IBusBus *bus);
void    ibus_hangul_exit (void);

#endif
