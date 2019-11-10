//HW13 이름의 글자 수 출력하기
//조계철

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void input(char*,char*);
void output(char*,char*);

int main(void)
{
	char familyname[20];
	char givenname[20];
	input(familyname, givenname);
	output(familyname, givenname);

	return 0;
}

void input(char* familyname, char* givenname)
{
		printf("성을 입력하시오:");
		scanf("%s", familyname);
		printf("이름을 입력하시오:");
		scanf("%s", givenname);

		return;
}

void output(char* familyname, char* givenname)
{
	int flen, glen;
	flen = strlen(familyname);
	glen = strlen(givenname);
	printf("%s %s\n", familyname, givenname);
	printf("%*d %*d\n", flen, flen, glen, glen);

	return;
}