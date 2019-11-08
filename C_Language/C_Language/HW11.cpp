//HW11 ASCII code를 입력 받아 ASCII code에 해당 문자 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int input();
void myflush();

int main(void)
{
	int code;
	code = input();
	printf("%d은 '%c'의 ASCII code입니다.\n", code, code);

	return 0;
}

int input()
{
	int code, res;
	while (1)
	{
		printf("ASCII code값을 입력하시오:");
		res = scanf("%d", &code);

		if (res != 1 || (code > 128 || code < 0)) {
			printf("0과 128사이의 정수값을 입력하시오\n");
			myflush();
			continue;
		}
		else { break; }
	}
	return code;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}


/////////////////////////////////////////////////
/*
1.0~127 까지 숫자는 아스키코드값 정상출력
2.128~255까지 숫자는 %c로 출력시 음수로 인식되므로 비정상출력
3.다시 256~383까지 숫자는 아스키코드값 정상출력
4.다시 384~511까지 비정상출력

*/
//////////////////////////////////////////////////////