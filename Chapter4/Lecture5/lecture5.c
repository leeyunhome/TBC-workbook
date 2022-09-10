#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "Friday"

int main()
{
	const float pi = 3.141592f;

	float radius, area, circum;

	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	int flag = scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0f * PI * radius;

	// sphere area, sphere volume, ....

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	//TODO: wrong usage, strings, const

	return 0;
}