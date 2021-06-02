#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
//void print_books(const struct book books[], int n);

int main()
{
	//struct book my_books[3];// = { {"The Great Gatsby", "F. Scott Fitzgerald"}, ... };
	struct book* my_books = (struct book*)malloc(sizeof(struct book) * 3);

	if (my_books == NULL)
	{
		printf("ERROR: Malloc failed.\n");
		//exit(EXIT_FAILURE);
		return -1;
	}

	my_books[0] = (struct book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct book){ "Hamlet", "William Shakespeare" };
	my_books[2] = (struct book){ "The Odyssey", "Homer" };

	print_books(my_books, 3);

	return 0;
}


//void print_books(const struct book books[], int n)
//{
//	for (int number_of_book = 0; number_of_book < n; number_of_book++)
//	{
//		printf("Book %d : \"%s\" written by \"%s\"\n", number_of_book + 1,
//			books[number_of_book].name, books[number_of_book].author);
//	}
//}

void print_books(const struct book *books, int n)
{
	for (int number_of_book = 0; number_of_book < n; number_of_book++)
	{
		printf("Book %d : \"%s\" written by \"%s\"\n", number_of_book + 1,
			books[number_of_book].name, books[number_of_book].author);
	}

}