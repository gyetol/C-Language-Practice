//HW12 �̸��� �������� �Է� �޾� ������ ���� ���·� ����Ͻÿ�
//����ö

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void input(char*);
void output(char*);

int main(void)
{
	char name[30];
	input(name);
	output(name);

	return 0;
}

void input(char* name)
{
	printf("�̸��� �Է��Ͻÿ�:");
	fgets(name, 30, stdin);

	return;
}

void output(char*name)
{
	int len;
	len = strlen(name);
	name[len - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%+20s\"\n", name);
	printf("\"%-20s\"\n", name);

	return;
}