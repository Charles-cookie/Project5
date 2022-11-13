//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n,t;
//	scanf("%d", &n);
//	int x;
//	for (t = 1; t <= n; t++) {
//		for (x=1; x <= t; x++) {
//			int s = x * t;
//			if (s < 10) {
//				if (x != t) {
//					printf("%d*%d=%d   ", x, t, s);
//				}
//				else printf("%d*%d=%d   \n", x, t, s);
//			}
//			else {
//				if (x != t) {
//					printf("%d*%d=%d  ", x, t, s);
//				}
//				else printf("%d*%d=%d  \n", x, t, s);
//			}
//			}
//		}
//	}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	for (int c = 1; c <= 9; c++) {
		for (int i = 1; i <= c; i++) {
			printf("%d*%d=%d", c, i, c * i);
			if (i == c)printf("\n");
			else printf(" ");
		}
	}
}