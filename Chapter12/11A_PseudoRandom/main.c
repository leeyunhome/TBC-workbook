#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()

int main()
{
	/*
		rand()
		- 0 to RAND_MAX (typically INT_MAX)
		- defined in stdlib.h.
	*/

	//srand(1);	// random seed
	//srand((unsigned int)time(0));
	for (int row = 0; row < 10; ++row)
	{
		printf("%d\n", rand());
	}

	return 0;
}