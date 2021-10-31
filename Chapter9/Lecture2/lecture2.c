#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// strlen()
#include <stdbool.h>

#define WIDTH	25
#define NAME	"Your name"
#define ADDRESS "City, Citizenship"

void print_centered_str(char str[]);
void print_multiple_chars(char c, int n_stars, bool print_newline);// prototype

int main()
{
	print_multiple_chars('*', WIDTH, true);	// argument

	print_centered_str(NAME);
	print_centered_str(ADDRESS);
	print_centered_str("I love you");

	print_multiple_chars('*', WIDTH, false);	// argument

	return 0;
}


void print_multiple_chars(char c, int n_stars, bool print_newline)// formal (argument/parameter)
{
	int r;
	for (r = 0; r < n_stars; r++)
	{
		printf("%c", c);
	}

	if (print_newline)
		printf("\n");
}

void print_centered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks, false);
	printf("%s\n", str);
}

