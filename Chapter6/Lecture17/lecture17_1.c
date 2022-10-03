#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main()
{
	//int number_of_input = 0;
	int input_num[SIZE] = { 0, };
	int total_sum = 0;
	int r;
	int flag = 0;
	//printf("Input number of input : ");
	//int flag = scanf("%d", &number_of_input);
	//printf("Enter %d numbers : ___\b\b\b", number_of_input);
	printf("Enter 5 numbers : ___\b\b\b");

	for (r = 0; r < SIZE; r++)
	{
		flag = scanf("%d", &input_num[r]);
		total_sum += input_num[r];
	}

	printf("Sum = %d\n", total_sum);

	///* Motivation */
	////int i1 = 0;
	////int i2 = 1;
	////int i3 = 2;
	////// ...

	////printf("%d\n", i1);
	////printf("%d\n", i2);
	////printf("%d\n", i3);
	////// ... 

	//int my_arr[SIZE];

	//// prepare for array data
	//for (int i = 0; i < SIZE; i++)
	//{
	//	my_arr[i] = i * i;
	//}

	//// print array data
	//for (int i = 0; i < SIZE; i++)
	//	printf("%d ", my_arr[i]);

	////TODO: try debugger

	return 0;
}