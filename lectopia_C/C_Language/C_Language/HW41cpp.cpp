//HW41 �ﰢ ���ĺ� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

char inputAlpha(const char*);
void myflush();

int main(void)
{
	char alpha;
	alpha = inputAlpha("������ �빮�� �Է�('A'~'Z'):");
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
			printf("�빮�ڰ� �ƴ� ���� �Է��Ͽ� �����մϴ�.\n");
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