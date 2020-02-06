//HW40 대칭되는 별찍기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int line, i, j;
	line = inputInt("출력 라인수를 입력하시오:");

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		for (j = line - i - 1; j >0; j--)
		{
			printf(" ");
		}
		printf(" ");
		for (j = line - i - 1; j >0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
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