//HW16 ����ö ��� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int input();
int cal(int);
void output(int);
void myflush();

int main(void)
{
	int stationCnt, fee,i;
	for (i = 0; i < 5; i++) {
		stationCnt = input();
		fee = cal(stationCnt);
		output(fee);
	}

	return 0;
}

int input()
{
	int result,res;
	while (1)
	{
		printf("������ �Է��Ͻÿ�:");
		res = scanf("%d", &result);
		if (res == 1 && result>=1) { break; }
		else {
			printf("�ڿ����� �Է����ּ���\n");
			myflush(); }
	}
	return result;
}

int cal(int stationCnt)
{
	int over,fee; 
	if (stationCnt <= 5) { return 600; }
	else if (stationCnt <= 10) { return 800; }
	else {
		over = stationCnt - 11;
		over = over / 2;
		fee = 800 + over * 100+100;
		return fee;
	}
}

void output(int fee)
{
	printf("���: %d��\n", fee);
	return;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}


//////////////////////////////////////////
/*
	1. �Ǽ��� ���Ÿ��� �������ؾ��Ѵ�...

*/