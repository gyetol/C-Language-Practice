//HW38 ������ �ݾ����� ���Ǳ����ϱ�
//����ö

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
		money = inputInt("���� ����� ���� �ݾ� �Է�('$'�Է½� ����):");
		if (money == -1) { break; }
		if (money<0) {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			continue;
		}
		output(money);
	}

	return 0;
}

void output(int money)
{
	int creamBreadCnt, shrimpSnackCnt, cokeCnt;
	if (money < COKE) { printf("�� �� �ִ� ������ �����ϴ�.\n"); }
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