#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // malloc()

//이 자료형이 차지하는 메모리의 크기

struct MyStruct
{
	int i;
	float f;
};

int main()
{
	/* 1. sizeof basic types */

	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1);
	printf("Size of int type is %zu bytes.\n", int_size4);
	printf("Size of float type is %zu bytes.\n", float_size);

	/* 2. sizeof arrays */

	////  컴파일타임에 결정
	//int int_arr[30]; // int_arr[0] = 1024; ...

	//// 런타임에 결정
	//int* int_ptr = NULL;
	//int_ptr = (int*)malloc(sizeof(int) * 30);	// int_ptr[0] = 1024; ...

	//printf("Size of array = %zu bytes\n", sizeof int_arr);
	//// 사용할 때만 잠깐 대표주소로 바뀌는 식이다.
	//printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

	/* 3. sizeof character array */

	char c = 'a';
	char string[10]; // maximally 9 character + '/0' (null character)

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes.\n", str_size);


	/* 4. sizeof structure */

	printf("%zu\n", sizeof(struct MyStruct));

	return 0;
}