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
		printf("����һ��������");
		scanf("%d", &A);
		count++;
		if (A > number)
		{
			printf("����");
		}
		else if (A < number)
		{
			printf("С��");
		}
	} while (A!= number);
	printf("������%d��",count);
	
}