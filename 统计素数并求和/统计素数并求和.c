#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a, &b);
	int n=a;
	int c = 0, m = 0;
	int v;
	for (n; n <= b; n++) {
		for (v = n - 1; v >= 2; v--) {
			if (n % v == 0) {
				break;
			}
			else continue;
		}
		if (v== 1) {
			c++;
			m += n;
		}
	}
	printf("%d    %d", c, m);
}