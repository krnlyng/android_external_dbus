/* -*- mode: C; c-file-style: "gnu" -*- */
/* utils.h  General utility functions
 *
 * Copyright (C) 2003  CodeFactory AB
 * Copyright (C) 2003  Red Hat, Inc.
 *
 * Licensed under the Academic Free License version 1.2
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef BUS_UTILS_H
#define BUS_UTILS_H

void bus_wait_for_memory (void);

extern const char bus_no_memory_message[];
#define BUS_SET_OOM(error) dbus_set_error ((error), DBUS_ERROR_NO_MEMORY, bus_no_memory_message)

#endif /* BUS_ACTIVATION_H */