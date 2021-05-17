#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12

int main()
{
	/* Basic usage */
	int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };

	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%d ", high[i]);
	//printf("\n");

	//float avg = 0.0f;
	//for (int i = 0; i < MONTHS; ++i)
	//	avg += high[i];
	//printf("Average = %f\n", avg / (float)MONTHS);

	//high[0] = 1;
	//high[1] = 2;

	///* Addresses */
	//printf("%p %p\n", high, &high[0]);
	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%lld\n", (long long)&high[i]);
	//printf("\n");

	/* Compiler doesn't check whether indices ar valid. */
	high[12] = 4; // Error
	//high[-1] = 123; // Error

	/* Monthly temperatures */






	return 0;
}