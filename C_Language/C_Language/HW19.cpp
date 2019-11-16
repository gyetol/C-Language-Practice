//HW19 윤,평년 구하는 프로그램
//조계철

#include <stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int yearCheck(int);

int main(void)
{
	int year, yearChecked;
	year = inputInt("년도를 입력하시오:");
	yearChecked = yearCheck(year);

	if (yearChecked == 0) { printf("%d년은 평년(Common year)입니다.\n", year); }
	else { printf("%d년은 윤년(Leap year)입니다.\n", year); }

	return 0;
}

int yearCheck(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			}
			else { return 0; }

		}
		else { return 1; }
	}
	else { return 0; }
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
			printf("연도는 자연수를 입력하셔야 합니다.\n");
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