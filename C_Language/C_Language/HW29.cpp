//HW29 고집수
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
//#include<time.h>

unsigned int inputUInt(const char*);
void myflush();
unsigned int transNumber(unsigned int);

int main(void)
{
	//clock_t start, end;
	//double res;

	unsigned int p1, p2, n;
	int count = 0;
	printf("사용자가 입력한 수를 고집수로 가지는 수들을 뽑아주는 프로그램입니다.\n");
	p1 = inputUInt("범위지정...시작 값을 입력하세요:");
	p2 = inputUInt("범위지정...끝 값을 입력하세요:");
	n = inputUInt("고집수를 입력하세요:");

	//start = clock();

	for (unsigned int i = p1; i <= p2; i++)
	{
		if (transNumber(i) == n) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("총 개수 : %d개\n", count);

	//end = clock();
	//res = (end - start) / CLOCKS_PER_SEC;
	//printf("소요된 시간:%.3lf초\n", res);

	return 0;
}

unsigned int transNumber(unsigned int num)
{
	unsigned int gozipNum = 0; // 고집수
	int numStorage[11]; // 11자리(100억까지 커버가능 ~ unsigned int는 대략 42억이므로)
	int count = 0;
	while (num >= 10) {
		while (num >= 10) {
			numStorage[count] = num % 10;
			num = num / 10;
			count++;
		}
		numStorage[count] = num;
		num = 1;

		for (int i = 0; i <= count; i++)
		{
			num = num * numStorage[i];
		}
		gozipNum++;
		count = 0;
	}
	return gozipNum;
}

unsigned int inputUInt(const char* message)
{
	unsigned int result;
	int res;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && result > 0 && garbage == '\n') { break; }
		else {
			printf("양의 정수를 입력하십시오\n");
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