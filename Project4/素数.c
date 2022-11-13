//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int c = 0;
//	scanf("%d", &c);
//	for (int t = 0; t < c; t++) {
//		int n = 0;
//		scanf("%d", &n);
//		//for (n; n >1; n--) {
//		if (n > 1) {
//			int  i, z = 0;
//			for (i = n - 1; i > 1; i--) {
//				if (n % i == 0) {
//					z = 1;
//					break;
//					//continue
//				}
//			}
//			if (z == 0) {
//				printf("yes\n");
//			}
//			else if (z == 1) {
//				printf("no\n");
//			}
//		}
//		else printf("no");
//		//}
//	}
//}

/*int main()
{
	int n=1;
	for (; n < 6; n++) {}
	printf("%d", n);
}
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int func(int k);
//int main(void) {
//	int k;
//	scanf("%d", k);
//	if (func(k)) printf("yes");
//	else printf("no");
//}
//int func(int k) {
//
//}

#define _CRT_SECURE_NO_WARNINGS
#define TRUE 399
#include<stdio.h>
int main() {
	int i, j, k;
	i = 10;
	j = 12;
	k = i > j ? i : j;
	printf("%d\n", k);

	int grade = 1;
	int n = 30;
	switch (grade) {
	case 1:
	case 2:
	case TRUE + 1: printf("哈哈\n");
	case 40: printf("hahd\n");
		break;
	default:printf("?\n");
	}//可以用switch来表示不同员工的奖品（向上递增，高级包含低级奖品）

	double q = 123456789;
	printf("%f\n", q);
}