//HW35 총 5개의 정수를 입력 받아 그 수의 합 출력하기 (제약: 단일for문을 이용하여 main함수에서 처리하기)
//조계철

#include<stdio.h>
#pragma warning (disable:4996)


int main(void)
{
	int sum = 0, i, num, res;

	for (i = 1; i <= 5; i++)
	{
		printf("0보다 큰수를 입력하시요(%d번째):", i);
		res = scanf("%d", &num);
		if (getchar() == '\n'&&num>0) {
			sum += num;
		}
		else {
			while (getchar() != '\n') { ; }
			i--;
			continue;
		}
	}
	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}




////////////////////////////////////////
// 현재 음수를 입력했을때, getchar()때문에 한번 더 입력을 받게된다.
// 이걸 고치려고하면 -34.sdfs처럼 뒤에 문자가 오는 것은 제대로 걸러주지 못하면서 더 큰오류발생, 따라서 한번 더 입력을 받는 정도의 오류로 선택했다
// 버전업필요