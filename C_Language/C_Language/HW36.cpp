//HW36 피보나치 수열 구하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int numberOfTerms;
	long long int sum = 2;
	long long int firstTerm = 1, secondTerm = 1, temp;

	numberOfTerms = inputInt("피보나치 수열의 항수를 입력하시오:");

	if (numberOfTerms <= 1) { printf("%lld = %lld\n", (long long int)1, (long long int)1); }
	else {
		printf("%lld", (long long int)1);
		printf(" + %lld", (long long int)1);
		for (int i = 3; i <= numberOfTerms; i++)
		{
			sum += firstTerm + secondTerm;
			temp = firstTerm;
			firstTerm = secondTerm;
			secondTerm = temp + secondTerm;
			printf(" + %lld", secondTerm);
		}
		printf(" = %lld\n", sum);
	}

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&& result>0) {
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