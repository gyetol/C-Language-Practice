//HW27 �ް� ���� ���α׷� �ۼ��ϱ�
//����ö

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
		eggWeight = inputDouble("����� ���Ը� �Է��ϼ���(����:g):");
		if (eggWeight < 150) { printf("���߸��� ������ �峭���� ���ÿ�~ ^^\n"); }
		else if (eggWeight > 500) { printf("Ÿ���� ������ �峭���� ���ÿ�~ ^^\n"); }
		else {
			eggCnt++;
			printf("���� �ް��� �� : %d��\n", eggCnt);
		}
	}
	printf("�ް� ������ �������ϴ�.\n");

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
			printf("���ڸ� �Է��Ͻʽÿ�\n");
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