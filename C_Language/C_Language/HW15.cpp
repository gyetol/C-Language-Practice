//HW15 BMI���ϱ�
//����ö

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
		printf("�����Ը� �Է��ϼ���(kg):");
		res = scanf("%lf", weight);
		if (res == 1) { break; }
		else {
			myflush();
			continue;
		}
	}
	while (1)
	{
		printf("Ű�� �Է��ϼ���(m):");
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
	if (bmi < 18.5) { printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n",bmi); }
	else if(bmi<25.0) { printf("����� BMI�� %.1lf���� ����ü���Դϴ�.\n",bmi); }
	else if (bmi<30.0) { printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n",bmi); }
	else if (bmi<40.0) { printf("����� BMI�� %.1lf���� ���Դϴ�.\n",bmi); }
	else  { printf("����� BMI�� %.1lf���� �����Դϴ�.\n",bmi); }

	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}



///////////////////////////////
/*
�����Գ� Ű �Է½� 45.fasó�� '����.����' �������� �Է����� �� �ɷ����� ���Ѵ�.
�� �κ��� �����ؾ��Ѵ�...


*/
/////////////////////////////