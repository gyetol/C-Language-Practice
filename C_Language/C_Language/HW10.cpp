//HW10 �� ������ �Է� �޾� ��, ��, ��, ���� ���� ����ϴ� ���α׷� �ۼ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

void input(int*, int*);
void output(int*, int*);
void myflush();

int main(void)
{
	int num1, num2;
	input(&num1, &num2);
	output(&num1, &num2);


	return 0;
}

void input(int* num1, int* num2)
{
	int res;
	while (1)
	{
		printf("�� ���� ������ �Է��Ͻÿ�:");
		res = scanf("%d%d", num1, num2);
		if (res != 2) {
			printf("�߸��Է��ϼ̽��ϴ�. �������� �Է����ּ���.\n");
			myflush();
			continue;
		}
		else { break; }
	}
	return;
}

void output(int* num1, int* num2)
{
	printf("%d + %d = %d\n", *num1, *num2, *num1 + *num2);
	printf("%d - %d = %d\n", *num1, *num2, *num1 - *num2);
	printf("%d * %d = %d\n", *num1, *num2, *num1 * *num2);

	if (*num2 == 0) { printf("0���� ���� �� �����ϴ�.\n"); }
	else { printf("%d / %d = %.2lf\n", *num1, *num2, *num1 / (double)* num2); }

	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}