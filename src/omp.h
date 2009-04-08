/* OpenVAS Manager
 * $Id$
 * Description: Headers for OpenVAS Manager: the OMP library.
 *
 * Authors:
 * Matthew Mundell <matt@mundell.ukfsn.org>
 *
 * Copyright:
 * Copyright (C) 2009 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef OPENVAS_MANAGER_OMP_H
#define OPENVAS_MANAGER_OMP_H

#include "types.h"
#include <sys/types.h>

/**
 * @brief The size of the \ref to_client data buffer, in bytes.
 */
#define TO_CLIENT_BUFFER_SIZE 1048576

void
init_omp_data ();

int
process_omp_client_input ();

// FIX probably should be passed to process_omp_client_input/init_omp_data
//     and defined in caller
extern char to_client[];
extern buffer_size_t to_client_start;
extern buffer_size_t to_client_end;

#endif
