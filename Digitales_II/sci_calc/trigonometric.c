/*
SciCalc: Trigonometric functions support

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
#include "trigonometric.h"

/* Project headers */

/* Private data types */

/* Private constants */

/* Global variables */

/* Private function prototypes */

/* Private functions */

/* Public functions */

/**
 * Sine function over fixp numbers
 *
 * @param x Operand 1
 * @return Sine result
 */
fixp_number_t fixp_sin(fixp_number_t x)
{
    // First version

    fixp_number_t partial_add, partial_term;
    // calculate first term
    partial_add = x;
    // calculate second term and sub it
    partial_term = fixp_pow(x, 3);
    partial_term = fixp_div(partial_term, fixp_fact(3));
    partial_add = fixp_sub(partial_add, partial_term);
    // calculate third term and add it
    partial_term = fixp_pow(x, 5);
    partial_term = fixp_div(partial_term, fixp_fact(5));
    partial_add = fixp_add(partial_add, partial_term);

    // Second version
//    int i;
//    const int term_limit = 5;
//    fixp_number_t partial_add, partial_term;
//
//    partial_add = x;
//    for(i = 3; i <= term_limit ; i+=2) {
//        partial_term = fixp_pow(x, i);
//        partial_term = fixp_div(partial_term, fixp_fact(i));
//        partial_add = fixp_sub(partial_add, partial_term);
//        i+=2;
//        partial_term = fixp_pow(x, i);
//        partial_term = fixp_div(partial_term, fixp_fact(i));
//        partial_add = fixp_add(partial_add, partial_term);
//    }

    return partial_add;
}

/* ---- */
