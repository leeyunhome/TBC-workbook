#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "my_rand.h"

int main()
{
	my_srand((unsigned int)time(0));

	for (int row = 0; row < 10; ++row)
	{
		printf("%d\n", my_rand() % 6 + 1);
	}

	return 0;
}