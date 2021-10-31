#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12

int main()
{
	/* Basic usage */
	int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };

	//for (int r = 0; r < MONTHS; ++r)
	//	printf("%d ", high[r]);
	//printf("\n");

	//float avg = 0.0;
	//for (int r = 0; r < MONTHS; r++)
	//	avg += high[r];
	//printf("Average = %f\n", avg / (float)MONTHS);

	//high[0] = 1;
	//high[1] = 2;

	///* Addresses */
	//printf("%p %p\n", high, &high[0]);
	//for (int c = 0; c < MONTHS; c++)
	//	printf("%lld\n", (long long)&high[c]);
	//printf("\n");

	/* Compiler doesn't check whether indices are valid.*/
	//high[12] = 4;	// Error
	//high[-1] = 123;	// Error

	/* const and array */
	//const int temp = 0;
	//temp = 4;
	//const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5 };
	//low[0] = 123;

	/* When array is not initialized */
	///*static */int not_init[4];	// TODO: try static (storage class)
	//for (int r = 0; r < 4; r++)
	//	printf("%d\n", not_init[r]);

	/* Partially initialized */
	//int insuff[4] = { 2, 4 };
	//for (int r = 0; r < 4; r++)
	//	printf("%d\n", insuff[r]);

	/* Overlly initialized */
	//int over[2] = { 2, 4, 8, 16 };

	/* Omitting size */
	//const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64 };
	//printf("%d\n", sizeof(power_of_twos));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(power_of_twos[0]));

	//for (int c = 0; c < sizeof power_of_twos / sizeof power_of_twos[0]; c++)
	//	printf("%d ", power_of_twos[c]);

	/* Designated initializers */
	int days[MONTHS] = { 31, 28,[4] = 31, 30, 31,[1] = 29 };
	for (int c = 0; c < MONTHS; c++)
		printf("%d ", days[c]);

	/* Specifying Array sizes */
	int arr1[MONTHS];	// Symbolic integer constant, 양의정수
	double arr2[123];	// Literal integer constant
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	// float arr5[-10];		// No
	// float arr6[0];		// No
	// float arr7[1.5]; // No
	float arr8[(int)1.5];	// Yes

	// int n = 8;
	//float arr9[n];		// Variable-Length Array is optional from C11

	/*
	int n = 5;
	float arr[n];

	for (int r = 0; r < n; r++)
		arr[r] = (float)r;

	for (int r = 0; r < n; r++)
		printf("%f ", arr[r]);
	*/
	return 0;
}