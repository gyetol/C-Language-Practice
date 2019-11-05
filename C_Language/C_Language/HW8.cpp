//HW8 세 과목 점수 입력 받아 총점, 평균 출력하기
//조계철

#include<stdio.h>
#pragma warning (disable:4996)


void input(int*, int*, int*);
void output(int*, int*, int*);

int main(void)
{
	int his, lit, ent;

	input(&his, &lit, &ent);
	output(&his, &lit, &ent);

	return 0;
}

void input(int*his, int*lit, int*ent)
{
	printf("역사, 문학, 예능 점수를 입력하세요 :");
	scanf("%d%d%d", his, lit, ent);
	return;
}

void output(int*his, int*lit, int*ent)
{
	printf("총점은 %d점이고 평균은 %.2lf점입니다.\n", *his + *lit + *ent, (*his + *lit + *ent) / 3.0);

	return;
}