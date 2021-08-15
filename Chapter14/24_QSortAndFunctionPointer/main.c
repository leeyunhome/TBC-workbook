#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct kid
{
	char name[100];
	int height;
};

//TODO: try increasing/decreasing order
//int compare(const void* first, const void* second)
//{
//	if (*(float*)first > *(float*)second)
//		return 1;
//	else if (*(float*)first < *(float*)second)
//		return -1;
//	else
//		return 0;
//}
int compare(const void* first, const void* second);

int main()
{
	//int arr[] = { 8, 2, 5, 3, 6, 11 };
	//float arr[] = { 8.1f, 2.4f, 5.6f, 3.2f, 6.1f, 11.0f };
	//int n = sizeof(arr) / sizeof(arr[0]);

	struct kid my_friends[] = {
		"Jack Jack", 40, "Geenie", 300, "Unicorn", 170, "Piona", 150
	};

	const int n = sizeof(my_friends) / sizeof(struct kid);

	qsort(my_friends, n, sizeof(struct kid), compare);

	for (int i = 0; i < n; i++)
		printf("%s	\t%d\n", my_friends[i].name, my_friends[i].height);

	return 0;
}

int compare(const void* first, const void* second)
{
	if ((*(struct kid*)(first)).height > (*(struct kid*)(second)).height)
		return 1;
	else if ((*(struct kid*)(first)).height < (*(struct kid*)(second)).height)
		return -1;
	else
		return 0;
}