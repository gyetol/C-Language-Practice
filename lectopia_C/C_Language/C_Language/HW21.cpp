//HW21 다섯 명의 학생의 키를 입력 받아 그 평균을 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

void input(double*);
void myflush();

int main(void)
{
	double studentHeight[5];
	input(studentHeight);
	
	printf("다섯 명의 평균 키는 %.1lf입니다.\n", (studentHeight[0] + studentHeight[1] + studentHeight[2] + studentHeight[3] + studentHeight[4]) / 5.0);

	return 0;
}

void input(double *studentHeight)
{
	int i,res;
	char garbage;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("%d번 학생의 키는? ",i+1);
			res = scanf("%lf%c", &studentHeight[i],&garbage);
			if (res == 2 && studentHeight[i] >= 0 && garbage=='\n') { break; }
			else {
				printf("키를 잘못 입력하셨습니다.\n");
				myflush();
				continue;
			}
		}
	}
	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}