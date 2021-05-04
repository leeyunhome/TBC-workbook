#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int  get_integer(void);
void count(void);

int main()
{
	char sel = 0;

	printf("a. Assemble\tb. beep\n");
	printf("c. count\t4. q to quit.\n");

	sel = get_choice();

	switch (sel)
	{
	case 'a':
		printf("Avengers Assemble.\n");
		break;
	case 'b':
		printf("\a");
		break;
	case 'c':
		count();
		break;
	default:
		break;
	}
	return 0;
}

void count(void)
{
	int input = 0;
	int i;

	scanf("%d", &input);

	for (i = 0; i < input; ++i)
	{
		printf("%d\n", input - i);
	}

}

char get_choice(void)
{
	int user_input;
	
	scanf("%d", &user_input);

	return user_input;
}

char get_first_char(void)
{
	int ch;

	scanf("%c", &ch);

	while (getchar() != '\n')
		continue;

	return ch;
}

int get_integer(void)
{
	int input;

	while (scanf("%d", &input) != 1)
	{
		printf("Wrong input. Please try again.\n");
	}

	return input;
}