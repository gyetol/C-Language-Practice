//HW18 ����� ��� ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
void output(int, int);

int main(void)
{
	int age, peopleCnt;
	age=inputInt("���尴�� ���̸� �Է��Ͻÿ�:");
	peopleCnt = inputInt("���尴�� ���� �Է��Ͻÿ�:");
	output(age, peopleCnt);

	return 0;
}

void output(int age, int peopleCnt)
{
	int fee,finalFee;

	if (age <= 7) { fee = 500 * peopleCnt; }
	else if (age <= 13) { fee = 700 * peopleCnt; }
	else if (age <= 19) { fee = 1000 * peopleCnt; }
	else if (age <= 55) { fee = 1500 * peopleCnt; }
	else { fee = 500 * peopleCnt; }

	if (peopleCnt >= 5) { 
		finalFee= (int)(fee*0.9);
		printf("�����=> %d��\n���αݾ�=>%d��\n�����ݾ�=>%d��\n", fee,(int)(fee*0.1),finalFee );
	}
	else { 
		finalFee = fee;
		printf("�����=> %d��\n���αݾ�=>%d��\n�����ݾ�=>%d��\n", fee,0,finalFee ); }
}

int inputInt(const char* message)
{
	int res,result;

	while (1)
	{
		printf(message);
		res = scanf("%d", &result);
		if (res == 1 && result>=1) { break; }
		else {
			printf("�ڿ����� �Է����ּ���.\n");
			myflush();
			continue;
		}
		
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	
	return;
}