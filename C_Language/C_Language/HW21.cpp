//HW21 �ټ� ���� �л��� Ű�� �Է� �޾� �� ����� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

void input(double*);
void myflush();

int main(void)
{
	double studentHeight[5];
	input(studentHeight);
	
	printf("�ټ� ���� ��� Ű�� %.1lf�Դϴ�.\n", (studentHeight[0] + studentHeight[1] + studentHeight[2] + studentHeight[3] + studentHeight[4]) / 5.0);

	return 0;
}

void input(double *studentHeight)
{
	int i,res;
	char garbage;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("%d�� �л��� Ű��? ",i+1);
			res = scanf("%lf%c", &studentHeight[i],&garbage);
			if (res == 2 && studentHeight[i] >= 0 && garbage=='\n') { break; }
			else {
				printf("Ű�� �߸� �Է��ϼ̽��ϴ�.\n");
				myflush();
				continue;
			}
		}
	}
	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}