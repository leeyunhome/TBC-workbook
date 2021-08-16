#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h>	// exit()

unsigned char to_decimal(const char bi[]);

int main()
{
	printf("Binary (string) to Decimal conversion\n");

	printf("%d\n", to_decimal("00000110"));
	printf("%d\n", to_decimal("00010110"));

	// Note: ^ (caret) means power in math.
	// Hint: (int)pow(2, 3) == 8

	printf("%d\n", to_decimal("10010100"));

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	unsigned char result = 0;
	const size_t bits = strlen(bi);
	for (size_t idx = 0; idx < bits; ++idx)
	{
		if (bi[idx] == '1')
			result += (unsigned char)pow((double)2, (double)(bits - idx - 1));
		else if (bi[idx] != '0')
		{
			printf("Wrong character : %c", bi[i]);
			exit(1);
		}
			
	}

	return result;
}
//
//unsigned char to_decimal(const char bi[])
//{
//	const size_t bits = strlen(bi);
//	unsigned char sum = 0;
//	for (size_t i = 0; i < bits; ++i)
//	{
//		if (bi[i] == '1')
//			sum += (int)pow(2, (bits - 1 - i));
//		else if (bi[i] != '0') {
//			printf("Wrong character : %c", bi[i]);
//			exit(1);
//		}
//	}
//
//	return sum;
//}
