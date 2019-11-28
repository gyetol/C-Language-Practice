//HW31 ������� ����� ���� ���α׷�
//����ö

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
		case 'q': printf("���α׷��� �����մϴ�.\n"); break;
		}
		if (menuSymbol == 'q') { break; }
	}
	return 0;
}

void withdraw(int* money)
{
	int moneyToWithdraw;
	moneyToWithdraw = inputInt("��ݾ��� �Է��ϼ���:");
	if (*money < moneyToWithdraw) {
		printf("�ܾ��� �����մϴ�.\n");
		printf("���� �ܾ��� %d���Դϴ�.\n", *money);
		return;
	}
	*money -= moneyToWithdraw;
	printf("���� �ܾ��� %d���Դϴ�.\n", *money);

	return;
}

void deposit(int* money)
{
	int moneyToDeposit;
	moneyToDeposit = inputInt("�Աݾ��� �Է��ϼ���:");
	*money += moneyToDeposit;
	printf("���� �ܾ��� %d���Դϴ�.\n", *money);

	return;
}

char menu()
{
	char menuSymbol;

	while (1)
	{
		printf("������ �޴����ڸ� �Է��ϼ���:");
		scanf("%c", &menuSymbol);
		if (menuSymbol == 'i' || menuSymbol == 'o' || menuSymbol == 'q') { break; }
		else {
			printf("�޴���ȣ�� �߸��Է��ϼ̽��ϴ�.\n");
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
			printf("�߸��� �Է��Դϴ�.\n");
			continue;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
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