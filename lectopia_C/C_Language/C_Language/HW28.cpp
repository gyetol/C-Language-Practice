//HW28 ���� ���Ằ ī��Ʈ ���α׷� (getchar()�Լ� �̿�)
//����ö

#include<stdio.h>
#pragma warning (disable:4996)
#include<string.h>

int main(void)
{
	char ch;
	int count[4] = { 0,0,0,0 }; // 0����: ������ ��ҹ��� ����, 1����: ���ڹ��� ����, 2����: ���鹮�� ����, 3����: �� �� ��Ÿ���� ����

	printf("# ���� ������ �Է��Ͻÿ�:");

	while ((ch = getchar()) != EOF) {
		if ((ch >= 'A'&& ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) { count[0]++; }
		else if (ch >= '0'&&ch <= '9') { count[1]++; }
		else if (ch == ' ' || ch == '\t' || ch == '\n') { count[2]++; }
		else { count[3]++; }
	}
	printf("������ ��ҹ��� ���� : %d��\n���ڹ��� ���� : %d��\n���鹮��(space,tab,enter)���� : %d��\n�� �� ��Ÿ���� ���� : %d��\n", count[0], count[1], count[2], count[3]);

	return 0;
}

///////////////////////////////////////////////
/*
int main(void)
{
char sentence[300];
char ch;
int count[4] = { 0,0,0,0 }; // 0����: ������ ��ҹ��� ����, 1����: ���ڹ��� ����, 2����: ���鹮�� ����, 3����: �� �� ��Ÿ���� ����

printf("# ���� ������ �Է��Ͻÿ�:");
fgets(sentence, sizeof(sentence), stdin);

while ((ch = getchar()) != EOF) {
if ((ch >= 'A'&& ch <= 'Z') || (ch >= 'a'&&ch <= 'z')) { count[0]++; }
else if (ch >= '0'&&ch <= '9') { count[1]++; }
else if (ch == ' ' || ch == '\t' || ch == '\n') { count[2]++; }
else { count[3]++; }
}
printf("������ ��ҹ��� ���� : %d��\n���ڹ��� ���� : %d��\n���鹮��(space,tab,enter)���� : %d��\n�� �� ��Ÿ���� ���� : %d��\n", count[0], count[1], count[2], count[3]);

return 0;
}
*/

// fgets���� sentence�� ������ �����ع�����, �� ���ٿ� �� ���� ī��Ʈ�� �ȵǾ��� ���̴�!!!
//getchar�� �̾Ƽ� ���Ұǵ�, �� fgets�� ���Ŵ�!! �ݼ����� (stdin�� �־�� getchar�� �̾ƿ� �� �ִ�)
///////////////////////////////////////////////////////

