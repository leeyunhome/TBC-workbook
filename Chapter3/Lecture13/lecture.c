#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 자료형이 가질수 있는 가장 작은 단위는 1바이트 이기 때문에
	// 바이트가 주소를 배정받을 수 있는 최소 단위
	printf("%u\n", sizeof(_Bool)); // 1 byte
	//printf("%zu\n", sizeof(_Bool));  // 1 byte, use %zu for size_t type

	_Bool b1;
	b1 = 0; // false
	b1 = 1;	// true

	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);

	return 0;
}