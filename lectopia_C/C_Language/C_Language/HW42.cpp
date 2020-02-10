//HW42 구구단 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 5; j++)
		{
			printf("%d*%d=%d", j, i, j*i);
			printf("   ");
			if (i*j < 10) { printf(" "); }
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 6; j <= 9; j++)
		{
			printf("%d*%d=%d", j, i, j*i);
			printf("   ");
			if (i*j < 10) { printf(" "); }
		}
		printf("\n");
	}

	printf("\n\n");
	int i = 1, j;
	int x = 2;
	for (int k = 1; k <= 2; k++)
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = x; j <= x + 3; j++)
			{
				printf("%d*%d=%d", j, i, j*i);
				printf("  ");
				if (i*j < 10) { printf(" "); }
			}
			printf("\n");
		}
		printf("\n");
		x = j;
	}


	return 0;
}