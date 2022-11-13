	//#define _CRT_SECURE_NO_WARNINGS
	//#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int sz[15][15] = { 0 };
	int n;
	scanf("%d", &n);
	int b = n;
	int hang = 0, lie = -1, shu = 1;
	do {
		for (lie++; lie < b; ) {
			if (shu > n * n)goto x;
			if(hang>=0&&lie>=0)
			sz[hang][lie] = shu;
			shu++;
			lie++;
		}
		lie--;
		for (hang++; hang < b;) {
			if (shu > n * n)goto x;
			if (hang >= 0 && lie >= 0)
			sz[hang][lie] = shu;
			shu++;
			hang++;
		}
		hang--;
		for (lie--; lie >= n - b; ) {
			if (shu > n * n)goto x;
			if (hang >= 0 && lie >= 0)
			sz[hang][lie] = shu;
			shu++;
			lie--;
		}
		lie++;
		b--;
		for (hang--; hang >= n - b;) {
			if (shu > n * n)goto x;
			if (hang >= 0 && lie >= 0)
			sz[hang][lie] = shu;
			shu++;
			hang--;
		}
		hang++;
	} while (0==0);
	x:
	for (int i = 0; i < n; i++) {
		for (int l = 0; l < n; l++) {
			if (l != n - 1) {
				if (sz[i][l] < 10)
					printf("%-5d", sz[i][l]);
				else if (sz[i][l] >= 10)
					printf("%-5d", sz[i][l]);
				else if (sz[i][l] >= 100)
					printf("%-5d", sz[i][l]);
			}
			else {
				if (sz[i][l] < 10)
					printf("%-5d\n", sz[i][l]);
				else if (sz[i][l] >= 10)
					printf("%-5d\n", sz[i][l]);
				else if (sz[i][l] >= 100)
					printf("%-5d\n", sz[i][l]);
			}
		}
	}
}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	char zfc;
//	char sz[1000];
//	int i = 0;
//	do {
//		scanf("%c", &zfc);
//		if (zfc != '\n') {
//			sz[i] = zfc;
//			i++;
//		}
//	} while (zfc != '\n');
//	for (int j = 0; j < i; j++) {
//		int o = 0;
//		for(int f=j-1;f>=0;f--){
//			if (sz[j] == sz[f]) {
//				o = 1;
//				break;
//			}
//		}
//		if (o == 0)printf("%c", sz[j]);
//	}
//}

//int main()
//{
//	int a[10000][5] = { 0 };
//	for (int ii = 0;; ii++) {
//		for (int i = 0; i < 5; i++) {
//			scanf("%d", &a[ii][i]);
//		}
//		if (a[ii][4] == 0 && a[ii][3] == 0 && a[ii][2] == 0 && a[ii][1] == 0 && a[ii][0] == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}
//		if (a[ii][4] - a[ii][3] == a[ii][3] - a[ii][2] && a[ii][3] - a[ii][2] == a[ii][2] - a[ii][1] && a[ii][2] - a[ii][1] == a[ii][1] - a[ii][0] && a[ii][1] - a[ii][0] != 0 && a[ii][0] > 0 && a[ii][4] > 0)
//			printf("Arithmetic Progression\n");
//		else if (a[ii][4] / a[ii][3] == a[ii][3] / a[ii][2] && a[ii][3] / a[ii][2] == a[ii][2] / a[ii][1] && a[ii][2] / a[ii][1] == a[ii][1] / a[ii][0] && a[ii][2] / a[ii][1] != 1 && a[ii][0] > 0 && a[ii][1] > 0)
//			printf("Geometric Progression\n");
//		else if (a[ii][4] == a[ii][3] + a[ii][2] && a[ii][3] + a[ii][2] == 2 * a[ii][2] + a[ii][1] && 2 * a[ii][2] + a[ii][1] == 3 * a[ii][1] + 2 * a[ii][0])
//			printf("Fibonacci Sequence\n");
//		else printf("Input Error\n");
//	}
//	return 0;
//}

