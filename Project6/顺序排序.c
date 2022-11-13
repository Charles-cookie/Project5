//Ñ­»·Ç¶Ì×
//gotoÓï¾ä
//int x=pow(10,cnt-1)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	int n, t;
	 t = a;
	for (n = 10; t > 9; n*=10) {
		t = a;
		t /= n;
	}
	n/=10;
	int c;
	for (; n > 0; n /= 10) {
		c = (a-a%n)/n;
		a %= n;
		if (n >= 10) {
			printf("%d  ", c);
		}
		else
			printf("%d", c);
		
	}
}