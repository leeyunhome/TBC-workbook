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

	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin);	// does NOT remove \n

	////TODO: replace '\n' with '\0'
	//int i = 0;
	//while (words[i] != '\n' && words[i] != '\0')
	//	i++;
	//if (words[i] == '\n')
	//	words[i] = '\0';

	////char* ptr = words;
	////while (*ptr != '\n')
	////	ptr++;
	////*ptr = '\0';

	//fputs(words, stdout);			// does NOT add \n
	//fputs("END", stdout);

	/* Small array */

	//char small_array[5];
	//puts("Enter long strings:");
	////fgets(small_array, 5, stdin);	// FILE *_Stream
	//printf("%p\n", small_array);
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fputs(small_array, stdout);

	/* Repeating short reading */

	//char small_array[5];
	//puts("Enter long strings:");
	//while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
	//	fputs(small_array, stdout);

	/* scanf() */

	//char str1[6], str2[6];
	////int count = scanf("%5s %5s", str1, str2);
	////int count = scanf("%6s %6s", str1, str2);	// run-time error
	//int count = scanf_s("%5s %5s", str1, 6, str2, 6);
	//printf("%s|%s \n", str1, str2);

	/* An example of custom input function */
	char word[11];
	puts(custom_string_input(word, 11));

	return 0;
}

// implemented by myself
//char* custom_string_input(char* st, int n)
//{
//	char buffer[STRLEN];
//	printf("Enter a string.\n");
//
//	fgets(buffer, n, stdin);
//	buffer[n] = '\0';
//	//gets(buffer);
//	//buffer[n] = '\0';
//	////puts(buffer);
//	////for (int i = 0; i < n; i++)
//	////	buffer[i] = st[i];
//	
//	return buffer;
//}

char* custom_string_input(char* st, int n)
{
	char* ret_ptr;
	int i = 0;

	ret_ptr = fgets(st, n, stdin);
	if (ret_ptr)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
		{
			st[i] = '\0';
		}
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}
	return ret_ptr;
}