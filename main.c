#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &x);
	
	if(x>0)
	{
	printf("%d.\n", x);
	}
		
	else
	{
	printf("%d.\n", -x);
	}
	return 0;
}
