//HW3 �� ���� ��,��,�� ������ ȯ���ϴ� ���α׷�
//����ö

#include<stdio.h>
#pragma warning (diable:4996)

int main(void)
{
	int time, hour, min, sec,rest;
	printf("ȯ���� �ð��� �Է��Ͻÿ�:");
	scanf("%d", &time);
	hour = time / (60 * 60);
	rest = time % (60 * 60);
	min = rest / 60;
	sec = rest % 60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", time, hour, min, sec);

	return 0;
}