//HW37 황금동전
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int sumCoin = 0, coin = 1, workingDay, count = 1, day = 1; //coin과 count를 따로 두었다 (유지보수)
	workingDay = inputInt("기사의 근무일수를 입력하시오:");

	while (day <= workingDay)
	{
		for (int i = 1; i <= count; i++)
		{
			sumCoin = sumCoin + coin;
			day++;
			if (day == workingDay + 1) { break; }
		}
		count++;
		coin++;
	}
	printf("근무일 : %d일 / 총 금화 수 : %d개\n", workingDay, sumCoin);

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n' && result>0) {
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
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