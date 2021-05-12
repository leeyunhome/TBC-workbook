#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char * argv[])
{
	int count;

	printf("The command line has %d argument:\n", argc);

	for (count = 0; count < argc; count++)
	{
		printf("Arg %d : %s\n", count, argv[count]);
		printf("argc %d\n", argc);
	}
	printf("\n");

	return 0;
}