//HW20 Pay ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

#define Tax_to10 0.15 //10���������� ���� 15%
#define Tax_over10 0.25 //10���� �ʰ��п� ���� ���� 25%
#define payPerHour 3000 // �ñ�
#define overtimeCriteria 40 // �ʰ��ٹ����� �ð�

int inputInt(const char*);
void myflush();
void output(int);

int main(void)
{
	int time;
	time = inputInt("1���ϰ��� �ٹ��ð��� �Է��Ͻÿ�:");
	output(time);

	return 0;
}

void output(int time)
{
	int fee, totalfee;

	if (time<overtimeCriteria) {
		fee = payPerHour * time;
		if (fee > 100000) { totalfee = (fee - 100000) *(1 - Tax_over10) + (100000 * (1 - Tax_to10)); }
		else { totalfee = fee * (1 - Tax_to10); }
	}
	else {
		fee = payPerHour * (time - 40)*1.5 + payPerHour * 40;
		if (fee > 100000) { totalfee = (fee - 100000) *(1 - Tax_over10) + (100000 * (1 - Tax_to10)); }
		else { totalfee = fee * (1 - Tax_to10); }
	}

	printf("# �Ѽ���: %d��\n# �� ��: %d��\n# �Ǽ���: %d��\n", fee, fee-totalfee, totalfee);
	return;
}

int inputInt(const char* message)
{
	int res, result;
	while (1)
	{
		printf(message);
		res = scanf("%d", &result);
		if (res == 1 && result >= 0) { break; }
		else {
			printf("�ڿ����� �Է��ϼ���.\n");
			myflush();
		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}