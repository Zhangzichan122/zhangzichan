#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <windows.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s",arr2);
//		return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}二分查找代码



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 100;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()//求1！+2！+3！+4！...+10!的和（优化）
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
// }



//int main()//求1！+2！+3！+4！...+10!的和
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//ret的值每一次都要为1
//        for (i = 1; i <=n; i++)
//	   {
//		     ret *= i;
//	    }//n的阶乘
//		sum += ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
// }



//int main()//求n！
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		ret *= i;
//	
//	}
//	printf("ret=%d\n", ret);
//	return 0;
// }


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while(i <= 10);
//
//	return 0;
//}//do-while语句至少要被执行一次



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//循环0次，因为判断语句为k=0，为假就不进入循环，若判断句为非0则为死循环。 

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		
//		for (; j < 10; j++)//j的值会保留为10，就不在循环
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//}
//	return 0;
//}//死循环，省略判断条件时恒为真。


//int main()
//{
//	int i = 0;
//	//初始化 判断 调整
//	for (i = 1; i <= 10; i++)//不可以for循环体内修改循环变量，防止for循环失去控制。
//		//建议采取前闭后开区间写代码。
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	//int ch = 0;
//	//EOF-end of file文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);	
//	//}
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩一个'\n'
//	//读取下一个'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N)：>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//return 0;
//}