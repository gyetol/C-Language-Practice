//HW7 ����Ÿ��� �ü��� �Է� �޾� ����ð��� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	double dist, speed;
	int hour, min;
	double sec;
	printf("�Ÿ��� �Է��Ͻÿ�(km����):");
	scanf("%lf", &dist);
	printf("�ü��� �Է��Ͻÿ�(km/h����):");
	scanf("%lf", &speed);

	hour = (int)(dist / speed);
	min = (int)(((dist / speed) - hour) * 60);
	sec = ((((dist / speed) - hour) * 60) - (int)(((dist / speed) - hour) * 60)) * 60;

	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��\n", dist, hour, min, sec);


	return 0;
}