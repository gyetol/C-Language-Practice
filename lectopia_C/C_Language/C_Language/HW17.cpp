//HW17 ����, Ű, ������ �Է� �޾� ���࿹�� ���� ����Ǵ� ���α׷��� �ۼ��Ͻÿ�
//����ö

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void inputString(const char*,char*, int);
double inputDouble(const char*);
void inputChar(const char*,char*);

void myflush();

int main(void)
{
	char name[30];
	double height;
	char gender[6];
	int stringSize;
	stringSize = sizeof(name);
	inputString("���� �Է�:",name,stringSize);
	height = inputDouble("Ű �Է�(cm����):");
	inputChar("���� �Է�(M/F):",gender);

	printf("%s���� Ű�� %.2lfcm�̰� %s�Դϴ�.\n", name, height, gender);

	return 0;
}

void inputString(const char* message,char* name,int stringSize)
{
	int len;
	
	printf(message);
	fgets(name, stringSize, stdin);
	len = strlen(name);
	name[len - 1] = '\0';
		
	return;
}

double inputDouble(const char* message)
{
	double result;
	int res;
	char garbage;

	while (1) {
		printf(message);
		res = scanf("%lf%c", &result, &garbage);
		if (res == 2 && garbage == '\n') {
			break;
		}
		printf("�߸��� �Է��Դϴ�.\n");
		myflush();
	}
	return result;
}

void inputChar(const char* message,char* gender)
{
	char result,garbage;
	
	while (1)
	{
		printf(message);
		scanf(" %c%c", &result,&garbage);
		if( (result == 'm' || result == 'M' || result == 'f' || result == 'F')&&garbage=='\n' ){ break; }
		else { 
			printf("������ ��� 'm'�� ������ ��� 'f'�� �Է��ϼ���.\n");
			myflush();
			continue;
		}
	}
	if (result == 'm' || result == 'M') { strcpy(gender, "����"); }
	else { strcpy(gender, "����"); }
	return ;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}