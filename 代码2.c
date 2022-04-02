#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	printf("%d\n", sizeof (arr));
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);

	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));*/
	//printf("%d\n", sizeof int);//不可使用，必须加（）
	return 0;
}





//单目操作符! - + & sizeof(计算的是变量/类型所占空间大小，单位是字节用于变量时（）可以省略，用于int时不能省略）
//双目操作符+ - * % /
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//    //a+b://+双目操作符
//	//c语言中我们表示真假
//	//0-假
//	//非0-真
//	//int a=0
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	a = 20;//=赋值，==判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= ...
//	return 0;
//}



//int main()
//{
//	//(2进制）位操作
//	//&按位与
//	//|按位或
//	//^按位异或,规则是：对应的二进制位相同，则为0，相依则为1.
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的方式访问元素
//	/*char ch[20];
//	float arr2[10];*/
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 2;//移位符<<移动的是2进制位数
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}







//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n ");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("好offer\n");
//	return 0;
//}









//int main()
//{
//	printf("%s\n", "\"");
//		return 0;
//}

//int main()
//{
//	printf("%c\n", '\132');
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32--> 10进制26——>作为ASCII码值代表的字符
//	return 0;
//}




//int main()
//{
//	char arr1[]="abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}



//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//a-97
//	//A-65
//	//...
//	//ASCII 编码
//	//ASCII 码值
//	char arr1[] = "abc";//arr[]是数组的意思
//	//"abc" --'a' 'b' 'c' '\0'--'\0'--是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c','\0' };
//	//'a' 'b' 'c'
//	//'\0'-0
//	//'a'-97
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}




//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全函数
//	//strcpy_s
//	//...
//	sum = num1 + num2;
//	printf("%d\n0", sum);
//	return 0;
//}


////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}自定义函数块
//int main()
//{
//	int sum = 0;
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	sum=Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}