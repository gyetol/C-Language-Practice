//HW24 ������ �칰Ż�� ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int cal(int);
void output(int, int);

int main(void)
{
	int wellDepth, day;
	wellDepth = inputInt("�칰�� ���̸� �Է��Ͻÿ�(cm����):");
	day = cal(wellDepth);
	output(wellDepth, day);

	return 0;
}

void output(int wellDepth, int day)
{
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", wellDepth / 100.0, day);

	return;
}
int cal(int wellDepth)
{
	int day = 0;

	while (wellDepth >0)
	{
		wellDepth -= 50;
		if (wellDepth <= 0) {
			day++;
			break;
		}
		wellDepth += 20;
		day++;
	}

	return day;
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