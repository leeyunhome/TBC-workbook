#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '.'

int main()
{
	int n_char = 0, n_word = 0, n_line = 0;
	int flag = 0;
	int ch = 0;
	bool is_word = false;
	bool is_line = false;

	printf("Enter text :\n");
	
	while ((ch = getchar()) != STOP)
	{
		//fprintf(stderr, "%s=%d, isblank : %d\n", __FUNCTION__, __LINE__, isblank(ch));
		if (!isblank(ch))
		{
			n_char++; // count non-space characters
		}

		if (!isblank(ch) && !is_word)
		{
			n_word++;
			is_word = true;
		}

		if (!isblank(ch) && !is_line)
		{
			n_line++;
			is_line = true;
		}

		if (ch == '\n')
		{
			is_line = true;
			is_word = true;
		}
		
		//if (isspace(ch))
		//{
		//	is_word = false;
		//	is_line = false;
		//}
	}

	printf("Characters = %d, Words = %d, Lines = %d\n", n_char, n_word, n_line);


	return 0;
}

