//HW6 �µ� ��ȯ�ϱ�
//����ö

#include<stdio.h>
#pragma warning(disable:4996)

double input();
void output(double farenheit);


int main(void)
{
	double farenheit;
	farenheit = input();
	output(farenheit);

	return 0;
}

double input()
{
	double farenheit;
	printf("ȭ�� �µ��� �Է��ϼ���:");
	scanf("%lf", &farenheit);

	return farenheit;
}

void output(double farenheit)
{
	double centigrade;
	centigrade = 5 / 9.0*(farenheit - 32); //���⼭ 9�� �ƴ϶� 9.0���� ������ ���� ����Ʈ!!...
	printf("���� �µ��� %.1lf���Դϴ�.\n", centigrade);

	return;
}