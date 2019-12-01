//HW33 환풍구 관리 프로그램
//조계철

#include<stdio.h>
#pragma warning (disable:4996)

int menu();
int inputInt(const char*);
void myflush();
void openFan(unsigned char*);
void offFan(unsigned char*);
void reverseFan(unsigned char*);
void display(unsigned char*);

int main(void)
{
	int menuNum;
	unsigned char fan = 0;

	while (1)
	{
		menuNum = inputInt("1.환풍구 열기/ 2.환풍구 닫기/ 3.환풍구 전체 전환/ 4.종료:");
		if (menuNum < 1 || menuNum > 4) {
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		switch (menuNum)
		{
		case 1: openFan(&fan); break;
		case 2: offFan(&fan); break;
		case 3: reverseFan(&fan); break;
		case 4: break;
		}
		if (menuNum == 4) { break; }
	}

	return 0;
}

void openFan(unsigned char* fan)
{
	int fanNum;
	unsigned char criteria = 1;

	printf("-------------------------------------------------------\n");
	printf("                 ");
	printf("Fan 열기 작업 실행 화면");
	printf("                 \n");
	printf("-------------------------------------------------------\n");

	while (1)
	{
		fanNum = inputInt("OPEN할 FAN 번호를 입력하시오(1~8):");
		if (fanNum < 1 || fanNum>8) {
			printf("잘못입력하셨습니다\n");
			continue;
		}
		else { break; }
	}
	criteria = criteria << (fanNum - 1);
	*fan = *fan | criteria;
	display(fan);

	return;
}
void display(unsigned char* fan)
{
	unsigned char criteria = 0x80;

	printf("-------------------------------------------------------\n");
	printf(" 8번FAN  7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN\n");
	for (int i = 8; i >= 1; i--)
	{
		printf("  ");
		if (*fan & criteria) { printf("ON    "); }
		else { printf("OFF   "); }
		criteria = criteria >> 1;
	}
	printf("\n");

	return;
}
void offFan(unsigned char* fan)
{
	int fanNum;
	unsigned char criteria = 1;

	printf("-------------------------------------------------------\n");
	printf("                 ");
	printf("Fan 닫기 작업 실행 화면");
	printf("                 \n");
	printf("-------------------------------------------------------\n");

	while (1)
	{
		fanNum = inputInt("CLOSE할 FAN 번호를 입력하시오(1~8):");
		if (fanNum < 1 || fanNum>8) {
			printf("잘못입력하셨습니다\n");
			continue;
		}
		else { break; }
	}
	criteria = criteria << (fanNum - 1);
	criteria = ~criteria;
	*fan = *fan & criteria;
	display(fan);

	return;
}
void reverseFan(unsigned char* fan)
{
	printf("-------------------------------------------------------\n");
	printf("                 ");
	printf("Fan 전체 전환 작업 실행 화면");
	printf("                 \n");
	printf("-------------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다.(ON, OFF 상태 뒤바뀜)\n");
	printf("-------------------------------------------------------\n");

	*fan = ~*fan;

	display(fan);

	return;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n') {
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