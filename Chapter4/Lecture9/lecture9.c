#include <stdio.h>

int main()
{
	//float	n1 = 3.14;	// 4 bytes
	//float n1 = 3.14f;
	//double	n2 = 1.234;	// 8 bytes
	//int		n3 = 1024;	// 4 bytes

	float  n1 = 3.14;	// 4bytes
	double n2 = 1.234;	// 8 bytes
	int    n3 = 1024;	// 4bytes

	printf("%f %f %d\n\n", n1, n2, n3);

	// Note the warnings in output window
	printf("%d %d %d\n\n", n1, n2, n3);
	printf("%lld %lld %d\n\n", n1, n2, n3);
	printf("%f %d %d\n\n", n1, n2, n3);
	printf("%f %lld %d\n\n", n1, n2, n3);

	return 0;
}