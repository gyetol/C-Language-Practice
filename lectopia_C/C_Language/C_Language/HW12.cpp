//HW12 이름을 영문으로 입력 받아 다음과 같은 형태로 출력하시오
//조계철

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void input(char*);
void output(char*);

int main(void)
{
	char name[30];
	input(name);
	output(name);

	return 0;
}

void input(char* name)
{
	printf("이름을 입력하시오:");
	fgets(name, 30, stdin);

	return;
}

void output(char*name)
{
	int len;
	len = strlen(name);
	name[len - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%+20s\"\n", name);
	printf("\"%-20s\"\n", name);

	return;
}