#include<stdio.h>
#pragma warning (disable:4996)
#include<math.h>

void isPrimeNum(int num);
int inputInt(const char* message);
void myflush();

int main(void) 
{
	int num = inputInt("2이상의 양의 정수값 하나를 입력하시오 :");
	if (num <= 1) { 
		printf("2이상의 양의 정수를 입력하지 않아 종료합니다."); 
		return 0;
	}
	isPrimeNum(num);
	return 0;
}

void isPrimeNum(int num)
{
	printf("2~%d까지의 소수 값은 다음과 같습니다.\n", num);
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
			printf("잘못된 입력입니다.\n");
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