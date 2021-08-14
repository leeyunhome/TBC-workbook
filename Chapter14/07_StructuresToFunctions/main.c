#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define FUNDLEN 50

struct fortune {
	char bank_name[FUNDLEN];
	double bank_saving;
	char fund_name[FUNDLEN];
	double fund_invest;

	//float* arr; // 주소를 복사해요
};

double sum(const struct fortune *my_fortune);

int main()
{
	struct fortune my_fortune = {
		"Wells-Fargo",
		123.45,
		"JPMorgan Chase",
		6789.7
	};

	printf("Total : $%.2f.\n",
		sum(&my_fortune));

	return 0;
}

double sum(const struct fortune *mf)	//TOOD: try pointers
{
	return mf->bank_saving + mf->fund_invest; // 포인터기 때문에 -> 오퍼레이터
}