//HW5 전기요금 계산하기
//조계철

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
	printf("전기 사용량을 입력하세요(kw):");
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
	printf("전기 사용요금은 %lf원 입니다.\n", totalFee);

	return;
}