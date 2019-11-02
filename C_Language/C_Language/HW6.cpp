//HW6 온도 변환하기
//조계철

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
	printf("화씨 온도를 입력하세요:");
	scanf("%lf", &farenheit);

	return farenheit;
}

void output(double farenheit)
{
	double centigrade;
	centigrade = 5 / 9.0*(farenheit - 32); //여기서 9가 아니라 9.0으로 나누는 것이 포인트!!...
	printf("섭씨 온도는 %.1lf도입니다.\n", centigrade);

	return;
}