#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (0 == number % 2)
		printf("Even\n");
	else // if (0 != number % 2)
		printf("Odd\n");

	//TODO: print even or odd

	return 0;
}