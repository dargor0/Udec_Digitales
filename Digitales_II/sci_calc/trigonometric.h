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

#ifndef TRIGONOMETRIC_H_INCLUDED
#define TRIGONOMETRIC_H_INCLUDED

/* Needed header for this code */
#include "arithmetic.h"

/* Data type defined for this module */

/* Constants */
#define FIXP_PI ((31416 * 65536)/10000)

/* Macros */

/* Function prototypes for this module */
fixp_number_t fixp_sin(fixp_number_t x);

#endif // TRIGONOMETRIC_H_INCLUDED
