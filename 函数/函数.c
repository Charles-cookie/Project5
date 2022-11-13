//int isprime(int i)
//{
//	int ret = 1;
//	int k;
//	for (k = 2; k < i - 1; k++) {
//		if (i % k == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//每个函数有自己的变量空间。  形式参数/实际参数
int s(int , int );
int main(void)
{
	int sum = 0,t;
	t=s(10,25);//return的返回值表示s(10,25)的大小！
	s(30, 52);
	s(50, 85);
	printf("%d\n", t);
}
int s(int b, int e) {
	int i, m;
	int sum = 0;
	if (b < e)i = b, m = e;
	else i = e, m = b;
	for (i = b; i <= m; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return ;
}
