#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	
	printf("input a char : ");
	scanf("%c", &x);
	
	if('A'<=x && x<='Z')
	{
	printf("�̰��� �빮�� �Դϴ�.\n");
	}
		
	else if('a'<=x && x<'z')
	{
	printf("�̰��� �ҹ��� �Դϴ�.\n");
	}
	
	else if('0'<= x && x<='9')
	{
		printf("�̰��� ���� �Դϴ�.\n");
	}
	else
	{
		printf("�̰��� ��Ÿ����  �Դϴ�.\n");
	}
	return 0;
}
