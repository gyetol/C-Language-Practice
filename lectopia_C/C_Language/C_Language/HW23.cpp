//HW23 �ݺ������� �� ���� ������ �Է� �޾� �μ��� ���� ����Ͻÿ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

void myflush();

int main(void)
{
	int num1, num2;

	int res;
	char garbage1, garbage2;

	while (1) {
		printf("�� ���� ������ �Է��ϼ���(���� �̿� �Է� �� ����): ");
		res = scanf("%d%c%d%c", &num1, &garbage1, &num2, &garbage2);
		if (res == 4 && (garbage1 == '\n' || garbage1 == ' ') && (garbage2 == '\n' || garbage2 == ' ')) {
			if (num1 >= num2) { printf("%d - %d = %d\n", num1, num2, num1 - num2); }
			else { printf("%d - %d = %d\n", num2, num1, num2 - num1); }

		}
		else {
			printf("���� �̿��� ���� �Է��Ͽ� �����մϴ�.\n");
			myflush();
			break;
		}
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}