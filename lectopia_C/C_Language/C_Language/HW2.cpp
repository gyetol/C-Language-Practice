//HW2 용돈 화폐단위 환산 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int money;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10,rest;
	printf("받은 용돈을 입력하시오 :");
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

	printf("50000원권 : %d개\n", m50000);
	printf("10000원권 : %d개\n", m10000);
	printf("5000원권 : %d개\n", m5000);
	printf("1000원권 : %d개\n", m1000);
	printf("500원권 : %d개\n", m500);
	printf("100원권 : %d개\n", m100);
	printf("50원권 : %d개\n", m50);
	printf("10원권 : %d개\n", m10);

	return 0;
}