//int main(void) {
//		int sz[5]={0};
//		int sz1[1000];
//		int i,t=0;
//		for (i = 0; i < 1000; i++) {
//			scanf("%d",&sz1[i]);
//			if (i>3&&sz1[i] == 0 && sz1[i - 1] == 0 && sz1[i - 2] == 0 && sz1[i - 3] == 0 && sz1[i - 4] == 0)
//				break;
//		}
//		do {
//			for (int q = 0; q<5; q++) {
//				sz[q] = sz1[t];
//				t++;
//			}
//			if (sz[0] == 0 && sz[1] == 0 && sz[2] == 0 && sz[3] == 0 && sz[4] == 0)
//				printf("End Of Input\n");
//			else if (sz[0] <= 0 || sz[1] <= 0 || sz[2] <= 0 || sz[3] <= 0 || sz[4] <= 0) {
//				printf("Input Error\n");
//			}
//			else {
//				int cha=sz[0]-sz[1],biao=0;
//				for(int i=1;i++;i<4){
//					if (sz[i] - sz[i + 1] != cha||cha==0) {
//						biao = 1;
//						break;
//					}
//				}
//				if(biao==0) printf("Arithmetic Progression\n");
//				else {
//					if ( (sz[4] / sz[3] == sz[3] / sz[2] && sz[3] / sz[2] == sz[2] / sz[1] && sz[2] / sz[1] == sz[1] / sz[0] && sz[4] / sz[3] != 1 && sz[4] / sz[3] != 0 ))
//						printf("Geometric Progression\n");
//					else if (sz[0] + sz[1] == sz[2] && sz[1] + sz[2] == sz[3] && sz[2] + sz[3] == sz[4])
//						printf("Fibonacci Sequence\n");
//					else printf("Input Error\n");
//				}
//			}
//		} while (sz[0] != 0 || sz[1] != 0 || sz[2] != 0 || sz[3] != 0 || sz[4] != 0);
//		return 0;
//	} 

 //int main( ) { 
	//	char a[1000] = { 0 }; 
	//	int cat = 0;
	//	 int cat1 = 0;
	//	int d = 0, e = 0; 
 //for (int i = 0;; i++) { 
	// scanf("%c", &a[i]);
	// if (a[i] != '\n') {
	//	 cat++; 
	// }
	// else {
	//	 break; 
	// } 
 //}
 //char b[1000] = { 0 }; 
 //for (int c = 0; c < cat; c++) { 
	// scanf("%c", &b[c]);
	//if (b[c] != '\n')  { 
	// cat1++; 
	//} 
	// else { 
	//	break; 
	//} 
 //} 
 //for (int i = 0; i < cat; i++) { 
	// for (int c = 0; c< cat; c++) { 
	//	 if (a[i] == b[c]) { 
	//		 d = i; e = i - c;
	//		 break;
	//	 }
	//	 else { 
	//		 d = -1; 
	//	 } 
	// } 
	// if (d == i)
	//	 break; 
 //}
 //int mm = 1; 
 //for (; d < cat1; d++) {
	// if (a[d] != b[d - e] || d == -1) mm = 0; 
 //}
 //if (mm) { printf("YES"); } 
 //else { printf("NO"); } 
 //return 0;
 //}

//int main(void) {
//	char i,j;
//	char sz1[100];
//	char sz2[100];
//	int t = 0;
//	do {
//		scanf("%c", &i);
//		if (i != '\n')
//		{
//			sz1[t] = i;
//			t++;
//		}
//	} while (i != '\n');
//	int p = 0;
//	do {
//		scanf("%c", &j);
//		if (j != '\n') {
//			sz2[p] = j;
//			p++;
//		}
//	} while (j != '\n');
//	int as = 1;
//	int o;
//	for (o = 0; o < t; o++) {
//		if (sz2[0] == sz1[o]) {
//			as = 0;
//			int z, su = 0;
//			for (z = 1; z < p; z++) {
//				o++;
//				if (sz2[z] != sz1[o]) {
//					su = 1;
//					break;
//				}
//			}
//			if (su == 0)printf("YES");
//			else printf("NO");
//			break;
//		}
//	}
//	if (as == 1) printf("NO");
//}

//int main(void) {
//	int t,n;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		int sum = 0;
//		int sz[1000] = { 0 };
//		scanf("%d", &n);
//		for (int j = 0; j < n; j++) {
//			if(j<n-1)
//			scanf("%d ", &sz[j]);
//			else
//			scanf("%d", &sz[j]);
//			}
//		for(int j=0;j<n;j++){
//			if (j == 0)
//				sum += sz[j] * 6;
//			else if (sz[j] < sz[j - 1])
//				sum += (sz[j - 1] - sz[j]) * 4;
//			else
//				sum += (sz[j] - sz[j - 1]) * 6;
//		}
//		sum += n * 5;
//		printf("%d\n", sum);
//	}
//}

