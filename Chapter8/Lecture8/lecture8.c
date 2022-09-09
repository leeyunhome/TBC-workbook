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

char get_choice(void)
{
	int user_input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\n");
	printf("c. count\tq. quit\n");

	user_input = get_first_char();

	while ((user_input < 'a' || user_input > 'c') && user_input != 'q')
	{
		printf("Please try again.\n");
		user_input = get_first_char();
	}

	return user_input;
}

char get_first_char(void)
{
	char ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}

int  get_integer(void)
{
	int number;
	char c;

	printf("Enter an integer:\n");

	int flag = scanf("%d", &number);
	while (1 != flag)
	{
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" is not an integer. Wrong input. please try again.\n");
	}

	return number;
}

void count(void)
{
	int idx;
	int number = 0;
	
	number = get_integer();

	for (idx = 0; idx < number; idx++)
	{
		printf("%d\n", idx + 1);
	}
	while (getchar() != '\n')
		continue;
}
//
//void count(void)
//{
//	int input = 0;
//	int i;
//
//	//scanf("%d", &input);
//	printf("Enter an integer:\n");
//	input = get_integer();
//
//	for (i = 1; i <= input; ++i)
//		printf("%d\n", i);
//
//	while (getchar() != '\n')
//		continue;
//}
//
////void count(void)
////{
////
////
////
////}
////
//char get_choice(void)
//{
//	int user_input;
//	
//	printf("Enter\n>> ");
//	int flag = scanf("%c", &user_input);
//
//
//
//
//	return (char)user_input;
//}
////
////char get_first_char(void)
////{
////	int ch;
////
////
////
////
////
////	return ch;
////}
////
//int get_integer(void)
//{
//	int input;
//
//	//int flag = scanf("%d", &input);
//	while (1 != scanf("%d", &input))
//	{
//		char ch = '\0';
//		printf("Your input - ");
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf("- is not an integer. please try again.\n");
//	}
//
//	return input;
//}