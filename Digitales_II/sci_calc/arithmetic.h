/*
SciCalc: Arithmetic support



Author:  Oscar Diaz <odiaz@ieee.org>
Version: 0.1
Date:    28-08-2015

This code is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

This code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this package; if not, see
<http://www.gnu.org/licenses/>.
*/

#ifndef ARITHMETIC_H_INCLUDED
#define ARITHMETIC_H_INCLUDED

/* Needed header for this code */
#include <stdint.h>

/* Data type defined for this module */
typedef int32_t fixp_number_t;

/* Constants */
#define FIXP_INTEGER_BITS 16
#define FIXP_FRAC_BITS 16

/* Macros */
// NOTE: macros replaced by inline functions
//#define fixp_add(x,y) (x+y)
//#define fixp_sub(x,y) (x-y)

/* Function prototypes for this module */
inline fixp_number_t fixp_add(fixp_number_t x, fixp_number_t y);
inline fixp_number_t fixp_sub(fixp_number_t x, fixp_number_t y);
fixp_number_t fixp_mult(fixp_number_t x, fixp_number_t y);
fixp_number_t fixp_div(fixp_number_t x, fixp_number_t y);
fixp_number_t fixp_pow(fixp_number_t x, int p);
fixp_number_t fixp_fact(int x);


#endif // ARITHMETIC_H_INCLUDED
