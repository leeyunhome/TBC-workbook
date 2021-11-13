#include <stdio.h>

int main()
{
	int arr[5] = { 100, 200, 300, 400, 500 };

	int* ptr1, * ptr2, * ptr3;

	int i;
	ptr1 = arr;	// Assignment

	printf("%p %d %p\n", ptr1, *ptr1, &ptr1); // dereferencing

	ptr2 = &arr[2];

	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4;

	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	// Differencing
	printf("%td\n", ptr3 - ptr1); // Note: t is for pointer difference

	ptr3 = ptr3 - 4;

	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	ptr1++;
	ptr1--;
	--ptr1;
	++ptr1;

	if (ptr1 == ptr3)
		printf("Same\n");
	else
		printf("Different\n");

	double d = 3.14;
	double* ptr_d = &d;
	if (ptr1 == (int*)ptr_d)
		printf("Same\n");
	else
		printf("Different\n");

	return 0;
}


