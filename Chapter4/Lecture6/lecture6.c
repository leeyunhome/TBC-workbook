#include <stdio.h>
#include <limits.h> // INT_MAX, ..., etc.
#include <float.h> // FLT_MAX, ..., etc.


#define PI 3.141592	// manifest constants, symbolic constants

int main()
{
	printf("PI is %f\n", PI);
	printf("BIggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d bits\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN); // float에서 가장 작은 양의 실수가 몇이냐

	return 0;
}