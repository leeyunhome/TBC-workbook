#include <stdio.h>

int main()
{
	int n = 1;

label:
	printf("%d\n", n);
	n = n + 1;

	goto label;

	//int i;
	//
	//for (i = 0; i < 1000; ++i)
	//{
	//	printf("%d \n", i);
	//}

	return 0;
}