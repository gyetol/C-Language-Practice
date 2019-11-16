//HW19 ��,��� ���ϴ� ���α׷�
//����ö

#include <stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int yearCheck(int);

int main(void)
{
	int year, yearChecked;
	year = inputInt("�⵵�� �Է��Ͻÿ�:");
	yearChecked = yearCheck(year);

	if (yearChecked == 0) { printf("%d���� ���(Common year)�Դϴ�.\n", year); }
	else { printf("%d���� ����(Leap year)�Դϴ�.\n", year); }

	return 0;
}

int yearCheck(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			}
			else { return 0; }

		}
		else { return 1; }
	}
	else { return 0; }
}

int inputInt(const char* message)
{
	int res, result;

	while (1)
	{
		printf(message);
		res = scanf("%d", &result);
		if (res == 1 && result >= 0) { break; }
		else {
			printf("������ �ڿ����� �Է��ϼž� �մϴ�.\n");
			myflush();

		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}