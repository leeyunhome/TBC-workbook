#include <stdio.h>
#include <stdbool.h>

int main()
{
	// �ڷ����� ������ �ִ� ���� ���� ������ 1����Ʈ �̱� ������
	// ����Ʈ�� �ּҸ� �������� �� �ִ� �ּ� ����
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