#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	extern int g_val;
	printf("g_val=%d\n", g_val);//为声明的标识符
	//声明
	return 0;
}


//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf(" % d\n", global);
//	return 0;
//}



//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d",&num1,&num2);//取地址符号&
//	
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//意思是sum=（%d）
//		return 0;
//}





//int main()
//{
//	{
//		int a = 10;//局部变量不能在定义范围之外使用
//	}
//	printf("%d\n", a);
//		return 0;
//}
//int a = 100;
//int main()
//{
//	//int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生BUG
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}


//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部
//	return 0;
//
//}
//int main()
//{
//	//年龄
//	//20
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节=32bit位存放小数
//	printf("%d\n", age);
//	printf("%f\n", weight);
//	return 0;
//}
//char-字符类型
//%d-打印整形
//%c-打印字符
//%s-打印字符串
//%f-打印浮点数字-打印小数
//%p-以地址的形式打印
//%x-打印16进制数字
//%o...
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	//char ch = 'A';//内存 ch为内存名字 
//	//printf("%c\n",ch);//%c-打印字符格式的数据，以字符的形式（%c\n)打印ch，n表示换行
//	//20
//	//short int - 短整型
//	//int - 整型
//	//int age = 20;
//	//printf("%d\n", age);//%d--打印整型十进制数据
//	//long长整型
//	//long num = 100;
//	//printf("%d\n",num);
//	//float f = 5.0;
//	//printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//		return 0;
//}
//包含一个叫stdio.h的文件
//std-标准 standard input output 
//#include<stdio.h>
//int main()//主函数-程序的入口-main函数有且仅有一个
//{
//	//在这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function - printf - 打印函数
//	//库函数-C语言本身提供给我们的给我们的函数
//	//别人的东西—打招呼
//	//#include<stdio.h>
//	printf("hello 比特\n");
//	return 0;
//}
////int是整型的意思
////main前面的int表示main函数调用返回一个整型值
////int main()
////{
////return 0; //返回0
////}