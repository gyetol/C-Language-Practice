//HW14 ���ڿ� �����Ͽ� ����ϱ�
//����ö

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void input(char*);
void output(char*);

int main(void)
{
	char string[30];
	input(string);
	output(string);

	return 0;
}

void output(char* string)
{
	int len;
	len = strlen(string);
	printf("[%*.*s...]\n", len, len / 2, string);

	return;
}

void input(char* string)
{
	printf("���ڿ� �Է�:");
	scanf("%s", string);

	return;
}