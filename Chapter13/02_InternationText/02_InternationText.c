#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>	// SetConsoleOutputCP()

int main()
{
	const UINT default_cp = GetConsoleOutputCP();
	printf("%u\n", default_cp);

	int ch;
	FILE* fr, * fw;

	const char* in_filename = "����.txt";
	const char* out_filename = "�纻.txt";

	if (NULL == (fr = fopen(in_filename, "r")))
	{
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	if (NULL == (fw = fopen(out_filename, "w")))
	{
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	SetConsoleOutputCP(CP_UTF8);// UTF-8 mode

	while ((ch = fgetc(fr)) != EOF)
	{
		fputc(ch, stdout);
		fputc(ch, fw);

	}

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


	SetConsoleOutputCP(default_cp);// ISO 2022 Korean

	


	printf("�ѱ� ��� Ȯ��");

	return 0;
}
