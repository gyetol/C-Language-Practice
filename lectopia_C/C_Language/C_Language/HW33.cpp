//HW33 ȯǳ�� ���� ���α׷�
//����ö

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
		menuNum = inputInt("1.ȯǳ�� ����/ 2.ȯǳ�� �ݱ�/ 3.ȯǳ�� ��ü ��ȯ/ 4.����:");
		if (menuNum < 1 || menuNum > 4) {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
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
	printf("Fan ���� �۾� ���� ȭ��");
	printf("                 \n");
	printf("-------------------------------------------------------\n");

	while (1)
	{
		fanNum = inputInt("OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1~8):");
		if (fanNum < 1 || fanNum>8) {
			printf("�߸��Է��ϼ̽��ϴ�\n");
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
	printf(" 8��FAN  7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN\n");
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
	printf("Fan �ݱ� �۾� ���� ȭ��");
	printf("                 \n");
	printf("-------------------------------------------------------\n");

	while (1)
	{
		fanNum = inputInt("CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1~8):");
		if (fanNum < 1 || fanNum>8) {
			printf("�߸��Է��ϼ̽��ϴ�\n");
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
	printf("Fan ��ü ��ȯ �۾� ���� ȭ��");
	printf("                 \n");
	printf("-------------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON, OFF ���� �ڹٲ�)\n");
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
			printf("�߸��� �Է��Դϴ�.\n");
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