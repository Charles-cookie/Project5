#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int A;
	scanf("%d", &A);
	if (A > 6) {
		printf("ด๓มห");
	}
	else if(A<=0){
		printf("ดํ");
	}
	else{
		int i=A,j=A,k=A;
		int c=0;
		for (i; i <= A + 3; i++) {

			for (j=A; j <= A + 3; j++) {
				if (j != i) {
					for (k=A; k <= A + 3; k++) {
						if (k != i) {
							if (k != j) {
								c++;								
								if (c % 6 != 0) {
									printf("%d%d%d  ", i, j, k);
								}
								else printf("%d%d%d\n",i,j,k);
							}
							else continue;
						}
						else continue;
					}
				}
				else printf("");
			}
			
		}

	}


}