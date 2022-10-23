#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int temp;
	//temp = true ? 1024 : 7;
	//printf("%d\n", temp);

	//temp = false ? 1024 : 7;
	//printf("%d\n", temp);

	int number;
	scanf("%d", &number);

	//bool is_even;

	//if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;

	//const bool is_even = (number % 2 == 0) ? true : false;

	//if (is_even)
	//	printf("Even");
	//else
	//	printf("Odd");

	//int a = 1, b = 2;
	//const int max = (a > b) ? a : b;

	//printf("max : %d\n", max);

	//int number;
	//scanf("%d", &number);

	(number % 2 == 0) ? printf("Even") : printf("Odd");

	return 0;
}