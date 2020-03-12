//HW26 ���� ���� �� ������ ����� ����
//����ö

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
		mode = inputInt("1. �����̹����\n2. �Ǽ��������\n3. ��������\n\n���Ӹ�带 �����ϼ���:");
		switch (mode)
		{
		case 1: survivalMode(); break;
		case 2: roundMode(); break;
		case 3: printf("������ �����մϴ�.\n"); break;
		}
		if (mode == 3) { break; }
	}

	return 0;
}

void roundMode()
{
	int comRCP; // ��ǻ���� RockScissorPaper
	int userRCP; // ������� RockScissorPaper
	int score[3] = { 0,0,0 }; // ����
	int i, round;

	round = inputRound("���� ����Դϴ�. ������������ ������ �Ǽ��� �Է��ϼ���(1�� �̻� 20�� ����):");
	for (i = 1; i <= round; i++)
	{
		if (round == -1) { break; }
		else {
			comRCP = random(3) + 1;
			userRCP = inputInt("������ 1, ������ 2, ���� 3 �߿��� �����ϼ���('#'�Է½� ��������):");
			if (userRCP == -1) { break; }
			else {
				if (userRCP == 1) {
					if (comRCP == 1) { printf("����� ���� ����, ��ǻ�͵� ���� ����, �����ϴ�.\n"); score[1]++; }
					else if (comRCP == 2) { printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n"); score[0]++; }
					else { printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n"); score[2]++; }
				}
				else if (userRCP == 2) {
					if (comRCP == 2) { printf("����� ���� ����, ��ǻ�͵� ���� ����, �����ϴ�.\n"); score[1]++; }
					else if (comRCP == 3) { printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�.\n"); score[0]++; }
					else { printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n"); score[2]++; }
				}
				else {
					if (comRCP == 3) { printf("����� �� ����, ��ǻ�͵� �� ����, �����ϴ�.\n"); score[1]++; }
					else if (comRCP == 1) { printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n"); score[0]++; }
					else { printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");  score[2]++; }
				}
			}
		}

	}
	printf("\n������ %d�� %d�� %d��\n\n", score[0], score[1], score[2]);
}

void survivalMode()
{
	int comRCP; // ��ǻ���� RockScissorPaper
	int userRCP; // ������� RockScissorPaper
	int score[2] = { 0,0 }; // ����

	printf("�����̹� ����Դϴ�. �� ���̶� ���� ������ �����ϴ�.\n");
	while (1)
	{
		comRCP = random(3) + 1;
		userRCP = inputInt("������ 1, ������ 2, ���� 3 �߿��� �����ϼ���('#'�Է½� ��������):");
		if (userRCP == -1) { break; }
		else {
			if (userRCP == 1) {
				if (comRCP == 1) { printf("����� ���� ����, ��ǻ�͵� ���� ����, �����ϴ�.\n"); score[1]++; }
				else if (comRCP == 2) { printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n"); score[0]++; }
				else { printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n\n����� ������ %d�� %d��\n\n", score[0], score[1]); break; }
			}
			else if (userRCP == 2) {
				if (comRCP == 2) { printf("����� ���� ����, ��ǻ�͵� ���� ����, �����ϴ�.\n"); score[1]++; }
				else if (comRCP == 3) { printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�.\n"); score[0]++; }
				else { printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n\n����� ������ %d�� %d��\n\n", score[0], score[1]); break; }
			}
			else {
				if (comRCP == 3) { printf("����� �� ����, ��ǻ�͵� �� ����, �����ϴ�.\n"); score[1]++; }
				else if (comRCP == 1) { printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n"); score[0]++; }
				else { printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n\n����� ������ %d�� %d��\n\n", score[0], score[1]); break; }
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
			printf("1�̻� 20������ �Ǽ��� �Է��ϼ���.#�� �Է½� ��������\n");
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
			if (strcmp(message, "1. �����̹����\n2. �Ǽ��������\n3. ��������\n\n���Ӹ�带 �����ϼ���:") == 0) {
				printf("1,2,3 ���� ���ڸ� �Է��ϼ���. 1�� �����̹����, 2�� �Ǽ�������� , 3�� ��������.\n");
				myflush();
				continue;
			}
			else {
				printf("1,2,3 ���� ���ڸ� �Է��ϼ���. 1�� ����, 2�� ���� , 3�� ���Դϴ�.#�� �Է½� �������� \n");
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