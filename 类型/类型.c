/*
整数  char short int ...
浮点数
逻辑
指针
自定义类型

名称    %d???   范围：char<short<int<float<double   内存大小  内存中表达形式（补码）、编码
scanf只能处理int 不能处理char

sizeof(int)*/

/*unsigned

对于char,127+1=-128

补码形式下-1=全1，又将其看作unsigned,则为当前位数下能表示的最大正数

012八进制 %o    0x12十六进制 %x
例： int i=012;
         printf("%o",i);

%d %ld %u %lu

浮点数：某范围+0+inf
double or float:    printf("%.30f");    （注：float型精度只有7位有效数字，多打的无效）
                            printf("%e");  1.23e+10
							printf("%E");

float:   scanf("%f"); 对于scanf,可以表示 int float double
double:    scanf("%lf");

无穷大：inf（无穷大只能用浮点数来表达，整数不能）
不存在：nan
浮点运算没有精度:1.345f+1.123f (!=2.468),而==2.467999( 带f/F的才是float，只带小数点的字面量是double)
两个浮点数判断：f1==f2可能失败，因为有效位之后的位可能不同，应该用fabs(f1-f2)<1e-8    (fabs是求绝对值) 
																													（8：只要精度足够小）
																													所以不能用浮点数进行精确计算（算钱，误差累积）
																													用整数：123元12分，或者BCD码
浮点数：不是二进制数，编码形式，在计算时是由专门的硬件部分实现的（float double 所用部件一样）



char:字符 'a'  ''   %c表示字符的输入输出
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char c,d;
//一：	c = 49;  (这里的49是整形='1',)（1？49='1'）
//二：    scanf("%c", &d);
//	printf("%c\n", d);
//	printf("%d", d);
//	           //'1'的ASCII码是49，这两个值是相等的。可以以% c的形式读1,再以%d或者%c输出
//}

//逃逸字符  、 \b		\"  \'    \n    \t   \\   \r

//当运算符两边出现不一致的类型时，会自动转换成较大的类型 char>short>int>long>longlong
//                                                                                                            +int>float>double
 //类型转换：
 // 对printf,任何小于int的类型会被转化成int，float会被转成double
//但scanf不一样，short要用%hd，longlong要%ld，没办法char，只能先输入一个整数再交给整数char


//强制类型转换：
// （char）3.0    注意存在安全性，例如
// int i=32768   short s=（ short ）=i，i不变=32768，s=-32768；（char）32768=0 因为取到了最低的8位0；
				//	short最多32767，位数够，但循环


//bool类型：?????????????????????????????????????????????????????????????????????有什么用？
// #include<stdbool.h>
// bool t


//逻辑运算：！    &&      ||

//条件运算符（三目运算m<n?5:6）    逗号表达式（for 循环中使用）另外：i=3+4,5+6;   i=(3+4,5+6);

       
//#include<stdio.h>
//int main()
//
//{
//	char a = 60;
//	char a= 0x6B;
//	char a= 10;
//	char a=012;
//
//    printf("%d",a);
//	printf("%x\n", a);
//	printf("%X", a);
//	printf("%o", a);
//}