#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
	float num;
	int count = 0;
	float min = FLT_MAX;
	float max = -FLT_MAX;
	
	float sum = 0.0f;

	while (scanf("%f", &num) == 1)
	{
		if (num < 0.0f || num > 100.0f)
			continue;

		//if (num > 100.0f)
		//	continue;

		sum += num;

		//if (num < min)
		//{
		//	min = num;
		//}
		//else if (num > max)
		//{
		//	max = num;
		//}

		(num < min) ? (min = num) : (min = min);
		(num > max) ? (max = num) : (max = max);

		count++;
	}

	// 0으로는 나눌 수가 없죠.
	if (count > 0)
		printf("min : %f, max : %f, ave : %.2f\n", min, max, (sum / count));
	else
		printf("No input\n");

	return 0;
}