//HW9 �Էµ� ������ 8������ 16������ ����ϴ� ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int input();

int main(void)
{
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.\n", number);

	return 0;
}

int input()
{
	int number;
	printf("�������� �Է��ϼ���:");
	scanf("%d", &number);

	return number;
}