//int main(void) {
//	char word[] = { 'a', 'b', 'c', '\0'};
//	scanf("%c", 'a');
//}字符串

//int main(void) {
//	//int number;
//	//int* a;
//	//int i;
//	//printf("输入数量：");
//	//scanf("%d", &number);
//	//a = (int*)malloc(number * sizeof(int));
//	//for (i = 0; i < number; i++) {
//	//	scanf("%d", &a[i]);
//	//}
//	//free(a);
//	//return 0;
//	void* p=0;
//	int cnt = 0;
//	while (p = malloc(1024*1024 * 1024)){
//		cnt++;
//			printf("%d", cnt);
//	}
//	return 0;
//	
//}
// #include<stdlib.h>
// //int*a=0;
// //a=(int*)malloc(45*52);
// //free (a);

//int main(void) {
//	int  ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
//	int sz[20] = { 0 };
//	int *p1 = ac;
//	int *p2 = &ac[2];
//	do {
//		printf("%d\n", *p1++);
//	} while (*p1!=-1);
//	printf("%d\n", *p2);
//	//NULL void*p=

//int ai[] = { 2555555555555555555,1,2,3,4,5,6,7,8,9 };
	//int * q = &ai[5];
	//printf("%d\n", p1-p);
	//printf("%p\n", q);
	//printf("%p\n", q + 1);
	//}

//int main( ) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int m;
//	    scanf("%d", &m);
//		int sz[1000]={0}, sz1[1000]={0};
//		for (int c = 0; c < m; c++) {
//			int shuru;
//			if (c != m - 1) {
//				scanf("%d ", &shuru);
//			}
//			else scanf("%d", &shuru);
//			sz[c] = shuru;
//		}
//		int y = 0;
//		int q = m - 1;
//		for (int i = 0; i < m; i++) {
//			if (sz[i] == 0) {
//				sz1[q] = 0;
//				q--;
//			}
//			else {
//				sz1[y] = sz[i];
//				y++;
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			if (i < m - 1)
//				printf("%d ", sz1[i]);
//			else printf("%d\n", sz1[i]);
//		}
//	}
//}//把零放到数列最后

//int func(int y);
//int main() {
//	int n;
//	scanf("%d", &n);
//	int xt;
//	for (int i = 0; i < n; i++) {
//		int y, m, d;
//		scanf("%d %d %d",&y,&m,&d);
//		if (func(y)) {
//			switch (m){
//			case 1:xt = d; break;
//			case 2:xt = 31 + d; break;
//			case 3:xt = 31 + 28 + d; break;
//			case 4:xt = 31 + 28 + 31+d;  break;
//			case 5:xt = 31 + 28 + 31+30+d; break;
//			case 6:xt = 31 + 28 + 31+30+31+d; break;
//			case 7:xt = 31 + 28 + 31 + 30 + 31 + d+30; break;
//			case 8:xt = 31 + 28 + 31 + 30 + 31 + d+30+31; break;
//			case 9:xt = 31 + 28 + 31 + 30 + 31 + d+30+31+31; break;
//			case 10:xt = 31 + 28 + 31 + 30 + 31 + d+30+31+31+30; break;
//			case 11:xt = 31 + 28 + 31 + 30 + 31 + d+30+31+31+30+31; break;
//			default:xt = 31 + 28 + 31 + 30 + 31 + d+30+31+31+30+31+30; break;
//			}
//		}
//		else {
//			switch (m) {
//			case 1:xt = d; break;
//			case 2:xt = 31 + d; break;
//			case 3:xt = 31 + 29 + d; break;
//			case 4:xt = 31 + 28 + 31 + d;  break;
//			case 5:xt = 31 + 28 + 31 + 30 + d; break;
//			case 6:xt = 31 + 28 + 31 + 30 + 31 + d; break;
//			case 7:xt = 31 + 28 + 31 + 30 + 31 + d + 30; break;
//			case 8:xt = 31 + 28 + 31 + 30 + 31 + d + 30 + 31; break;
//			case 9:xt = 31 + 28 + 31 + 30 + 31 + d + 30 + 31 + 31; break;
//			case 10:xt = 31 + 28 + 31 + 30 + 31 + d + 30 + 31 + 31 + 30; break;
//			case 11:xt = 31 + 28 + 31 + 30 + 31 + d + 30 + 31 + 31 + 30 + 31; break;
//			default:xt = 31 + 28 + 31 + 30 + 31 + d + 30 + 31 + 31 + 30 + 31 + 30; break;
//			}
//		}
//		printf("%d\n", xt);
//	}
//}
//int func(int y) {
//	
//	if(y%400==0||(y%4==0&&y%100!=0)) {
//		return 0;
//	}
//	else return 1;
//}

