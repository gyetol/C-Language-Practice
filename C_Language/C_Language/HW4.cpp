//HW4 1���� ��,��,��,�ʷ� ȯ���ϴ� ���α׷�
//����ö

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
	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf���Դϴ�.\n", YEAR, day, hour, min, sec);

	return 0;
}