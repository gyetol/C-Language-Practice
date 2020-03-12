//HW22 한줄에 5개씩 별(*) 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void output(int);


int main(void)
{
	int num;
	
	num = inputInt("정수값을 입력하세요:");
	output(num);

	return 0;
}

void output(int num)
{
	int share, rest,i,j; // 몫과 나머지, 그리고 반복변수
	int numPerLine=5; //한 줄에 몇 개씩 찍을지 정하는 변수
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