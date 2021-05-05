#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int  get_integer(void);
void count(void);

int main()
{
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
	/*char sel = 0;

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
	}*/
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
	int ch;

	ch = getchar();
	//scanf("%c", &ch);

	while (getchar() != '\n')
		continue;

	return ch;
}

int get_integer(void)
{
	int input;
	char c;

	while (scanf("%d", &input) != 1)
	{
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" is not an integer.\nPlease try again.\n");
	}

	return input;
}