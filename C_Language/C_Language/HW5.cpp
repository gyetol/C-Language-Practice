//HW5 ������ ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

double input();
void output(double totalFee);
double cal(double usage);


int main(void)
{
	double totalFee;
	double usage;

	usage = input();
	totalFee = cal(usage);
	output(totalFee);


	return 0;
}

double input()
{
	double usage;
	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf("%lf", &usage);

	return usage;
}

double cal(double usage)
{
	double basicFee = 660;
	double feePerUse = 88.5;
	double taxRate = 0.09;
	double totalFee;
	totalFee = (basicFee + usage * feePerUse)*(1+taxRate);

	return totalFee;
}

void output(double totalFee)
{
	printf("���� ������� %lf�� �Դϴ�.\n", totalFee);

	return;
}