#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i,t;
	double j;
	scanf("%d",&i);
	t = i/100000;
	switch (t) {
	case 0:j = 0.1 * i;
		printf("%.2f", j);
		break;
	case 1:j = 100000 * 0.1+ (i - 100000) * 0.075;
		printf("%.2f", j);
		break;
	case 2:j = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
		printf("%.2f", j);
		break;
	/*case 3:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (i - 200000) * 0.05;
		printf("%.2f", j);
		break;*/
	case 4:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05+(i-400000)*0.03;
		printf("%.2f", j);
		break;
	//case 5:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (i - 400000) * 0.03;
	//	printf("%.2f", j);
	//	break;
	case 6:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03+(i-600000)*0.015;
		printf("%.2f", j);
		break;
	//case 7:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (i - 600000) * 0.015;
	//	printf("%.2f", j);
	//	break;
	//case 8:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (i - 600000) * 0.015;
	//	printf("%.2f", j);
	//	break;
	//case 9:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (i - 600000) * 0.015;
	//	printf("%.2f", j);
	//	break;
	default:j = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + ( 1000000- 600000) * 0.015+(i-1000000)*0.01;
		printf("%.2f", j);
		break;
	}
	
}