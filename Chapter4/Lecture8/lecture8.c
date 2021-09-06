#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);	// - flag
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567);
	printf("%.3f\n", 123456.1235);
	printf("%10.3f\n", 123.45678);
	//printf("%10i\n", 1234567);
	//printf("%10i\n", 1234567);
	//printf("%10i\n", 1234567);
	//printf("%10i\n", 1234567);
	//printf("%10i\n", 1234567);



	return 0;
}