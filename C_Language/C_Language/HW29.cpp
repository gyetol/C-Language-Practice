//HW29 ������
//����ö

#include<stdio.h>
#pragma warning (disable:4996)
//#include<time.h>

unsigned int inputUInt(const char*);
void myflush();
unsigned int transNumber(unsigned int);

int main(void)
{
	//clock_t start, end;
	//double res;

	unsigned int p1, p2, n;
	int count = 0;
	printf("����ڰ� �Է��� ���� �������� ������ ������ �̾��ִ� ���α׷��Դϴ�.\n");
	p1 = inputUInt("��������...���� ���� �Է��ϼ���:");
	p2 = inputUInt("��������...�� ���� �Է��ϼ���:");
	n = inputUInt("�������� �Է��ϼ���:");

	//start = clock();

	for (unsigned int i = p1; i <= p2; i++)
	{
		if (transNumber(i) == n) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("�� ���� : %d��\n", count);

	//end = clock();
	//res = (end - start) / CLOCKS_PER_SEC;
	//printf("�ҿ�� �ð�:%.3lf��\n", res);

	return 0;
}

unsigned int transNumber(unsigned int num)
{
	unsigned int gozipNum = 0; // ������
	int numStorage[11]; // 11�ڸ�(100����� Ŀ������ ~ unsigned int�� �뷫 42���̹Ƿ�)
	int count = 0;
	while (num >= 10) {
		while (num >= 10) {
			numStorage[count] = num % 10;
			num = num / 10;
			count++;
		}
		numStorage[count] = num;
		num = 1;

		for (int i = 0; i <= count; i++)
		{
			num = num * numStorage[i];
		}
		gozipNum++;
		count = 0;
	}
	return gozipNum;
}

unsigned int inputUInt(const char* message)
{
	unsigned int result;
	int res;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && result > 0 && garbage == '\n') { break; }
		else {
			printf("���� ������ �Է��Ͻʽÿ�\n");
			myflush();
			continue;
		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}