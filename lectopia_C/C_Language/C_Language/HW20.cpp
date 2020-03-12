//HW20 Pay 계산하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

#define Tax_to10 0.15 //10만원까지의 세율 15%
#define Tax_over10 0.25 //10만원 초과분에 대한 세율 25%
#define payPerHour 3000 // 시급
#define overtimeCriteria 40 // 초과근무기준 시간

int inputInt(const char*);
void myflush();
void output(int);

int main(void)
{
	int time;
	time = inputInt("1주일간의 근무시간을 입력하시오:");
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

	printf("# 총수입: %d원\n# 세 금: %d원\n# 실수입: %d원\n", fee, fee-totalfee, totalfee);
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
			printf("자연수를 입력하세요.\n");
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