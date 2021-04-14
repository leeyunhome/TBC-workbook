#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int ch;
	FILE* fr, * fw;

	const char* out_filename = "copy.txt";

	unsigned long count = 0;

	if (NULL == (fr = fopen("input.txt", "r")))
	{
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	if (NULL == (fw = fopen(out_filename, "w")))
	{
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fr)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, fw);

		count++;
	}

	printf("number of character : %ul\n", count);

	if (fclose(fr) != 0)
	{
		printf("ERROR: Cannot close file\n");
		exit(EXIT_FAILURE);
	}

	if (fclose(fw) != 0)
	{
		printf("ERROR: Cannot close file\n");
		exit(EXIT_FAILURE);
	}



	return 0;
}

