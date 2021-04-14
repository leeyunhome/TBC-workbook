#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* promotions in assignments*/
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;

	/* ranking of types in operations */


	/* automatic promotion of function arguments */


	/* casting operators */


	/* more examples */


	return 0;
}