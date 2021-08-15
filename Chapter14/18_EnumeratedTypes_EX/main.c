#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp (HINT!)
#include <stdbool.h>// C99

enum spectrum {red, orange, yellow, green, blue};
const char* colors[] = { "red", "orange", "yellow", "green", "blue" };

#define LEN 30

int main()
{
	char choice[LEN] = { 0, };
	enum spectrum color;
	bool color_is_found = false;
	
	while (1)
	{
		puts("Input a color name (empty line to quit):");

		int flag = scanf("%[^\n]%*c", choice);

		//fprintf(stderr, "%s=%d, choice : %s\n", __FUNCTION__, __LINE__, choice);

		if (1 != flag)
		{
			break;
		}
		else
		{
			for (int idx = red; idx <= blue; ++idx)
			{
				if (0 == strcmp(choice, colors[idx]))
				{
					//printf("%s\n", colors[idx]);
					color_is_found = true;
					color = idx;
				}
				//else
				//{
				//	printf("Please try different color %s.\n", choice);
				//	color_is_found = false;
				//	break;
				//}
			}
		}

		if (true == color_is_found)
			switch (color)
			{
			case red:
				puts("Red roses");
				break;
			case orange:
				puts("Oranges are delicious");
				break;
			case yellow:
				puts("Yellow sunflowers");
				break;
			case green:
				puts("Green house");
				break;
			case blue:
				puts("blue frame");
				break;
			default:
				break;
			}
		else
		{
			printf("Please try different color %s.\n", choice);
		}
		color_is_found = false;

			//if (0 == strcmp(colors[color], "red"))
			//	printf("red cap\n");
			//else if (0 == strcmp(colors[color], "orange"))
			//	printf("orange ball\n");
			//else if (0 == strcmp(colors[color], "yellow"))
			//	printf("yellow umbrella\n");
			//else if (0 == strcmp(colors[color], "green"))
			//	printf("green house\n");
			//else if (0 == strcmp(colors[color], "blue"))
			//	printf("blue frame\n");

	}

	puts("Goodbye!");

	return 0;
}
