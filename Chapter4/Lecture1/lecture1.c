#define _CRT_SECURE_NO_WARNINGS
#define MAX 40

#include <stdio.h>

int main()
{
	//char fruit_name;	// sotres only one character.

	//printf("What is your favorate fruit?____\b\b\b\b");

	//scanf("%c", &fruit_name);

	//printf("You like %c\n!", fruit_name);

	char fruit_name[MAX]; // stores only one character.

	printf("What is your farovate fruit?_____\b\b\b\b\b");

	int flag = scanf("%s", fruit_name);	// be careful with &

	printf("You like %s!\n", fruit_name);

	return 0;
}