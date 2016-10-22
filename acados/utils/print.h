/*
 *    This file is part of ACADOS.
 *
 *    ACADOS is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    ACADOS is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with ACADOS; if not, write to the Free Software Foundation,
 *    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef ACADOS_UTILS_PRINT_H_
#define ACADOS_UTILS_PRINT_H_

#include "acados/utils/types.h"

void print_matrix(char *file_name, const real_t *matrix, const int_t nrows,
    const int_t ncols);

void print_matrix_name(char *file_name, char *name, const real_t *matrix,
        const int_t nrows, const int_t ncols);

void print_array(char *file_name, real_t *array, int_t size);

#endif  // ACADOS_UTILS_PRINT_H_
