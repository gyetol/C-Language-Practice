//HW3 초 수를 시,분,초 단위로 환산하는 프로그램
//조계철

#include<stdio.h>
#pragma warning (diable:4996)

int main(void)
{
	int time, hour, min, sec,rest;
	printf("환산할 시간을 입력하시오:");
	scanf("%d", &time);
	hour = time / (60 * 60);
	rest = time % (60 * 60);
	min = rest / 60;
	sec = rest % 60;

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", time, hour, min, sec);

	return 0;
}