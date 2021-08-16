#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
void Transpose(char* str);//TODO: add a new menu

int main()
{
	char options[] = { 'u', 'l', 't' }; // TODO: add a new menu
	int n = sizeof(options) / sizeof(char);

	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower, Transpose }; // TODO: add a new menu

	printf("Enter a string\n>> ");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again.\n");

	while (true)
	{
		printf("Choose an option:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) to transpose\n");

		char c = 0;
		int flag = scanf("%c", &c);
		bool found = false;

		// 여기가 가장 중요한 엔진부분이잖아요?
		// 기능을 실제로 수행하는 부분입니다.
		// 근데 요 부분은 고칠 게 없어요.
		for (int i = 0; i < n; ++i)
		{
			if (c == options[i])
			{
				operations[i](input);
				found = true;
				break;
			}
		}

		if (found)
			break;
		else
			printf("Wrong input, try again\n");
	}
	
	/*
	while (true)
	{
		fprintf(stderr, "%s=%d\n", __FUNCTION__, __LINE__);

		printf("Choose an option:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) to transpose\n");//TODO: add a new menu

		char ch = 0;
		int flag = scanf("%c", &ch);
		bool found = false;

		for (int i = 0; i < n; ++i)
			if (ch == options[i])
			{
				(*(operations[i]))(input);
				found = true;
				break;
			}

		if (found)
			break;
		else
			printf("Wrong input, try again\n");
		//switch (ch)
		//{
		//	fprintf(stderr, "%s=%d\n", __FUNCTION__, __LINE__);
		//case 'u':
		//	ToUpper(input);
		//	break;
		//case 'l':
		//	ToLower(input);
		//default:
		//	;
		//}
	}
	*/
	printf("%s\n", input);

	return 0;
}

void update_string(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = pf(*str);
		str++;
	}
}
void ToUpper(char* str)
{
	update_string(str, toupper);
	//while (*str)
	//{
	//	*str = toupper(*str);
	//	str++;
	//}
}
void ToLower(char* str)
{
	update_string(str, tolower);
	//while (*str)
	//{
	//	*str = tolower(*str);
	//	str++;
	//}
}
void Transpose(char* str)//TODO: add a new menu
{
	while (*str)
	{
		if (islower(*str))
			*str = toupper(*str);
		else if (isupper(*str))
			*str = tolower(*str);
		str++;
	}
}
//
//void update_string(char* str, int(*pf)(int))
//{
//	while (*str)
//	{
//		*str = pf(*str);
//		str++;
//	}
//}
//
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//void ToLower(char* str)
//{
//	while (*str)
//	{
//		*str = tolower(*str);
//		str++;
//	}
//}
//
//void Transpose(char* str)
//{
//	while (*str)
//	{
//		if (islower(*str))
//			*str = toupper(*str);
//		else if (isupper(*str))
//			*str = tolower(*str);
//		str++;
//	}
//}