#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j;
	scanf("%d/%d", &i,&j);
	int a,b,x;
	a = i, b = j;
	do {
		x = a % b;
		a = b;
		b = x;
	} while (b != 0);
	//printf("%d", a);
		i /= a;
		j /= a;
		printf("%d/%d", i, j);

}