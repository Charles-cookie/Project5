#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(0));
	int number=rand()%100+1;
	int A;
	int count = 0;
	
	do
	{
		printf("输入一个整数：");
		scanf("%d", &A);
		count++;
		if (A > number)
		{
			printf("大了");
		}
		else if (A < number)
		{
			printf("小了");
		}
	} while (A!= number);
	printf("你用了%d次",count);
	
}