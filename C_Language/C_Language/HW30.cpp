//HW30 2���� ��ȯ ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int inputInt(const char*);
void trans(int);
void myflush();

int main()
{
	int decimal;

	decimal = inputInt("10�� ������ �Է��ϼ���:");
	trans(decimal);

	return 0;
}

void trans(int decimal)
{
	int i, res, decimal1;

	printf("%d(10)=", decimal);

	for (i = 31; i >= 0; i--)
	{
		decimal1 = (decimal >> i);
		res = (decimal1 & 1);
		printf("%d", res);
	}
	printf("(2)\n");

	return;
}

int inputInt(const char* message)
{
	int result, res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%d%c", &result, &garbage);
		if (res == 2 && garbage == '\n') {
			break;
		}
		printf("�߸��� �Է��Դϴ�.\n");
		myflush();
		continue;
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}


////////////////////////////////////////////////////////////////////////////
// �����ڵ��Դϴ� ����

/*
//HW30 2���� ��ȯ ���α׷�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)
#include<math.h>

int inputInt(const char*);
void myflush();

int main(void)
{
int num,shiftNum=0x40000000;
int binaryNum[32] = { 0 };
bool res; //res�� 0�̸� ����, 1�̸� ���

num = inputInt("10�� ������ �Է��Ͻÿ�:");

if (num < 0) {
res = 0;
num = abs(num);
}

for (int i = 1; i < 32; i++)
{
if ((num&shiftNum) != 0) { binaryNum[i] = 1; }
shiftNum=shiftNum >> 1;
}
if (res == 0) {
for (int i = 0; i <= 31; i++)
{
if (binaryNum[i] == 1) { binaryNum[i] = 0; }
else { binaryNum[i] = 1; }
}
binaryNum[31] += 1;
}
for (int i = 31; i >= 1; i--)
{
if (binaryNum[i] == 2) {
binaryNum[i] = 0;
binaryNum[i - 1]++;
}
}
if (binaryNum[0] == 2) { binaryNum[0] = 0; }
if (res == 0) { num = -num; }

printf("%d(10) = ", num);
for(int i=0;i<=31;i++)
{
printf("%d",binaryNum[i]);
}
printf("(2)");

return  0;
}

int inputInt(const char* message)
{
int result, res;
char garbage;

while (1) {
printf(message);
res = scanf("%d%c", &result, &garbage);
if (res == 2 && garbage == '\n') {
break;
}
printf("�߸��� �Է��Դϴ�.\n");
myflush();
continue;
}
return result;
}

void myflush()
{
while (getchar() != '\n') { ; }

return;
} */