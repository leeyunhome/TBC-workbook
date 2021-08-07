#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Static variable with internal linkage
	- File scope, external linkage, static storage duration
	- Internal storage class
*/


static int g_int = 123;	// defining declaration

void fun();
void fun_second();
void fun_third();

int main()
{
	fun();
	fun_second();
	fun_third();

	return 0;
}

void fun()
{
	extern int g_int;	// optional

	g_int += 1;
	printf("g_int in fun() %d %p\n", g_int, &g_int);
}