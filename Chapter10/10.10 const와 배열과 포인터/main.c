#include <stdio.h>

int main()
{
	// type qualifiers: const, volatile, ...

	double PI = 3.14159;
	PI = 2.14159;

	int arr[5] = { 1, 2, 3, 4, 5 };
	arr[1] = 123;

	double arr2[3] = { 1.0, 2.0, 3.0 };
	arr2[0] = 100.0;

	double* pd = arr2;

	return 0;
}


