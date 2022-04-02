#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'q';
	//printf("%c\n", ch);
	return 0;

}


//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//printf("%p\n", &a);地址是用16进制表示的
//	//printf("%p\n", p);
//	*p=20;//*-解引用操作符
//	printf("%d\n", a);
//    //有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", &a);
//	return 0;
//}




//#define定义的标识符常量
//#define MAX 100//不需要=
//#define还可以定义宏-带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//static修饰局部变量
//局部变量的生命周期变长
// static修饰全局变量
//改变了变量的作用域-让静态的全变量只能在自己所在的源文件内部使用
//出了源文件就无效了
//static修饰函数改变了函数的连接属性
// 外部连接属性->内部连接属性
//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{//extern--声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{//typedef-重新定义
//	typedef unsigned int u_int;
//	u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1;//无符号均为正数
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//局部变量-自动变量一般省略auto
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//（）--函数调用操作符
//	return 0;
//}


//& * . ->
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//三目操作符，条件操作符exp1?exp2:exp3;
//	printf("max=%d\n", max);
//	return 0;
//}




//!=不相等
//==相等
//=赋值操作符
//&&、||逻辑操作符
//int main()
//{
//	//真-非0
//	//假-0
//	//&&-逻辑与
//	//||-逻辑或
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
// }


//int main()
//{
//	int a = (int)3.14;//（）强制类型转换
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用，ab均位11
//	//int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a=%d b=%d\n", a, b);//11 10
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = ~a;//~按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111（有符号数最高位表示正负为符号位)
//    //原码、反码、补码
//	//负数在内存中存储时，存储的是二进制的补码
//	//11111111111111111111111111111111(补码-1=反码，反码首位不变其他取反=原码）
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//使用时，打印的是这个数的原码
//	return 0;
//}
//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码 相同



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//sizeof在求变量时是可以省略（）的，所以他是操作符 而不是函数，函数的（）是不可以省略的
//	//printf("%d\n",sizeof int);是不可以的。
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节。
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}



//int main()
//{
//	//字符串的结束标志：'\0'
//	//'\0'--转义字符--0
//	//0 >数字0
//	//'0'->字符-48
//	//EOF-end of file-文件结束标志
//	return 0;
//}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0; 
//}