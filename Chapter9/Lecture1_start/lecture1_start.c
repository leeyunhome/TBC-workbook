#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// strlen()

#define WIDTH	50
#define NAME	"Yun-Ho Lee"
#define ADDRESS "Seoul, Korea"

void print_char(char ch, int width);
void print_name(char* name);
void print_addr(char* addr);

int main()
{
	print_char('*', WIDTH);
	print_char(' ', WIDTH);
	print_name(NAME);
	print_char(' ', WIDTH);
	printf("\n");
	print_char(' ', WIDTH);
	print_addr(ADDRESS);
	print_char(' ', WIDTH);
	printf("\n");
	print_char('*', WIDTH);
	//printf("********************\n");
	//printf("           Your name\n");
	//printf("   City, Citizenship\n");
	//printf("********************\n");

	return 0;
}

void print_char(char ch, int width)
{
	int r;

	if ('*' == ch)
	{
		for (r = 0; r < width; r++)
		{
			printf("*");
		}
		printf("\n");
	}
	else if (' ' == ch)
	{
		for (r = 0; r < (width - strlen(NAME)) / 2; r++)
		{
			printf(" ");
		}
	}
}

void print_name(char* name)
{
	printf("%s", name);
}

void print_addr(char* addr)
{
	printf("%s", addr);
}