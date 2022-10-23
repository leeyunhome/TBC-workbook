#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int number;
	scanf("%d", &number);

	(number % 2 == 0) ? printf("Even") : printf("Odd");

	return 0;
}