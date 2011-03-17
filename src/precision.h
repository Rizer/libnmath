/*

    This file is part of the nemesis math library.

    precision.h
    Configures precision at compile time

    Copyright (C) 2008, 2010
    Papadopoulos Nikolaos

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General
    Public License along with this library; if not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301 USA

*/

#ifndef LIBNMATH_PRECISION_H_INCLUDED
#define LIBNMATH_PRECISION_H_INCLUDED

/*
    Define MATH_SINGLE_PRECISION to use single precision math
*/

#include "float.h"

#ifdef __cplusplus
	extern "C" {
#endif  /* __cplusplus */

#ifdef MATH_SINGLE_PRECISION
	#define REAL_T_MAX FLT_MAX
	typedef float real_t;

#else
    #define REAL_T_MAX DBL_MAX
    typedef double real_t;

#endif /* MATH_SINGLE_PRECISION */

/* Infinity */
#define NM_INFINITY REAL_T_MAX

/* Useful float values used in comparisons */
#define REAL_T_SMALL    1.e-4   /* 0.0001 */
#define REAL_T_XSMALL   1.e-6   /* 0.000001 */
#define REAL_T_XXSMALL  1.e-8   /* 0.00000001 */

#ifdef __cplusplus
	}   /* extern "C" */
#endif /* __cplusplus */

#endif /* LIBNMATH_PRECISION_H_INCLUDED */
