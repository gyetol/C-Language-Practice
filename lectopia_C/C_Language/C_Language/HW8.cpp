//HW8 �� ���� ���� �Է� �޾� ����, ��� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)


void input(int*, int*, int*);
void output(int*, int*, int*);

int main(void)
{
	int his, lit, ent;

	input(&his, &lit, &ent);
	output(&his, &lit, &ent);

	return 0;
}

void input(int*his, int*lit, int*ent)
{
	printf("����, ����, ���� ������ �Է��ϼ��� :");
	scanf("%d%d%d", his, lit, ent);
	return;
}

void output(int*his, int*lit, int*ent)
{
	printf("������ %d���̰� ����� %.2lf���Դϴ�.\n", *his + *lit + *ent, (*his + *lit + *ent) / 3.0);

	return;
}