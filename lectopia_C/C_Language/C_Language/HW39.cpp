//HW39 0부터 99까지의 정수를 한 줄에 10개씩 수직으로 출력하기
//조계철

#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 90; j += 10)
		{
			printf("%3d", i + j);
		}
		printf("\n");
	}

	return 0;
}
