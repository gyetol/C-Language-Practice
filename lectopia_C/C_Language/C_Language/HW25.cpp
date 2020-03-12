//HW25 ���� ���߱� ����
//����ö

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
		num = inputInt("���ڸ� �Է��ϼ���('#'�Է½� ����):");
		if (num == -1) { break; }
		else {
			if (num > correctAnswer) {
				if (num<max) {
					max = num;
					cnt++;
					printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
				}
				else {
					cnt++;
					printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
				}
			}
			else if (num < correctAnswer) {
				if (num > min) {
					min = num;
					cnt++;
					printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
				}
				else {
					cnt++;
					printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
				}

			}
			else {
				cnt++;
				printf("���~ �¾Ҵ�~~~ ��ī��ī~~~ %d ��° ���� ���߼̽��ϴ�.\n", cnt);
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
			printf("���� : 1~100������ �ڿ����� �Է��ϼ���. #�� �Է��ϸ� ������ �����մϴ�.����Ű�� ���� ������ �ٽ� ����\n");
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