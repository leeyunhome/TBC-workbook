#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);
	//	while (getchar() != '\n') continue;
	//	display(c, rows, cols);
	//	if (c == '\n')
	//		break;	// doesn't work well
	//}

	printf("Input one character and two integers:\n");
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n') continue;

		display(c, rows, cols);
		printf("Input another character and two integers:\n");
		printf("Press Enter to quit.\n");
	}

	return 0;
}

void display(char cr, int lines, int width)
{
	int r, c;
	for (r = 0; r < lines; r++)
	{
		for (c = 0; c < width; c++)
		{
			printf("%c", cr);
		}
		printf("\n");
	}
}
//void display(char cr, int lines, int width)
//{
//	int row, col;
//
//	for (row = 0; row < lines; ++row)
//	{
//		for (col = 0; col < width; ++col)
//			printf("%c", cr);
//		printf("\n");
//	}
//}