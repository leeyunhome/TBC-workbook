#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("Enter an integer (q to quit) : ");

	while (1 == scanf("%d", &num))
	{
		sum += num;
	}

	printf("sum : %d\n", sum);


	return 0;
}