//HW2 �뵷 ȭ����� ȯ�� ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int money;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10,rest;
	printf("���� �뵷�� �Է��Ͻÿ� :");
	scanf("%d", &money);

	m50000 = money / 50000;
	rest = money % 50000;
	m10000 = rest / 10000;
	rest = rest % 10000;
	m5000 = rest / 5000;
	rest = rest % 5000;
	m1000 = rest / 1000;
	rest = rest % 1000;
	m500 = rest / 500;
	rest = rest % 500;
	m100 = rest / 100;
	rest = rest % 100;
	m50 = rest / 50;
	rest = rest % 50;
	m10 = rest / 10;

	printf("50000���� : %d��\n", m50000);
	printf("10000���� : %d��\n", m10000);
	printf("5000���� : %d��\n", m5000);
	printf("1000���� : %d��\n", m1000);
	printf("500���� : %d��\n", m500);
	printf("100���� : %d��\n", m100);
	printf("50���� : %d��\n", m50);
	printf("10���� : %d��\n", m10);

	return 0;
}