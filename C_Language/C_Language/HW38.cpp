//HW38 정해진 금액으로 물건구입하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

#define CREAMBREAD 500
#define SHIRIMPSNACK 700
#define COKE 400

int inputInt(const char*);
void myflush();
void output(int);

int main(void)
{
	int money;

	while (1)
	{
		money = inputInt("현재 당신의 소유 금액 입력('$'입력시 종료):");
		if (money == -1) { break; }
		if (money<0) {
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		output(money);
	}

	return 0;
}

void output(int money)
{
	int creamBreadCnt, shrimpSnackCnt, cokeCnt;
	if (money < COKE) { printf("살 수 있는 물건이 없습니다.\n"); }
	while (money >= CREAMBREAD)
	{
		money = money - CREAMBREAD;

	}
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (result == '$') { return -1; }
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