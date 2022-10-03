#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 12
#define FIRST_CHAR	'A'
#define LAST_CHAR   'L'

int main()
{
	int r;
	int c;

	for (r = 0; r < NUM_ROWS; r++)
	{
		for (c = FIRST_CHAR + r; c <= LAST_CHAR; c++)
		{
			printf("%c ", c);
		}
		printf("\n");
	}





	return 0;
}
//
//char last_char;
//
//int flag = scanf("%c", &last_char);
//if (1 != flag)
//{
//	printf("ERROR: Wrong input.\n");
//	return -1;
//}
//
//const char num_rows = last_char - FIRST_CHAR + 1;
//
//int r;
//int c;
//
//for (r = 0; r < num_rows; r++)
//{
//	for (c = FIRST_CHAR + r; c < +FIRST_CHAR + num_rows; c++)
//	{
//		printf("%c ", c);
//	}
//	printf("\n");
//}
//
