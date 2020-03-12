//HW25 숫자 맞추기 게임
//조계철

#include<stdio.h>
#pragma warning (disable:4996)
#include<stdlib.h>
#include<time.h>

int random(int);
int inputInt(const char*);
void myflush();

int main(void)
{
	int correctAnswer, num, i = 0;
	int max = 100, min = 0, cnt = 0;
	srand((unsigned int)time(NULL));
	correctAnswer = random(99) + 1;

	while (1)
	{
		num = inputInt("숫자를 입력하세요('#'입력시 종료):");
		if (num == -1) { break; }
		else {
			if (num > correctAnswer) {
				if (num<max) {
					max = num;
					cnt++;
					printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
				}
				else {
					cnt++;
					printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
				}
			}
			else if (num < correctAnswer) {
				if (num > min) {
					min = num;
					cnt++;
					printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
				}
				else {
					cnt++;
					printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
				}

			}
			else {
				cnt++;
				printf("우와~ 맞았당~~~ 추카추카~~~ %d 번째 만에 맞추셨습니다.\n", cnt);
				break;
			}
		}
	}

	return 0;
}

int inputInt(const char* message)
{
	int res, result;
	char garbage;

	while (1)
	{
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && garbage == '\n' && (result >= 1 && result <= 100)) { break; }
		else if (res == 0 && getchar() == '#') {
			myflush();
			return -1;
		}
		else {
			printf("오류 : 1~100사이의 자연수를 입력하세요. #을 입력하면 게임을 종료합니다.엔터키를 눌러 게임을 다시 진행\n");
			myflush();
			continue;
		}
	}
	return result;
}

int random(int n)
{
	int res;
	res = rand() % n;

	return res;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}