#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float price, bill,change,bill2;
	printf("������Ӧ��֧����");
	scanf("%f", &price);
	printf("������ʵ����");
	scanf("%f", &bill);
	change = bill - price;
	if (price>bill)
	{
		printf("Ǯ����,����������ʵ����");
		scanf("%f", &bill);
		change = bill - price;
	    printf("% 2f", change);
	}
	else
	{
		printf("%2f", change);
	}
	
}