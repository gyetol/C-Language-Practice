//HW39 0���� 99������ ������ �� �ٿ� 10���� �������� ����ϱ�
//����ö

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
