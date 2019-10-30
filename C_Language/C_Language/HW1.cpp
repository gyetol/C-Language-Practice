//HW1 조계철

#include<stdio.h>
#pragma warning (disable:4996)

void printAge(int);
void printHeight(double);

int main(void)
{
	char name[20] = "홍길동";
	int age = 500;
	double height = 170.8;

	printf("성명:%s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이:%d\n", age);
	
	return;
}
void printHeight(double height)
{
	printf("신장:%.2lf\n", height);

	return;
}