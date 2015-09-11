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
const int fact_values[] = {
    1,    // 0!
    1,    // 1!
    2,    // 2!
    6,    // 3!
    24,   // 4!
    120,  // 5!
    720   // 6!
};

/* Global variables */

/* Private function prototypes */

/* Private functions */

/* Public functions */

/**
 * Addition over fixp numbers
 *
 * @param x Operand 1
 * @param y Operand 2
 * @return Addition result
 */
inline fixp_number_t fixp_add(fixp_number_t x, fixp_number_t y)
{
    return x+y;
}

/**
 * Substraction over fixp numbers
 *
 * @param x Operand 1
 * @param y Operand 2
 * @return Substraction result
 */
inline fixp_number_t fixp_sub(fixp_number_t x, fixp_number_t y)
{
    return x-y;
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

/**
 * Division over fixp numbers
 *
 * @param x Operand 1
 * @param y Operand 2
 * @return Division result
 */
fixp_number_t fixp_div(fixp_number_t x, fixp_number_t y)
{
    return 0;
}

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

/**
 * Factorial over int numbers, result in fixp numbers
 *
 * @param x base
 * @return Factorial result
 */
fixp_number_t fixp_fact(int x)
{
    // check table boundaries
    if ((x < 0) || (x > 6)) return 0;
    else return (fixp_number_t) (fact_values[x] * (1<<FIXP_FRAC_BITS));
}
/* ---- */
