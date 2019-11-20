//HW23 반복적으로 두 개의 정수를 입력 받아 두수의 차를 출력하시오
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

void myflush();

int main(void)
{
	int num1, num2;

	int res;
	char garbage1, garbage2;

	while (1) {
		printf("두 개의 정수를 입력하세요(정수 이외 입력 시 종료): ");
		res = scanf("%d%c%d%c", &num1, &garbage1, &num2, &garbage2);
		if (res == 4 && (garbage1 == '\n' || garbage1 == ' ') && (garbage2 == '\n' || garbage2 == ' ')) {
			if (num1 >= num2) { printf("%d - %d = %d\n", num1, num2, num1 - num2); }
			else { printf("%d - %d = %d\n", num2, num1, num2 - num1); }

		}
		else {
			printf("정수 이외의 것을 입력하여 종료합니다.\n");
			myflush();
			break;
		}
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}