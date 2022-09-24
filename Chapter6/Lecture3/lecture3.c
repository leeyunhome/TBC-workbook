#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	/*
	while (expression)
		statement
	*/

	/* Common mistakes */

	while (scanf("%d", &i) == 1)
		;// null statement
	// do something (?)

	return 0;
}