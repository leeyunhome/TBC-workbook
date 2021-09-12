#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main()
{
	int numbers[SIZE] = { 0, };
	int iter;
	int flag = 0;
	int sum = 0;

	printf("Enter %d numbers : ", SIZE);

	for (iter = 0; iter < SIZE; iter++)
		flag = scanf("%d", &numbers[iter]);

	for (iter = 0; iter < SIZE; iter++)
		sum += *(numbers + iter);

	//TODO: average

	printf("Sum = %d\n", sum);

	return 0;
}