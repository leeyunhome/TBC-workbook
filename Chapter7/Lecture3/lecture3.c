#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>	// isalpha() and more

/*
	Reference link
	https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
*/

int main()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);

		if (0 != isdigit(ch))
			ch = '*';

		putchar(ch);
	}

	return 0;
}