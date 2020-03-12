//HW26 가위 바위 보 게임을 만들어 보자
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#include<stdlib.h>
#include<time.h>
#include<string.h>

int random(int);
int inputInt(const char*);
int inputRound(const char*);
void myflush();
void survivalMode();
void roundMode();


int main(void)
{
	int mode;
	srand((unsigned int)time(NULL));

	while (1)
	{
		mode = inputInt("1. 서바이벌모드\n2. 판수지정모드\n3. 게임종료\n\n게임모드를 선택하세요:");
		switch (mode)
		{
		case 1: survivalMode(); break;
		case 2: roundMode(); break;
		case 3: printf("게임을 종료합니다.\n"); break;
		}
		if (mode == 3) { break; }
	}

	return 0;
}

void roundMode()
{
	int comRCP; // 컴퓨터의 RockScissorPaper
	int userRCP; // 사용자의 RockScissorPaper
	int score[3] = { 0,0,0 }; // 전적
	int i, round;

	round = inputRound("라운드 모드입니다. 가위바위보를 진행할 판수를 입력하세요(1판 이상 20판 이하):");
	for (i = 1; i <= round; i++)
	{
		if (round == -1) { break; }
		else {
			comRCP = random(3) + 1;
			userRCP = inputInt("바위는 1, 가위는 2, 보는 3 중에서 선택하세요('#'입력시 게임종료):");
			if (userRCP == -1) { break; }
			else {
				if (userRCP == 1) {
					if (comRCP == 1) { printf("당신은 바위 선택, 컴퓨터도 바위 선택, 비겼습니다.\n"); score[1]++; }
					else if (comRCP == 2) { printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다.\n"); score[0]++; }
					else { printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다.\n"); score[2]++; }
				}
				else if (userRCP == 2) {
					if (comRCP == 2) { printf("당신은 가위 선택, 컴퓨터도 가위 선택, 비겼습니다.\n"); score[1]++; }
					else if (comRCP == 3) { printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다.\n"); score[0]++; }
					else { printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다.\n"); score[2]++; }
				}
				else {
					if (comRCP == 3) { printf("당신은 보 선택, 컴퓨터도 보 선택, 비겼습니다.\n"); score[1]++; }
					else if (comRCP == 1) { printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다.\n"); score[0]++; }
					else { printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다.\n");  score[2]++; }
				}
			}
		}

	}
	printf("\n전적은 %d승 %d무 %d패\n\n", score[0], score[1], score[2]);
}

void survivalMode()
{
	int comRCP; // 컴퓨터의 RockScissorPaper
	int userRCP; // 사용자의 RockScissorPaper
	int score[2] = { 0,0 }; // 전적

	printf("서바이벌 모드입니다. 한 번이라도 지면 게임이 끝납니다.\n");
	while (1)
	{
		comRCP = random(3) + 1;
		userRCP = inputInt("바위는 1, 가위는 2, 보는 3 중에서 선택하세요('#'입력시 게임종료):");
		if (userRCP == -1) { break; }
		else {
			if (userRCP == 1) {
				if (comRCP == 1) { printf("당신은 바위 선택, 컴퓨터도 바위 선택, 비겼습니다.\n"); score[1]++; }
				else if (comRCP == 2) { printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다.\n"); score[0]++; }
				else { printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다.\n\n당신의 전적은 %d승 %d무\n\n", score[0], score[1]); break; }
			}
			else if (userRCP == 2) {
				if (comRCP == 2) { printf("당신은 가위 선택, 컴퓨터도 가위 선택, 비겼습니다.\n"); score[1]++; }
				else if (comRCP == 3) { printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다.\n"); score[0]++; }
				else { printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다.\n\n당신의 전적은 %d승 %d무\n\n", score[0], score[1]); break; }
			}
			else {
				if (comRCP == 3) { printf("당신은 보 선택, 컴퓨터도 보 선택, 비겼습니다.\n"); score[1]++; }
				else if (comRCP == 1) { printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다.\n"); score[0]++; }
				else { printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다.\n\n당신의 전적은 %d승 %d무\n\n", score[0], score[1]); break; }
			}
		}
	}
	return;
}

int inputRound(const char* message)
{
	int res, result;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && result >= 1 && result <= 20 && garbage == '\n') { break; }
		else if (res == 0 && getchar() == '#') {
			myflush();
			return -1;
		}
		else {
			printf("1이상 20이하의 판수를 입력하세요.#을 입력시 게임종료\n");
			myflush();
			continue;
		}
	}
	return result;
}

int inputInt(const char* message)
{
	int res, result;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && result >= 1 && result <= 3 && garbage == '\n') { break; }
		else if (res == 0 && getchar() == '#') {
			myflush();
			return -1;
		}
		else {
			if (strcmp(message, "1. 서바이벌모드\n2. 판수지정모드\n3. 게임종료\n\n게임모드를 선택하세요:") == 0) {
				printf("1,2,3 중의 숫자를 입력하세요. 1은 서바이벌모드, 2는 판수지정모드 , 3은 게임종료.\n");
				myflush();
				continue;
			}
			else {
				printf("1,2,3 중의 숫자를 입력하세요. 1은 바위, 2는 가위 , 3은 보입니다.#을 입력시 게임종료 \n");
				myflush();
				continue;
			}
		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}