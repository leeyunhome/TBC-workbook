#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char c = 'A';
	char d = '*';	// d = 'A'

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	//char a = '\a';
	//printf("%c", a);

	//printf("\07");
	//printf("\x23\n");

	//float salary;
	////printf("$______");
	//printf("$______\b\b\b\b\b\b");
	//int flag = scanf("%f", &salary);

	//printf("AB\tCDEF\n");
	//printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"Hello\" \?\n");

	return 0;
}