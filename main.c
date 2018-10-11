#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	
	printf("input a char : ");
	scanf("%c", &x);
	
	if('A'<=x && x<='Z')
	{
	printf("이것은 대문자 입니다.\n");
	}
		
	else if('a'<=x && x<'z')
	{
	printf("이것은 소문자 입니다.\n");
	}
	
	else if('0'<= x && x<='9')
	{
		printf("이것은 숫자 입니다.\n");
	}
	else
	{
		printf("이것은 기타글자  입니다.\n");
	}
	return 0;
}
