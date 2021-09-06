#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_HOURS 3600
#define MIN_PER_HOURS 60

int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	printf("Input seconds : ");
	scanf("%d", &seconds);



	while (seconds >= 0)
	{

		//minutes = seconds / 60;
		//seconds %= 60;

		//hours = minutes / 60;
		//minutes %= 60;

		{
			hours = seconds / SEC_PER_HOURS;
			minutes = (seconds % SEC_PER_HOURS) / MIN_PER_HOURS;
			seconds = seconds % SEC_PER_HOURS % MIN_PER_HOURS;
		}
	
		// print result
		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

		printf("Input seconds : ");
		scanf("%d", &seconds);
	}
	



	printf("Good bye\n");

	//int div, mod;
	



	return 0;
}