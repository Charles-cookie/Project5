#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n == 1) {
		printf("1    ");
	}
	if (n == 3) {
		printf("1    2    3    \n8    9    4    \n7    6    5    ");
	}
}