#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10] = { 0 };//10������Ԫ�ص�����
	int sz = 0;
	printf("%d\n", sizeof (arr));
	//���������Ԫ�ظ���
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);

	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));*/
	//printf("%d\n", sizeof int);//����ʹ�ã�����ӣ���
	return 0;
}





//��Ŀ������! - + & sizeof(������Ǳ���/������ռ�ռ��С����λ���ֽ����ڱ���ʱ��������ʡ�ԣ�����intʱ����ʡ�ԣ�
//˫Ŀ������+ - * % /
//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//    //a+b://+˫Ŀ������
//	//c���������Ǳ�ʾ���
//	//0-��
//	//��0-��
//	//int a=0
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ��==�ж����
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= /= ...
//	return 0;
//}



//int main()
//{
//	//(2���ƣ�λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���,�����ǣ���Ӧ�Ķ�����λ��ͬ����Ϊ0��������Ϊ1.
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
//	/*char ch[20];
//	float arr2[10];*/
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 2;//��λ��<<�ƶ�����2����λ��
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}







//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n ");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("��offer\n");
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
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32--> 10����26����>��ΪASCII��ֵ������ַ�
//	return 0;
//}




//int main()
//{
//	char arr1[]="abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}



//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//a-97
//	//A-65
//	//...
//	//ASCII ����
//	//ASCII ��ֵ
//	char arr1[] = "abc";//arr[]���������˼
//	//"abc" --'a' 'b' 'c' '\0'--'\0'--���ַ����Ľ�����־
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
//	//����ȫ����
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
////}�Զ��庯����
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