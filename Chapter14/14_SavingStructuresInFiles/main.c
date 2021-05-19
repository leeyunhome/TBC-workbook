#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char * filename, const struct book* books, int n);
struct book* read_books(const char* filename, int * n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);

	if (!my_books)
	{
		printf("ERROR: Malloc failed.\n");
		exit(EXIT_FAILURE);
	}

	my_books[0] = (struct book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct book){ "Hamlet", "William Shakespeare" };
	my_books[2] = (struct book){ "The Odyssey", "Homer" };

	print_books(my_books, n);

	printf("\nWriting to a file.\n");
	write_books("books.dat", my_books, n);
	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file.\n\n");
	temp = _getch();

	//my_books = read_books("books.txt", &n);
	read_books2("books.dat", &my_books, &n);

	print_books(my_books, n);

	free(my_books);
	n = 0;

	return 0;
}

void print_books(const struct book* books, int n)
{
	for (int row = 0; row < n; ++row)
		printf("book %d \"%s\" written by \"%s\"\n", 
			row + 1, books[row].name, books[row].author);
}

void write_books(const char* filename, const struct book* books, int n)
{
	FILE* fw = NULL;
	if (NULL == (fw = fopen(filename, "wb")))
	{
		printf("ERROR: Cannot open %s file.\n", filename);
		exit(EXIT_FAILURE);
	}

	fwrite(&n, sizeof(int), 1, fw);

	//for (int row = 0; row < n; row++)
	//{
	fwrite(books, sizeof(struct book), n, fw);
	//}
	
	if (0 != fclose(fw))
	{
		puts("ERROR: Cannot close file.");
	}
}

struct book* read_books(const char* filename, int * n_ptr)
{
	FILE* fr = NULL;
	int temp = 0;
	
	if (NULL == (fr = fopen(filename, "r")))
	{
		printf("ERROR: Cannot open %s file.\n", filename);
		exit(EXIT_FAILURE);
	}

	int flag = fscanf(fr, "%d%*c", &temp);
	*n_ptr = temp;

	//struct book* books = (struct book*)malloc(sizeof(struct book) * *n_ptr);
	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);

	if (books == NULL)
	{
		printf("ERROR: Malloc failed.\n");
		exit(1);
	}

	for (int row = 0; row < *n_ptr; row++)
	{
		flag = fscanf(fr, "%[^\n]%*c", books[row].name);

		if (flag != 1)
		{
			printf("File read failed");
			exit(1);
		}

		flag = fscanf(fr, "%[^\n]%*c", books[row].author);

		if (flag != 1)
		{
			printf("File read failed");
			exit(1);
		}
	}

	if (0 != fclose(fr))
	{
		puts("ERROR: Cannot close file.");
	}

	return books;
}

void read_books2(const char* filename, struct book** books_dptr, int* n_ptr)//Note: double pointer
{
	FILE* fr = NULL;

	if (NULL == (fr = fopen(filename, "rb")))
	{
		printf("ERROR: Cannot open %s file.\n", filename);
		exit(1);
	}

	//int flag = fscanf(fr, "%d%*c", n_ptr);
	fread(n_ptr, sizeof(*n_ptr), 1, fr);

	(*books_dptr) = (struct book*)malloc(sizeof(struct book) * *n_ptr);
	//struct book *books = (struct book*)malloc(sizeof(struct book) * *n_ptr);

	if (*books_dptr == NULL)
	{
		printf("ERROR: Malloc failed.\n");
		exit(1);
	}

	fread(*books_dptr, sizeof(struct book), *n_ptr, fr);

	if (0 != fclose(fr))
	{
		puts("ERROR: Cannot close file.");
	}
}