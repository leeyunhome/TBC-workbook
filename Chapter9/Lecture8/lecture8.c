#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	loop vs recursion
	factorial : 3! = 3 * 2 * 1, 0! = 1
	5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 * 0!
*/

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
	int num = 3;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;
}

long loop_factorial(int n)
{
	int i;
	long ans = 1;

	for (i = 2; i <= n; ++i)
	{
		ans *= i;
	}

	return ans;
}

long recursive_factorial(int n)
{
	if (n == 0)
		return 1;

	return n * recursive_factorial(n - 1); // tail (end) recursion
}
