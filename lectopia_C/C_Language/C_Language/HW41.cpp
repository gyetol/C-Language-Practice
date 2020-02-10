//HW41 삼각 알파벳 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

char inputAlpha(const char*);
void myflush();

int main(void)
{
	char alpha;
	alpha = inputAlpha("영문자 대문자 입력('A'~'Z'):");
	if (alpha == '#')
	{
		;
	}
	else
	{
		for (int i = 0; i <= alpha - 'A'; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("%c", alpha - j);
			}
			printf("\n");
		}
	}


	return 0;
}

char inputAlpha(const char* message)
{
	char result, trash;
	while (1)
	{
		printf(message);
		scanf(" %c%c", &result, &trash);
		if (trash == '\n'&& result >= 'A' && result <= 'Z')
		{
			break;
		}
		else
		{
			printf("대문자가 아닌 것을 입력하여 종료합니다.\n");
			return '#';
		}
	}


	return result;
}

void myflush() {
	while (getchar() != '\n')
	{
		;
	}
}