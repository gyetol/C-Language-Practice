//HW32 누승 함수 만들기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#include<string.h>

int inputInt(const char*);
double inputDouble(const char*);
void myflush();
double ipow(int, double);
double fpow(double, double);

int main(void)
{
	int menuNum;
	int integer;
	double intRes, realNum, exponent, doubleRes;

	while (1)
	{
		menuNum = inputInt("정수를 누승하려면 1, 실수를 누승하려면 2를 입력하세요:");

		switch (menuNum)
		{
		case 1:integer = inputInt("양의 정수 밑을 입력하시오:"); exponent = inputDouble("양의 승을 입력하시오:"); intRes = ipow(integer, exponent); printf("%d의 %.2lf승은 %.2lf입니다.\n", integer, exponent, intRes); break;
		case 2:realNum = inputDouble("양의 정수 밑을 입력하시오:"); exponent = inputDouble("양의 승을 입력하시오:"); doubleRes = fpow(realNum, exponent); printf("%.2lf의 %.2lf승은 %.2lf입니다.\n", realNum, exponent, doubleRes); break;
		}
	}

	return 0;
}

double ipow(int integer, double exponent)
{
	if (exponent == 0) { return 1; }
	if (integer == 0) { return 0; }

	int result = 1;

	/*if (exponent > 0 && exponent < 1) {

	}*/

	for (int i = 1; i <= exponent; i++)
	{
		result *= integer;
	}

	return result;
}

double fpow(double realNum, double exponent)
{
	if (exponent == 0) { return 1; }
	if (realNum == 0) { return 0; }

	double result = 1.0;

	for (int i = 1; i <= exponent; i++)
	{
		result *= realNum;
	}

	return result;
}

double inputDouble(const char* message)
{
	double result;
	int res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%lf%c", &result, &garbage);
		if (res == 2 && result >= 0 && garbage == '\n') {
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
			myflush();
		}
	}
	return result;
}


int inputInt(const char* message)
{
	int result, res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (strcmp(message, "정수를 누승하려면 1, 실수를 누승하려면 2를 입력하세요:") == 0) {
			if (res == 2 && (result == 1 || result == 2) && garbage == '\n') {
				break;
			}
			else {
				printf("잘못된 입력입니다.\n");
				myflush();
				continue;
			}
		}
		else {
			if (res == 2 && result >= 0 && garbage == '\n') {
				break;
			}
			else {
				printf("잘못된 입력입니다.\n");
				myflush();
				continue;
			}
		}

	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}

/////////////////////////////////////////////////
/*
pow라이브러리 함수 뜯어서 봤는데, 외계어라... 정수승에 만족하고 이만!!
*/