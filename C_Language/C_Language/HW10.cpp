//HW10 두 정수를 입력 받아 합, 차, 곱, 몫의 값을 출력하는 프로그램 작성
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

void input(int*, int*);
void output(int*, int*);
void myflush();

int main(void)
{
	int num1, num2;
	input(&num1, &num2);
	output(&num1, &num2);


	return 0;
}

void input(int* num1, int* num2)
{
	int res;
	while (1)
	{
		printf("두 개의 정수를 입력하시오:");
		res = scanf("%d%d", num1, num2);
		if (res != 2) {
			printf("잘못입력하셨습니다. 정수값을 입력해주세요.\n");
			myflush();
			continue;
		}
		else { break; }
	}
	return;
}

void output(int* num1, int* num2)
{
	printf("%d + %d = %d\n", *num1, *num2, *num1 + *num2);
	printf("%d - %d = %d\n", *num1, *num2, *num1 - *num2);
	printf("%d * %d = %d\n", *num1, *num2, *num1 * *num2);

	if (*num2 == 0) { printf("0으로 나눌 수 없습니다.\n"); }
	else { printf("%d / %d = %.2lf\n", *num1, *num2, *num1 / (double)* num2); }

	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}