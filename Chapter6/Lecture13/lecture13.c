#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int ans = 337;
	int predict = 0;

	do
	{
		printf("Enter secret code : ");
		int flag = scanf("%d", &predict);

	} 
	while (ans != predict);

	printf("Good!");

	return 0;
}












//const int secret_code = 337;
//int guess = 0;
//
//printf("Enter secret code : ");
//scanf("%d", &guess);
//
//while (guess != secret_code)
//{
//	printf("Enter secret code : ");
//	scanf("%d", &guess);
//}
//
//do
//{
//	printf("Enter secret code : ");
//	scanf("%d", &guess);
//} while (guess != secret_code);
//
//printf("Good!");