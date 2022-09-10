#include <stdio.h>

int main()
{
	int n = 1;

//// goto
//label:
//	printf("%d\n", n);
//	n = n + 1;
//
//	if (n == 10) goto out;
//
//	goto label;
//
//out:

	while (n < 3)
	{
		printf("a%d\n", n);
		n = n + 1;
	}

	//int i;
	//
	//for (i = 0; i < 1000; ++i)
	//{
	//	printf("%d \n", i);
	//}

	return 0;
}