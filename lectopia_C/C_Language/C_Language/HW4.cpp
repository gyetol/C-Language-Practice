//HW4 1년을 일,시,분,초로 환산하는 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#define YEAR 365.2422

int main(void)
{
	int day, hour, min;
	double sec;
	day = (int)YEAR;
	hour = (int)((YEAR - day) * 24);
	min = (int)(((YEAR - day) * 24 - (int)((YEAR - day) * 24)) * 60);
	sec = ((((YEAR - day) * 24 - (int)((YEAR - day) * 24)) * 60)-(int)(((YEAR - day) * 24 - (int)((YEAR - day) * 24)) * 60))*60;
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n", YEAR, day, hour, min, sec);

	return 0;
}