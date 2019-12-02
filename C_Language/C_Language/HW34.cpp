//HW34 ������� ��� ���α׷� 
//����ö

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
		code = inputInt("����� �ڵ带 �Է��Ͻÿ�:(1.������/ 2.�����/ 3.������):");
		if (code < 1 || code>3) {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			continue;
		}
		else { break; }
	}
	while (1)
	{
		amount = inputInt("��뷮�� �Է��Ͻÿ�(ton����):");
		if (amount < 0) {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
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
	printf("������ڵ�: %d", code);
	switch (code)
	{
	case 1: printf("(������)\n"); break;
	case 2: printf("(�����)\n"); break;
	case 3: printf("(������)\n"); break;
	}
	printf("��뷮: %d ton\n", amount);
	printf("�Ѽ������: %.0lf��\n", charge);

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