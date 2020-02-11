#include<stdio.h>
#pragma warning (disable:4996)
#include<math.h>

void isPrimeNum(int num);
int inputInt(const char* message);
void myflush();

int main(void) 
{
	int num = inputInt("2�̻��� ���� ������ �ϳ��� �Է��Ͻÿ� :");
	if (num <= 1) { 
		printf("2�̻��� ���� ������ �Է����� �ʾ� �����մϴ�."); 
		return 0;
	}
	isPrimeNum(num);
	return 0;
}

void isPrimeNum(int num)
{
	printf("2~%d������ �Ҽ� ���� ������ �����ϴ�.\n", num);
	int cnt = 0;
	for (int i = 2; i <= num; i++) 
	{
		bool tf = false;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0) {
				tf = true;
			}
		}
		if (tf == false)
		{
			cnt++;
			printf("%3d ", i);
		}
		if (cnt % 5 == 0) {
			printf("\n");
		}

	}
	printf("\n");
	return;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n') {
			break;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
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