#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

int main()
{
	/* Creating Space */

	//char* name = "";	// Error at RUN-TIME
	/*char name[128];
	int result = scanf("%s", name);*/

	/*
		scanf() vs gets()
		scanf() reads one word
		gets() reads one line and removes \n and add \0
	*/
	
	//char words[STRLEN] = "";	// Warning without initialization
	////gets(words);				// gets receives pointer. No idea when string ends.
	//gets_s(words, sizeof(words));	// C11
	////int result = scanf("%s", words);
	//printf("START\n");
	//printf("%s", words);	// no \n at the end
	//puts(words);			// puts() adds \n at the end
	//puts("END.");

	//TODO: try char words[5];

	/* fgets() and fputs() */

	char words[STRLEN] = "";
	fgets(words, STRLEN, stdin);	// does NOT remove \n

	//TODO: replace '\n' with '\0'

	char* ptr = words;
	while (*ptr != '\n')
		ptr++;
	*ptr = '\0';

	fputs(words, stdout);			// does NOT add \n
	fputs("END", stdout);

	/* Small array */




	/* Repeating short reading */




	/* scanf() */




	/* An example of custom input function */
	



	return 0;
}

char* custom_string_input(char* st, int n)
{

}