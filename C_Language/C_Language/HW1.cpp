//HW1 ����ö

#include<stdio.h>
#pragma warning (disable:4996)

void printAge(int);
void printHeight(double);

int main(void)
{
	char name[20] = "ȫ�浿";
	int age = 500;
	double height = 170.8;

	printf("����:%s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("����:%d\n", age);
	
	return;
}
void printHeight(double height)
{
	printf("����:%.2lf\n", height);

	return;
}