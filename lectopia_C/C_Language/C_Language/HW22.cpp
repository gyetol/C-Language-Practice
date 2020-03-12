//HW22 ���ٿ� 5���� ��(*) ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void output(int);


int main(void)
{
	int num;
	
	num = inputInt("�������� �Է��ϼ���:");
	output(num);

	return 0;
}

void output(int num)
{
	int share, rest,i,j; // ��� ������, �׸��� �ݺ�����
	int numPerLine=5; //�� �ٿ� �� ���� ������ ���ϴ� ����
	share = num / numPerLine;
	rest = num % numPerLine;

	for (i = 1; i <= share; i++)
	{
		for (j = 1; j <= numPerLine; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= rest; i++) { printf("*"); }
	printf("\n");

	return;
}

int inputInt(const char* message)
{
	int result, res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && garbage == '\n') {
			break;
		}
		printf("�߸��� �Է��Դϴ�.\n");
		myflush();
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}