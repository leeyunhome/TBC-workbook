#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double seed, target, interest = 0.0;
	int year_count = 0;

	printf("Input seed money : ______\b\b\b\b\b\b\b");
	int flag = scanf("%lf", &seed);
	if (1 != flag)
	{
		puts("Wrong input.");
		exit(1);
	}

	printf("Input target money : ______\b\b\b\b\b\b");
	flag = scanf("%lf", &target);
	if (1 != flag)
	{
		puts("Wrong input.");
		exit(1);
	}

	printf("Input annual interest (%%) : ______\b\b\b\b\b\b");
	flag = scanf("%lf", &interest);
	if (1 != flag)
	{
		puts("Wrong input.");
		exit(1);
	}

	double fund = seed;
	while (fund < target)
	{
		fund += fund * interest * 0.01;
		//printf("Year %d, fund %f\n", year_count,seed);
		printf("%f\n", fund);
		year_count++;
	}

	printf("It takes %d years.\n", year_count);

	return 0;
}