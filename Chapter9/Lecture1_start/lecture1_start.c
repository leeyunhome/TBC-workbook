#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// strlen()
#include <stdbool.h>

#define WIDTH	50
#define NAME	"Yun-Ho Lee"
#define ADDRESS "Seoul, Korea"

void print_char(char ch, int width, bool endl);
void print_centered_str(char* name);

int main()
{
	print_char('*', WIDTH, true);
	print_centered_str(NAME);
	print_centered_str(ADDRESS);
	print_centered_str("I love you");
	print_char('*', WIDTH, false);
	//printf("********************\n");
	//printf("           Your name\n");
	//printf("   City, Citizenship\n");
	//printf("********************\n");

	return 0;
}

void print_char(char ch, int width, bool print_newline)
{
	int r;

	for (r = 0; r < width; r++)
	{
		printf("%c", ch);	// putchar(c);
	}

	if (print_newline == true)
		printf("\n");
	//if ('*' == ch)
	//{
	//	for (r = 0; r < width; r++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//else if (' ' == ch)
	//{
	//	//fprintf(stderr, "%s=%d\n", __FUNCTION__, __LINE__);
	//	for (r = 0; r < width; r++)
	//	{
	//		printf(" ");
	//	}
	//}
}

void print_centered_str(char* name)
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(name)) / 2;
	//printf("n_blanks: %d\n", n_blanks);
	print_char(' ', n_blanks, false);
	printf("%s\n", name);
}
