//HW11 ASCII code�� �Է� �޾� ASCII code�� �ش� ���� ����ϱ�
//����ö

#include<stdio.h>
#pragma warning (disable:4996)

int input();
void myflush();

int main(void)
{
	int code;
	code = input();
	printf("%d�� '%c'�� ASCII code�Դϴ�.\n", code, code);

	return 0;
}

int input()
{
	int code, res;
	while (1)
	{
		printf("ASCII code���� �Է��Ͻÿ�:");
		res = scanf("%d", &code);

		if (res != 1 || (code > 128 || code < 0)) {
			printf("0�� 128������ �������� �Է��Ͻÿ�\n");
			myflush();
			continue;
		}
		else { break; }
	}
	return code;
}

void myflush()
{
	while (getchar() != '\n') { ; }
	return;
}


/////////////////////////////////////////////////
/*
1.0~127 ���� ���ڴ� �ƽ�Ű�ڵ尪 �������
2.128~255���� ���ڴ� %c�� ��½� ������ �νĵǹǷ� ���������
3.�ٽ� 256~383���� ���ڴ� �ƽ�Ű�ڵ尪 �������
4.�ٽ� 384~511���� ���������

*/
//////////////////////////////////////////////////////