#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Storage Classes and Functions
	- Functions external (by default) or static
	- A function declaration is assumed to be extern
*/

int g_int = 123; //defining declaration

extern void fun();
void fun_second();

int main()
{
	fun();
	fun_second();

	return 0;
}

void fun()
{


}