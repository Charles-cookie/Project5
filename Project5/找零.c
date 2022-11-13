#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float price, bill,change,bill2;
	printf("请输入应该支付金额：");
	scanf("%f", &price);
	printf("请输入实付金额：");
	scanf("%f", &bill);
	change = bill - price;
	if (price>bill)
	{
		printf("钱不够,请重新输入实付金额：");
		scanf("%f", &bill);
		change = bill - price;
	    printf("% 2f", change);
	}
	else
	{
		printf("%2f", change);
	}
	
}