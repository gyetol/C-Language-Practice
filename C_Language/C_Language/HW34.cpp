//HW34 수도요금 계산 프로그램 
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#define TAX_RATE 0.05
#define HOME 50
#define COMMERCIAL 45
#define INDUSTRIAL 30


int inputInt(const char*);
double cal(int code, int amount);
void output(int, int, double);
void myflush();

int main(void)
{
	int code, amount;
	double charge;

	while (1)
	{
		code = inputInt("사용자 코드를 입력하시오:(1.가정용/ 2.상업용/ 3.공업용):");
		if (code < 1 || code>3) {
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		else { break; }
	}
	while (1)
	{
		amount = inputInt("사용량을 입력하시오(ton단위):");
		if (amount < 0) {
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		else { break; }
	}

	charge = cal(code, amount);
	output(code, amount, charge);

	return 0;
}

void output(int code, int amount, double charge)
{
	printf("사용자코드: %d", code);
	switch (code)
	{
	case 1: printf("(가정용)\n"); break;
	case 2: printf("(상업용)\n"); break;
	case 3: printf("(공업용)\n"); break;
	}
	printf("사용량: %d ton\n", amount);
	printf("총수도요금: %.0lf원\n", charge);

	return;
}

double cal(int code, int amount)
{
	double charge;

	switch (code)
	{
	case 1: charge = HOME * amount*(1 + TAX_RATE); break;
	case 2: charge = COMMERCIAL * amount*(1 + TAX_RATE); break;
	case 3: charge = INDUSTRIAL * amount*(1 + TAX_RATE); break;
	}

	return charge;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n') {
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
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