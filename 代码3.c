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
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//printf("%p\n", &a);��ַ����16���Ʊ�ʾ��
//	//printf("%p\n", p);
//	*p=20;//*-�����ò�����
//	printf("%d\n", a);
//    //��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n", &a);
//	return 0;
//}




//#define����ı�ʶ������
//#define MAX 100//����Ҫ=
//#define�����Զ����-������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//static���ξֲ�����
//�ֲ��������������ڱ䳤
// static����ȫ�ֱ���
//�ı��˱�����������-�þ�̬��ȫ����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ�����Ч��
//static���κ����ı��˺�������������
// �ⲿ��������->�ڲ���������
//�����ⲿ����
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
//{//extern--�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a��һ����̬�ֲ�����
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
//{//typedef-���¶���
//	typedef unsigned int u_int;
//	u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1;//�޷��ž�Ϊ����
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�����һ��ʡ��auto
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
//	//arr[4];//[]-�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//����--�������ò�����
//	return 0;
//}


//& * . ->
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//��Ŀ������������������exp1?exp2:exp3;
//	printf("max=%d\n", max);
//	return 0;
//}




//!=�����
//==���
//=��ֵ������
//&&��||�߼�������
//int main()
//{
//	//��-��0
//	//��-0
//	//&&-�߼���
//	//||-�߼���
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
// }


//int main()
//{
//	int a = (int)3.14;//����ǿ������ת��
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ�ã�ab��λ11
//	//int b = a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a=%d b=%d\n", a, b);//11 10
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = ~a;//~����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111���з��������λ��ʾ����Ϊ����λ)
//    //ԭ�롢���롢����
//	//�������ڴ��д洢ʱ���洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111(����-1=���룬������λ��������ȡ��=ԭ�룩
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//ʹ��ʱ����ӡ�����������ԭ��
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬���� ��ͬ



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//sizeof�������ʱ�ǿ���ʡ�ԣ����ģ��������ǲ����� �����Ǻ����������ģ����ǲ�����ʡ�Ե�
//	//printf("%d\n",sizeof int);�ǲ����Եġ�
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽڡ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}



//int main()
//{
//	//�ַ����Ľ�����־��'\0'
//	//'\0'--ת���ַ�--0
//	//0 >����0
//	//'0'->�ַ�-48
//	//EOF-end of file-�ļ�������־
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