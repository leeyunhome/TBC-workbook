#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	//unsigned int i = 0b11111111111111111111111111111111;
	//unsigned int i = 1024;
	//unsigned int u_max = UINT_MAX + 1;
	unsigned int u_max = 0 - 1;

	//printf("%u\n", u_max);
	
	//unsigned int u_min = 0;
	//signed int i_max = INT_MAX;
	//signed int i_min = INT_MIN;

	//printf("max of uint = %u\n", u_max);
	//printf("min of unit = %u\n", u_min);
	//printf("max of int = %d\n", i_max);
	//printf("min of int = %d\n", i_min);

	//printf("%d\n", i);
	//printf("%u\n", u);

	//printf("%u\n", sizeof(unsigned int));
	//printf("%u\n", sizeof(i));

	//unsigned int u_max = 0 - 1;

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}