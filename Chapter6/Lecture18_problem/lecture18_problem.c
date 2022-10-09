#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int base, int exp);

int main()
{
	// 3 4
	// 3*3*3*3 = 81
	int base, exp, result;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = 0;

		result = compute_pow(base, exp);

		printf("Result : %d\n", result);

	}

	return 0;
}

int compute_pow(int base, int exp)
{
	int result = 1;
	int nIdx;

	for (nIdx = 0; nIdx < exp; nIdx++)
	{
		result *= base;
	}

	return result;
}
//
//int compute_pow(int base, int exp)
//{
//	int i, result;
//	result = 1;
//	for (i = 0; i < exp; ++i)
//		result *= base;
//
//	return result;
//}


//int base, exp, i, result;
//int flag;
//
//while (2 == scanf("%d %d", &base, &exp))
//{
//	result = compute_pow(base, exp);
//
//	printf("Result = %d\n", result);
//}