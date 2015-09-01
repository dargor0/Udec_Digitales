/*
SciCalc: Tests for trigonometric functions

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
#include <stdlib.h>
#include "CuTest.h"

/* Project headers */

/* Private data types */

/* Private constants */
// value pair of the sine function
const float test_vector_sin_inputs[] = {0.0, 0.1, 0.2};
const float test_vector_sin_outputs[] = {0.0, 0.09, 0.19};
const int test_vector_sin_len = 3;

/* Global variables */

/* Private function prototypes */

/* Private functions */

/* Public functions */

fixp_number_t conv_fixp(float x)
{
    fixp_number_t partial;
    // float to fixp_number_t: multiply by 2^(FIXP_FRAC_BITS) and
    // save as integer
    partial = (fixp_number_t) (x * ((float) (1<<FIXP_FRAC_BITS)));
    return partial;
}

void test_fixp_sin(CuTest* tc)
{
    int i;
    fixp_number_t x_in, y_out;

    for(i=0; i<test_vector_sin_len; i++) {
        x_in = conv_fixp(test_vector_sin_inputs[i]);
        y_out = fixp_sin(x_in);
        /*
        if(y_out != conv_fix(test_vector_sin_inputs[i])) {
            printf("Error: no corresponde con el valor sin(%f)=%f", test_vector_sin_inputs[i], test_vector_sin_outputs[i])
            errcount++;
        }
        */

        //CuAssertTrue(tc, y_out != conv_fixp(test_vector_sin_inputs[i]));
        CuAssertIntEquals(tc, conv_fixp(test_vector_sin_inputs[i]), y_out);
    }
    //return errcount;
}


CuSuite* CuTrigonometricSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, test_fixp_sin);
	//SUITE_ADD_TEST(suite, test_fixp_cos);
	//SUITE_ADD_TEST(suite, test_fixp_tan);

	return suite;
}

/* ---- */
