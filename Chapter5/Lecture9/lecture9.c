#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	/* Statements */


	/* Side Effects and Sequence Points */
	int x = 0;
	int y = 0;
	x = 4; // main intent is evaluating expressions
	y = 1 + x++;
	printf("y = %d\n", y);
	while (x++ < 10)	// (x++ < 10) is a full expression.
		printf("%d\n", x);
	
	y = (4 + x++) + (6 + x++);	// Not (
	/* full expression */


	return 0;
}