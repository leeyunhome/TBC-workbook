#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS	5
#define FIRST_CHAR	'A'
#define LAST_CHAR   'K'

int main()
{
	for (int j = 0; j < NUM_ROWS; j++)
	{
		for (int i = FIRST_CHAR; i <= LAST_CHAR; i++)
		{
			printf("%c ", i);
		}
		printf("\n");
	}

	return 0;
}

//
//int r;// row loop
//int c;// character loop
//
//for (r = 0; r < NUM_ROWS; r++)
//{
//	for (c = FIRST_CHAR; c <= LAST_CHAR; c++)
//		printf("%c ", c);
//	printf("\n");
//}