//int main() {
//	int n,sz[1000]={0,1},sz1[1000]={0,1};
//	scanf("%d", &n);
//	if (n < 21 && n>0) {
//		for (int i = 1; i < n + 1; i++) {
//			if (i % 2 != 0) {
//				int c;
//				for (c = 1; c < i + 1; c++) {
//					sz1[c] = sz[c] + sz[c - 1];
//				}
//				int p = 1;
//				while (sz1[p] != 0) {
//					printf("%d,", sz1[p]);
//					p++;
//				}
//				printf("\n");
//			}
//			else {
//				int c;
//				for (c = 1; c < i + 1; c++) {
//					sz[c] = sz1[c] + sz1[c - 1];
//				}
//				int p = 1;
//				while (sz[p] != 0) {
//					printf("%d,", sz[p]);
//					p++;
//				}
//				printf("\n");
//			}
//		}
//	}
//	else printf("Input Error");
//}	  杨辉三角

//int main() {
//	int x;
//	do{
//		x = getchar();
//		if (x >= 65 && x <= 90) {
//			x = 32 + x;
//			printf("%c", x);
//			continue;
//		}
//		 else if (x >= 97 && x <= 122){
//			x = x - 32;
//			printf("%c", x);
//			continue;
//		}
//		 else if(x!=10)
//		 printf("^_^");
//	} while (x != '\n');
//}               //字符转换！！！

//func(int i, int j, int* t);
//int main(){
//	int a = 20;
//	int b = 0;
//	int res;
//	if (func(a, b, &res))
//		printf("%d", res);
//	else printf("error");
//}
//int func(int i, int j, int* t) {
//	int ret = 1;
//	if (j != 0) {
//		*t = i / j;
//	}
//	else ret = 0;
//	return ret;
//}

//void minmax(int a[ ], int length, int* t, int* x);
//int main(void) {
//int a[ ] = { 52,64,87,44,58,78,42,37,85,61,56,46,85,45,55 };
//int min, max;
//minmax ( a, sizeof(a) / sizeof(a[0]), &min, &max);
//printf("min=%d,max=%d\n", min, max);
//}
//void minmax(int a[ ], int length, int* t, int* x) {
//	*t = a[0], * x = a[0];
//	for (int i = 1; i < length; i++) {
//		if (a[i] < *t) *t = a[i];
//		if (a[i] > *x) *x = a[i];
//	}
//}

//int main(void) {
//	//int a[3][5];
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		a[i][j] = i * j;
//	//	}
//	//}
//	
//	//int a[][5] = {
//	//	{3,5,6},
//	//	{0},
//	//	{0},
//	//	{0},
//	//};
////	printf("%d", a[3][4]);
//	int i = 10;
//	int j = 46;
//	swap ( &i, &j);
//	printf("%d,%d", i, j);
//}
//void swap(int* pa, int* pb) {
//	int t = *pa;
//	* pa = *pb;
//	* pb = t;
//}

//#include<stdio.h>
//int isprime(int x, int knownprime[], int numberofknownprimes);
//int main(void) {
//	int prime[10]={2};
//	int count = 1;
//	int i = 3;
//	for (i = 0; i < 10; i++) {
//		printf("%d\t", i);
//	}
//	printf("\n");
//	while (count < 10) {
//
//	}
//
//}
//
//

//int main(void) {
//	int n;
//	int sz[1000]={-1};
//	int sz1[1000]={-1};
//	scanf("%d", &n);
//	for (int i= 0;i<n;i++) {
//		scanf("%d", &sz[i]);
//		if (i < n - 1) scanf(" ");
//		sz1[i] = sz[i];
//	}
//	int p;
//	for (p = 0; p < n; p++) {
//		int v = 0;
//		for (int m = 0; m < n; m++) {
//			if (m == p) continue;
//			else {
//				if (sz[p] == sz1[m])
//					v = 1;
//				else continue;
//			}
//		}
//		if (v == 0) printf("%d", sz[p]);
//	}
//}                 找单身狗（1，2，1，2，3）   

