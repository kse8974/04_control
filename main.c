#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int num=0;
	
	do
	{
	printf("Guess a number : ");
	scanf("%d", &x);
		
	if(x<59)
	{
	printf("low!!\n");
	num++;
	}
	
	else if(x>59)
	{
	printf("high!!\n");
	num++;
	}
	
	else
	{
	printf("Congratulation! trials: %d \n", num);
	}
	}
	while (x != 59);
	return 0;
	}
