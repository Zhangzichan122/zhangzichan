#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ch = 0;
//	//ctrl+z
//	//EOF-end of file-> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}



//int main()
//{
//	//while (1)
//	//	printf("hehe\n");
//	int i = 1;
//	while (i <= 10)
//	{i++;
//		if (5 == i)
//			continue;//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//		printf("%d ", i);
//		
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
// }





//int main()
//{
//	int a = 1;
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch里面必须是整形常量
//	{
//	case 1:
//		if (1 == a)
//			printf("呵呵\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//即使是最后一个break也要加上
//	default://case和default的顺序没有区别
//		printf("输入错误\n");
//		break;
//
//	}
//
//	return 0;
//
//}
//switch (day)
//{case 1:
//	printf("星期1\n");
//	break;
//case 2:
//	printf("星期2\n");
//	break;
//case 3:
//	printf("星期3\n");
//	break;
//case 4:
//	printf("星期4\n");
//	break;
//case 5:
//	printf("星期5\n");
//	break;
//case 6:
//	printf("星期6\n");
//	break;
//case 7:
//	printf("星期天\n");
//	break;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");
//	return 0;
// }



//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d", i);
//		i += 2; 
//	}
//	//while (i <= 100)
//	//{
//	//	if (i % 2 == 1)
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5==num)//=赋值==判断相等
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//	printf("hehe\n");
//	 }   
//	else//else和离他最近的未匹配的if匹配
//		printf("haha\n");
//	return 0;
//
//}



//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//执行多条语句时要使用代码块
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf(" 老年\n");
//		else
//			printf("老不死\n");
//	}
///*	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n"); */  
//	if (age < 18)
//		printf("未成年\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	;//空语句
//	return 0;
//}


//结构体
//char int double...
//人：名字，身高，年龄，身份证号
//书：作者，书名，出版社，定价，书号
//复杂对象--结构体--自己创造出来的一种类型
//创造一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
// };
//int main()
//{//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计", 55};
//	strcpy(b1.name,"C++") ;//strcpy-string copy-字符串拷贝-库函数-string.h,不能直接更改
//	printf("%s\n", b1.name);
//	struct Book*pb = &b1;
//	/*利用pb打印出书名和价格
//	.  结构体变量.成员
//	-> 结构体指针->成员*/ 
//	
//	/*printf("%s\n", pb->name);
//	printf("%d\n", pb->price);*/
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);*/
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}





//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
	/*double d = 3.14;
	double* pd = &d;
	printf("%d\n", sizeof(pd));*/
	 
	/**pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);*/
	//int a = 10;//申请4个字节的空间
	////printf("%p\n",&a);
	//int* p = &a;//p是一个变量-指针变量
	////printf("%p\n",p);
	//*p = 20;//*-解引用操作符/间接访问操作符
	//printf("%p\n", a);
//	return 0;
//}