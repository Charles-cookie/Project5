#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, sum=0, c=0;
	scanf("%d",& i);
	while (i != -1) {
		c++;
		sum += i;
		scanf("%d", &i);
	}
	printf("平均数为%f\n", sum * 1.0 / c);
}