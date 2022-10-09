#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// getchar(), putchar()

int main()
{
	/*
		 1. Intoduce getchar(), putchar()
		 2. Use while loop to process character sequences
		 3. Filter a specific character
		 4. Convert numbers to asterisks
		 5. Lower characters to Upper characters
	*/

	int ch;

	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';
		else if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';

		//if (ch >= '0' && ch <= '9')
		//	ch = '*';

		//if (ch == 'f' || ch == 'F')
		//	ch = 'X';

		//else if (ch == 'F')
		//	ch = 'X';

		putchar(ch);
	}

	putchar(ch);

	return 0;
}