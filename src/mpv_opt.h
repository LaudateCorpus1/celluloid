/*
 * Copyright (c) 2016 gnome-mpv
 *
 * This file is part of GNOME MPV.
 *
 * GNOME MPV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNOME MPV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNOME MPV.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MPV_OPT_H
#define MPV_OPT_H

#include <mpv/client.h>

#include "mpv_obj.h"

typedef struct module_log_level module_log_level;

struct module_log_level
{
	gchar *prefix;
	mpv_log_level level;
};

void mpv_opt_handle_autofit(MpvObj *mpv);
void mpv_opt_handle_msg_level(MpvObj *mpv);

#endif