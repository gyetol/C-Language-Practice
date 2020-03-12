//HW32 ���� �Լ� �����
//����ö

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
		menuNum = inputInt("������ �����Ϸ��� 1, �Ǽ��� �����Ϸ��� 2�� �Է��ϼ���:");

		switch (menuNum)
		{
		case 1:integer = inputInt("���� ���� ���� �Է��Ͻÿ�:"); exponent = inputDouble("���� ���� �Է��Ͻÿ�:"); intRes = ipow(integer, exponent); printf("%d�� %.2lf���� %.2lf�Դϴ�.\n", integer, exponent, intRes); break;
		case 2:realNum = inputDouble("���� ���� ���� �Է��Ͻÿ�:"); exponent = inputDouble("���� ���� �Է��Ͻÿ�:"); doubleRes = fpow(realNum, exponent); printf("%.2lf�� %.2lf���� %.2lf�Դϴ�.\n", realNum, exponent, doubleRes); break;
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
			printf("�߸��� �Է��Դϴ�.\n");
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
		if (strcmp(message, "������ �����Ϸ��� 1, �Ǽ��� �����Ϸ��� 2�� �Է��ϼ���:") == 0) {
			if (res == 2 && (result == 1 || result == 2) && garbage == '\n') {
				break;
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				myflush();
				continue;
			}
		}
		else {
			if (res == 2 && result >= 0 && garbage == '\n') {
				break;
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
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
pow���̺귯�� �Լ� �� �ôµ�, �ܰ���... �����¿� �����ϰ� �̸�!!
*/