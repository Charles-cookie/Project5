#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,s=1;
	scanf("%d", &n);
//	for (int i = n; i >= 2; i--) {
//		s *= i;
//	}
	for (; n > 1;n-- ) {
		s *= n;
	}
	printf("%d", s);

}