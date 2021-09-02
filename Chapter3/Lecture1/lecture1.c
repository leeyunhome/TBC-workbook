#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float won = 0.0f;
	float dollar = 0.0f;

	printf("Input Won\n");

	scanf("%f", &won);

	dollar = won * 0.00086f;

	printf("Dollar = %f\n", dollar);


	return 0;
}