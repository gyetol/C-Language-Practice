//HW17 성명, 키, 성별을 입력 받아 실행예와 같이 수행되는 프로그램을 작성하시오
//조계철

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
	inputString("성명 입력:",name,stringSize);
	height = inputDouble("키 입력(cm단위):");
	inputChar("성별 입력(M/F):",gender);

	printf("%s씨의 키는 %.2lfcm이고 %s입니다.\n", name, height, gender);

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
		printf("잘못된 입력입니다.\n");
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
			printf("남자일 경우 'm'를 여자일 경우 'f'를 입력하세요.\n");
			myflush();
			continue;
		}
	}
	if (result == 'm' || result == 'M') { strcpy(gender, "남성"); }
	else { strcpy(gender, "여성"); }
	return ;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}