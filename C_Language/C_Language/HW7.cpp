//HW7 주행거리와 시속을 입력 받아 주행시간을 계산하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	double dist, speed;
	int hour, min;
	double sec;
	printf("거리를 입력하시오(km단위):");
	scanf("%lf", &dist);
	printf("시속을 입력하시오(km/h단위):");
	scanf("%lf", &speed);

	hour = (int)(dist / speed);
	min = (int)(((dist / speed) - hour) * 60);
	sec = ((((dist / speed) - hour) * 60) - (int)(((dist / speed) - hour) * 60)) * 60;

	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨\n", dist, hour, min, sec);


	return 0;
}