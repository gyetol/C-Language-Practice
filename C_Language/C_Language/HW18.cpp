//HW18 입장료 계산 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
void output(int, int);

int main(void)
{
	int age, peopleCnt;
	age=inputInt("입장객의 나이를 입력하시오:");
	peopleCnt = inputInt("입장객의 수를 입력하시오:");
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
		printf("입장료=> %d원\n할인금액=>%d원\n결제금액=>%d원\n", fee,(int)(fee*0.1),finalFee );
	}
	else { 
		finalFee = fee;
		printf("입장료=> %d원\n할인금액=>%d원\n결제금액=>%d원\n", fee,0,finalFee ); }
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
			printf("자연수를 입력해주세요.\n");
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