//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
////	2/1 2/3 5/3 /5/8 13/8 21/13
//	int i=2, j=1,t=0,c=0;
//	float s=0.0;
//	for (c; c < n; c++) {
//		s += (i * 1.0) / (j * 1.0);
//		t = i;
//		i = i + j;
//		j = t;
//	}
//	printf("%.2f", s);
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	for (; n > 0; n--)
//	{
//		int year = 0;
//		scanf("%d", &year);
//
//		if (year > 0) {
//
//			if (year % 100 == 0)
//			{
//				year = year / 100;
//				if (year % 4 == 0)
//				{
//					m = 1;
//				}
//				else
//				{
//					m = 0;
//				}
//			}
//			else if (year % 100 != 0)
//			{
//				if (year % 4 == 0)
//				{
//					m = 1;
//				}
//				else
//				{
//					m = 0;
//				}
//			}
//		}
//		if (m == 1)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#define N 20
#include <stdio.h>
int main()
{
	int scu[N]={[15]=3,[17]=3,[8]=3,4};
	for (int i = 0; i < 20; i++) {
		printf("%d", scu[i]);
	}

	//int n, m;
	//scanf("%d", &n);
	//for (; n > 0; n--)
	//{
	//	int year = 0;
	//	scanf("%d", &year);

	//	if (year > 0) {

	//		if (year % 100 == 0)
	//		{
	//			year = year / 100;
	//			if (year % 4 == 0)
	//			{
	//				printf("yes\n");
	//			}
	//			else
	//			{
	//				printf("no\n");
	//			}
	//		}
	//		else
	//		{
	//			if (year % 4 == 0)
	//			{
	//				printf("yes\n");
	//			}
	//			else
	//			{
	//				printf("no\n");
	//			}
	//		}
	//	}

	//}

	return 0;
}
