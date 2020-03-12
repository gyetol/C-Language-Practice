//HW24 달팽이 우물탈출 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int cal(int);
void output(int, int);

int main(void)
{
	int wellDepth, day;
	wellDepth = inputInt("우물의 깊이를 입력하시오(cm단위):");
	day = cal(wellDepth);
	output(wellDepth, day);

	return 0;
}

void output(int wellDepth, int day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", wellDepth / 100.0, day);

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
		printf("잘못된 입력입니다.\n");
		myflush();
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}