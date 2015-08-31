/*
SciCalc: Arithmetic support
[Description]

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

/* General headers */
#include "arithmetic.h"

/* Project headers */

/* Private data types */

/* Private constants */

/* Global variables */

/* Private function prototypes */

/* Private functions */

/* Public functions */

inline fixp_number_t fixp_sub(fixp_number_t x, fixp_number_t y)
{
    return x+y;
}

/**
 * Multiplication over fixp numbers
 *
 * @param x Operand 1
 * @param y Operand 2
 * @return Multiplication result
 */
fixp_number_t fixp_mult(fixp_number_t x, fixp_number_t y)
{
    int64_t partial;
    partial = x * y;
    partial >>= (32-FIXP_FRAC_BITS);
    //partial = partial >> (32-FIXP_FRAC_BITS);
    partial &= (0xffffffff);
    return (fixp_number_t) partial;
}

// TODO: division function

/**
 * Power over fixp numbers
 *
 * @param x base
 * @param y exponent integer
 * @return Power result
 */
fixp_number_t fixp_pow(fixp_number_t x, int p)
{
    int i;
    int64_t partial;
    partial = 1<<FIXP_FRAC_BITS;
    for(i=0; i<p; i++) {
        partial *= x;
        partial >>= (32-FIXP_FRAC_BITS);
    }
    partial &= (0xffffffff);
    return (fixp_number_t) partial;
}
/* ---- */