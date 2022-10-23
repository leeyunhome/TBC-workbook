#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>		// islower()
#include <stdbool.h>
#include <iso646.h>		// and, or, not

#define PERIOD '.'

int main()
{
	/*	
		Logical operators 
		
		&& : and
		|| : or
		!  : not
	*/

	bool test1 = 3 > 2 or 5 > 6;
	bool test2 = 3 > 2 and 5 > 6;
	bool test3 = not(5 > 6);

	printf("%d %d %d\n", test1, test2, test3);

	/* Character counting example */

	//char ch;
	//int count = 0;

	//while ((ch = getchar()) != PERIOD)
	//{
	//	//TODO: make exception
	//	if (ch != '\n' && ch != ' ')
	//		count++;
	//}

	//printf("%d", count);
	
	/*
		Alternatives in iso646.h

		&&	: and
		||	: or
		!	: not
	*/

	/* 
		Precedence 
	
		Check !, &&, !! in the operator precedence table
		https://en.cppreference.com/w/c/language/operator_precedence
	*/





	/*
		Short-circuit Evaluation

		- Logical expressions are evaluated from left to right
		- && and || are sequence points
	*/

	//int temp = (1 + 2) * (3 * 4);

	//printf("Before : %d\n", temp);

	//if (temp == 0 && (++temp == 1024))
	//{
	//	// do nothing
	//};

	//printf("After : %d\n", temp);

	//int x = 1, y = 2;
	//if (x++ > 0 && x + y == 4)
	//	printf("%d %d\n", x, y);

	/* Ranges */

	for (int i = 0; i < 100; ++i)
		if (i >= 10 && i <= 20)
			printf("%d ", i);

	printf("\n");

	for (char c = -128; c < 127; ++c)
		if (c >= 'a' && c <= 'z')
			printf("%c ", c);

	printf("\n");

	for (char c = 0; c < 127; ++c)
		if (islower(c))
			printf("%c ", c);

	return 0;
}