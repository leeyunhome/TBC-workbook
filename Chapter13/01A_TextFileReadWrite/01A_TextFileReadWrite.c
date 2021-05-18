#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int ch;
	FILE* fr;	//TODO: file pointer to write

	unsigned long count = 0;

	if (argc != 2)
	{
		prntf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (NULL == (fr = fopen(argv[1], "r")))
	{
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fr)) != EOF) //getc(fr)
	{
		fputc(ch, stdout);
	}

	if (fclose(fr) != 0)
	{
		printf("ERROR: Cannot close file\n");
		exit(EXIT_FAILURE);
	}
	/*
	typedef struct _iobuf
	{
		char*   _ptr;
		int _cnt;
		char*   _base;
		int _flag;
		int _file;
		int _charbuf;
		int _bufsiz;
		char*   _tmpfname;
	} FILE;
	*/



	/*
		fopen mode strings for text files
		- r: reading
		- w: creating-and-writing or over-writing
		- a: appending or creating-and-writing
		- r+: both reading and writing
		- w+: reading and writing, over-writing or creating
		- a+: reading and writing, appending or creating
	*/





	return 0;
}

/*

//File Reading example

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
int main()
{
	int c;

	char file_name[] = "my_file.txt";//TODO: use scanf(...)



	return 0;
}
*/