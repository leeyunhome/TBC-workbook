#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int  get_integer(void);
void count(void);

int main()
{
	//printf("Select menu");
	//printf("1. input an char\t2. ");

	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;
		case 'b':
			putchar('\a'); // Beep
			break;
		case 'c':
			count();
			break;
		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
	}
	//char sel = 0;



	return 0;
}

void count(void)
{
	int input = 0;
	int i;

	//scanf("%d", &input);
	printf("Enter an integer:\n");
	input = get_integer();

	for (i = 1; i <= input; ++i)
		printf("%d\n", i);

	while (getchar() != '\n')
		continue;
}

//void count(void)
//{
//
//
//
//}
//
char get_choice(void)
{
	int user_input;
	
	printf("Enter\n>> ");
	int flag = scanf("%c", &user_input);




	return (char)user_input;
}
//
//char get_first_char(void)
//{
//	int ch;
//
//
//
//
//
//	return ch;
//}
//
int get_integer(void)
{
	int input;

	//int flag = scanf("%d", &input);
	while (1 != scanf("%d", &input))
	{
		char ch = '\0';
		printf("Your input - ");
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("- is not an integer. please try again.\n");
	}

	return input;
}