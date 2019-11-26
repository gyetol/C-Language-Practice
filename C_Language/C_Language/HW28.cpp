//HW28 문자 종료별 카운트 프로그램 (getchar()함수 이용)
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#include<string.h>

int main(void)
{
	char ch;
	int count[4] = { 0,0,0,0 }; // 0번방: 영문자 대소문자 개수, 1번방: 숫자문자 개수, 2번방: 여백문자 개수, 3번방: 그 외 기타문자 개수

	printf("# 영문 문장을 입력하시오:");

	while ((ch = getchar()) != EOF) {
		if ((ch >= 'A'&& ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) { count[0]++; }
		else if (ch >= '0'&&ch <= '9') { count[1]++; }
		else if (ch == ' ' || ch == '\t' || ch == '\n') { count[2]++; }
		else { count[3]++; }
	}
	printf("영문자 대소문자 개수 : %d개\n숫자문자 개수 : %d개\n여백문자(space,tab,enter)개수 : %d개\n그 외 기타문자 개수 : %d개\n", count[0], count[1], count[2], count[3]);

	return 0;
}

///////////////////////////////////////////////
/*
int main(void)
{
char sentence[300];
char ch;
int count[4] = { 0,0,0,0 }; // 0번방: 영문자 대소문자 개수, 1번방: 숫자문자 개수, 2번방: 여백문자 개수, 3번방: 그 외 기타문자 개수

printf("# 영문 문장을 입력하시오:");
fgets(sentence, sizeof(sentence), stdin);

while ((ch = getchar()) != EOF) {
if ((ch >= 'A'&& ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) { count[0]++; }
else if (ch >= '0'&&ch <= '9') { count[1]++; }
else if (ch == ' ' || ch == '\t' || ch == '\n') { count[2]++; }
else { count[3]++; }
}
printf("영문자 대소문자 개수 : %d개\n숫자문자 개수 : %d개\n여백문자(space,tab,enter)개수 : %d개\n그 외 기타문자 개수 : %d개\n", count[0], count[1], count[2], count[3]);

return 0;
}
*/

// fgets으로 sentence에 문장을 저장해버리니, 맨 윗줄에 쓴 것은 카운트가 안되었던 것이다!!!
//getchar로 뽑아서 비교할건데, 왜 fgets을 쓴거니!! 반성하자 (stdin에 있어야 getchar로 뽑아올 수 있다)
///////////////////////////////////////////////////////

