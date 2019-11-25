//HW27 달걀 포장 프로그램 작성하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

double inputDouble(const char*);
void myflush();

int main(void)
{
	int eggCnt = 0;
	double eggWeight;
	while (eggCnt < 10)
	{
		eggWeight = inputDouble("계란의 무게를 입력하세요(단위:g):");
		if (eggWeight < 150) { printf("메추리알 가지고 장난하지 마시오~ ^^\n"); }
		else if (eggWeight > 500) { printf("타조알 가지고 장난하지 마시오~ ^^\n"); }
		else {
			eggCnt++;
			printf("현재 달걀의 수 : %d개\n", eggCnt);
		}
	}
	printf("달걀 포장이 끝났습니다.\n");

	return 0;
}

double inputDouble(const char* message)
{
	double result;
	int res;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%lf%c", &result, &garbage);
		if (res == 2 && garbage == '\n') { break; }
		else {
			printf("숫자를 입력하십시오\n");
			myflush();
			continue;
		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}