//int main() {
//	int m;
//    scanf ("%d ", &m);
//	if (m >= 1 && m <= 20) {
//		int shuzu[20];
//		int c;
//		for (c=0; m > 0;m--,c++) {
//			int t = 0;
//			if (m != 1) scanf("%d ", &t);
//			else scanf("%d", &t);
//			shuzu[c] = t;
//		}
//		int a=0,b,v;
//		for (c;c>=0; c--) {
//			if (shuzu[c] < 0) b = -shuzu[c];
//			else b = shuzu[c];
//	
//			 if (b > a) {
//				 a = b;
//				 v = shuzu[c];
//			 }
//		}
//		printf("%d\n", v);
//	}
//}

//int main() {
//	int n=0;
//	scanf("%d", &n);
//	for (int c = 0; c < n; c++) {
//		int a, b;
//		scanf("%d %d", &a,&b);
//		if (a > 0 && b > 0) {
//			int t = (a >= b ? a : b);
//			int i = (t % 2==0? (t - 1) : t);
//			int j = (a >= b ? b : a);
//			int sum=0;
//			for (i; i >= j; i = i - 2) {
//				sum += i;
//			}
//			printf("%d\n", sum);
//
//		}
//		else printf("error\n");
//	}
//}

//int main(void) {
//	int n=0;
//	scanf("%d", &n);
//	for (int w = 0; w < n; w++) {
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		int i = (a <= b ? a : b);
//		int j = (i <=c ? i : c);
//		int k = (i <= c ? c : i);
//		int x = (k <= b ? k : b);
//		int u = (a <= b ? b:a);
//		int t =( u <= c ? c:u );
//		if (j * j + x * x == t * t&&j+x>t)//注意还要判断是否是三角形！！！
//			printf("Yes\n");
//		else printf("No\n");
//	}
//}

//int func(int p);
//int main(void) {
//	int m;
//	scanf("%d", &m); 
//	for (int w = 0; w < m; w++) {
//		int n=0,c;
//		scanf("%d", &n);
//		if (n >= 0) {
//			if (n < 10) {
//				printf("%d\n", n);
//			}
//			else {
//				int n2 = n;
//				for (c = 0; n2 > 0; c++) {
//					n2 /= 10;
//				}
//				if (c % 2 == 0) {
//					int nt = 1;
//					for (int q = c / 2; q > 0; q--) {
//						nt *= 10;
//					}
//					int head, headf, behind;
//					head = n / nt;
//					behind = n % nt;
//					headf = func(head);
//					if (headf < behind) {
//						head += 1;
//						headf = func(head);
//					}
//					printf("%d%d\n", head, headf);
//				}
//				else {
//					int nt = 1;
//					for (int q = (c - 1) / 2; q > 0; q--) {
//						nt *= 10;
//					}
//					int head, headf, behind;
//					head = n / nt / 10;
//					behind = n % nt;
//					headf = func(head);
//					if (headf < behind) {
//						int y = (n / nt) + 1;
//						int v = y / 10;
//						int v1 = func(v);
//						printf("%d%d\n", y, v1);
//					}
//					else {
//						int y = n / nt;
//						printf("%d%d\n", y, headf);
//					}
//				}
//			}
//		}
//	}
//}
//int func(int p) {
//	int s = 0;
//	int j;
//	while (p > 0) {
//		j=p % 10;
//		s = s * 10 + j;
//		p /= 10;
//	}
//	return s;
//}//关于0的处理算是废了......

//int main() {
//	int t=0;
//	scanf("%d", &t);
//	for (int w = 0; w < t; w++) {
//		int n;
//		scanf("%d", &n);
//		if (n >= 20 && n <= 100) {
//			for (int x = 2; x <= n; x++) {
//				int m = 0;
//				if (x == 2)printf("2 ");
//				else {
//					for (int c = 2; c < x; c++) {
//						if (x % c == 0) {
//							m = 1;
//							break;
//						}
//					}
//					if (m == 0) printf("%d ",x);
//					if (x == n) printf("\n");
//				}
//			}
//
//		}
//
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++){
//		int n;
//		scanf("%d", &n);
//		for (int j = n; ; j++){
//			int sum = 0, j1 = j;
//			for (; j1 != 0; j1 /= 10){
//				int bit = j1 % 10;
//				sum = sum * 10 + bit;
//			}
//			if (sum == j){
//				printf("%d\n", j);
//				break;
//			}
//		}
//	}
//	return 0;
//}