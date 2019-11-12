//HW15 BMI구하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

void input(double*, double*);
double cal(double*, double*);
void output(double);
void myflush();

int main(void)
{
	double weight, height;
	double bmi;
	input(&weight, &height);
	bmi = cal(&weight, &height);
	output(bmi);

	return 0;
}

void input(double* weight, double* height)
{
	int res;
	while (1)
	{
		printf("몸무게를 입력하세요(kg):");
		res = scanf("%lf", weight);
		if (res == 1) { break; }
		else {
			myflush();
			continue;
		}
	}
	while (1)
	{
		printf("키를 입력하세요(m):");
		res = scanf("%lf", height);
		if (res == 1) { break; }
		else {
			myflush();
			continue;
		}
	}
	return;
}

double cal(double* weight, double* height)
{
	double bmi;
	bmi = *weight / (*height**height);
	
	return bmi;
}

void output(double bmi)
{
	if (bmi < 18.5) { printf("당신의 BMI는 %.1lf으로 저체중입니다.\n",bmi); }
	else if(bmi<25.0) { printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n",bmi); }
	else if (bmi<30.0) { printf("당신의 BMI는 %.1lf으로 과체중입니다.\n",bmi); }
	else if (bmi<40.0) { printf("당신의 BMI는 %.1lf으로 비만입니다.\n",bmi); }
	else  { printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n",bmi); }

	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}



///////////////////////////////
/*
몸무게나 키 입력시 45.fas처럼 '숫자.문자' 형식으로 입력했을 때 걸러주질 못한다.
이 부분을 개선해야한다...


*/
/////////////////////////////