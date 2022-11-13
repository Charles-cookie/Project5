#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n < 0) {
		printf("fu ");
		n = -n;
	}
	int t=1,m=n;
	for (m ;  m>9 ;t*=10) {
		m/= 10;
	}
	int i;
	for (n; t> 0; t/=10) {
		i =n/t;
		if (i >= 9) {
			printf("jiu ");
		}
		else	if (i >= 8) {
			printf("ba ");
		}
		else	if (i >= 7) {
			printf("qi ");
		}
		else	if (i >= 6) {
			printf("liu ");
		}
		else	if (i >= 5) {
			printf("wu ");
		}
		else if (i >= 4) {
			printf("si ");
		}
		else if (i >= 3) {
			printf("san ");
		}
		else if (i >= 2) {
			printf("er ");
		}
		else if (i >= 1) {
			printf("yi ");
		}
		else printf("ling ");
		n %= t;
	}
}