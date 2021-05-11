#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int  get_integer(void);
void count(void);

int main()
{
	printf("Select menu");
	printf("1. input an char\t2. ")


	return 0;
}

void count(void)
{
	int i;
	int num;

	scanf("%d", &num);

	for (i = 0; i < num; ++i)
	{
		printf("%d\n", i + 1);
	}
}

char get_choice(void)
{
	int user_input;
	




	return user_input;
}

char get_first_char(void)
{
	int ch;

	while (ch = getchar() != '\n')
		continue;

	return ch;
}

int get_integer(void)
{
	int input;



	return input;
}