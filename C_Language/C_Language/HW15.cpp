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
	char garbage;


	while (1) {
		printf("�����Ը� �Է��ϼ���(kg):");
		res = scanf("%lf%c", weight, &garbage);
		if (res == 2 && garbage == '\n') {
			break;
		}
		printf("�߸��� �Է��Դϴ�.\n");
		myflush();
	}
	while (1) {
		printf("Ű�� �Է��ϼ���(m):");
		res = scanf("%lf%c", height, &garbage);
		if (res == 2 && garbage == '\n') {
			break;
		}
		printf("�߸��� �Է��Դϴ�.\n");
		myflush();
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

-> scanf�� ������ %c�� �ѹ� �� �޾Ƽ�, %c�� ������ ���� �����̸� ������ָ� �ȴ�!!!!


*/
/////////////////////////////