//HW31 은행계좌 입출금 관리 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

char menu();
int inputInt(const char*);
void myflush();
void deposit(int*);
void withdraw(int*);

int main(void)
{
	char menuSymbol;
	int money = 0;

	while (1)
	{
		menuSymbol = menu();
		switch (menuSymbol)
		{
		case 'i': deposit(&money); break;
		case 'o': withdraw(&money); break;
		case 'q': printf("프로그램을 종료합니다.\n"); break;
		}
		if (menuSymbol == 'q') { break; }
	}
	return 0;
}

void withdraw(int* money)
{
	int moneyToWithdraw;
	moneyToWithdraw = inputInt("출금액을 입력하세요:");
	if (*money < moneyToWithdraw) {
		printf("잔액이 부족합니다.\n");
		printf("현재 잔액은 %d원입니다.\n", *money);
		return;
	}
	*money -= moneyToWithdraw;
	printf("현재 잔액은 %d원입니다.\n", *money);

	return;
}

void deposit(int* money)
{
	int moneyToDeposit;
	moneyToDeposit = inputInt("입금액을 입력하세요:");
	*money += moneyToDeposit;
	printf("현재 잔액은 %d원입니다.\n", *money);

	return;
}

char menu()
{
	char menuSymbol;

	while (1)
	{
		printf("실행할 메뉴문자를 입력하세요:");
		scanf("%c", &menuSymbol);
		if (menuSymbol == 'i' || menuSymbol == 'o' || menuSymbol == 'q') { break; }
		else {
			printf("메뉴번호를 잘못입력하셨습니다.\n");
			myflush();
			continue;
		}
	}
	return menuSymbol;
}

int inputInt(const char* message)
{
	int result, res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && result > 0 && garbage == '\n') {
			break;
		}
		else if (res == 2 && result <= 0 && garbage == '\n') {
			printf("잘못된 입력입니다.\n");
			continue;
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