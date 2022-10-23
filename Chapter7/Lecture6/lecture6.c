#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num;
	bool isPrime = 0;// flag, try bool type
	int div;
	int flag = scanf("%u", &num);

	/*
		TODO: Check if num is a prime number
		ex) num is 4, try num % 2, num % 3
		ex) num is 5, try num % 2, num % 3, num % 4
	*/

	isPrime = true;

	for (div = 2; (div*div) <= num; div++)
	{
		//fprintf(stderr, "%s=%d\n", __FUNCTION__, __LINE__);
		if (num % div == 0)
		{
			isPrime = false;
			//break;
			if (num == div * div)
				printf("%u is divisable by %u\n", num, div);
			else
				printf("%u is divisable by %u and %u\n", num, div, num / div);
		}
		//else
		//{
		//	isPrime = 1;
		//}
	}

	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}