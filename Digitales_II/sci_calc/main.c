#include <stdio.h>

#include "CuTest.h"
#include "trigonometric.h"

CuSuite* CuTrigonometricSuite(void);

void RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

    // add here the tests
	CuSuiteAddSuite(suite, CuTrigonometricSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}

int main(void)
{
	RunAllTests();
	return 0;
}
