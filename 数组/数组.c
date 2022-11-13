//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int number[100];
//	int i, sum = 0, c = 0;
//	scanf("%d", &i);
//	while (i != -1) {
//		number[c] = i;
//		c++;
//		sum += i;
//		scanf("%d", &i);
//	}
//	printf("平均数为%f\n", sum * 1.0 / c);
//
//	    int t = 2;
//		if (number[t] > sum / c) {
//			printf("%d\n", number[t]);
//		}
//	
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	int x;
//	int count[10];
//	printf("输入值");
//	scanf("%d", &x);
//	for (int i = 0; i < 10; i++) {
//		count[i] = 0;
//	}
//	while (x != -1) {
//		if (x >= 1 && x <= 9) 
//			count[x] += 1;
//			scanf("%d\n", &x);
//	}
//	for (int i= 0; i <= 9; i++) {
//		printf("%d个%d", count[i], i);
//	}
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int a[14] = { [1] = 2,4,6,[6] = 78, };
	int asd=search(78, a, sizeof a / sizeof(a[0]));
	printf("%d\n",asd);
	int i;
	for (i = 0; i < sizeof a / sizeof(a[0]); i++) {
		printf("%d\n", a[i]);
	}
	printf("%d", sizeof(a));
	int b[sizeof a / sizeof(a[0])];
	for (int t = 0; t < sizeof a / sizeof(a[0]); t++) {
		b[t] = a[t];
	}
	for (int t = 0; t < sizeof a / sizeof(a[0]); t++) {
		printf("%d\n",b[t]);
	}
}





