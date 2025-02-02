#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NUM 5

int main()
{
	/* Arrays of Character Strings */

	const char* mythings[MAX_NUM] = {
		"Dancing in the rain",
		"Couting apples",
		"Watching movies with friends",
		"Writing sad letters",
		"Studying the C language",
	};

	char yourthings[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam emails"
	};

	const char* temp1 = "Dancing in the rain";
	const char* temp2 = "Studying the C++ language";

	printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
	printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);
	printf("sizeof(yourthings) = %zd\n", sizeof(yourthings));
	printf("sizeof(yourthings[0]) = %zd\n", sizeof(yourthings[0]));
	printf("\n");

	printf("%-30s %-30s\n", "My Things:", "Your things:");
	for (int i = 0; i < 5; i++)
		printf("%-30s %-30s\n", mythings[i], yourthings[i]);

	printf("\nsizeof mythings: %zd, sizeof your yourthings: %zd\n",
		sizeof(mythings), sizeof(yourthings));

	for (int i = 0; i < 110; i++)
		printf("%c", mythings[0][i]);
	printf("\n");
	printf("\n");


	for (int i = 0; i < 200; i++)
		printf("%d", (int)yourthings[0][i]);
	printf("\n");

	for (int i = 0; i < 200; i++)
		printf("%c", yourthings[0][i]);
	printf("\n");
	printf("\n");

	// Not a good idea to take advantage of this property

	return 0;
}