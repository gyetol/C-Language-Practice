//HW37 Ȳ�ݵ���
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int sumCoin = 0, coin = 1, workingDay, count = 1, day = 1; //coin�� count�� ���� �ξ��� (��������)
	workingDay = inputInt("����� �ٹ��ϼ��� �Է��Ͻÿ�:");

	while (day <= workingDay)
	{
		for (int i = 1; i <= count; i++)
		{
			sumCoin = sumCoin + coin;
			day++;
			if (day == workingDay + 1) { break; }
		}
		count++;
		coin++;
	}
	printf("�ٹ��� : %d�� / �� ��ȭ �� : %d��\n", workingDay, sumCoin);

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n' && result>0) {
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