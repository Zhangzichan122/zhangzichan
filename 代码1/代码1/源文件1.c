#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	extern int g_val;
	printf("g_val=%d\n", g_val);//Ϊ�����ı�ʶ��
	//����
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
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
//	
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//��˼��sum=��%d��
//		return 0;
//}





//int main()
//{
//	{
//		int a = 10;//�ֲ����������ڶ��巶Χ֮��ʹ��
//	}
//	printf("%d\n", a);
//		return 0;
//}
//int a = 100;
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����BUG
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//	return 0;
//}


//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ�
//	return 0;
//
//}
//int main()
//{
//	//����
//	//20
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽ�=32bitλ���С��
//	printf("%d\n", age);
//	printf("%f\n", weight);
//	return 0;
//}
//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%s-��ӡ�ַ���
//%f-��ӡ��������-��ӡС��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡ16��������
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
//	//char ch = 'A';//�ڴ� chΪ�ڴ����� 
//	//printf("%c\n",ch);//%c-��ӡ�ַ���ʽ�����ݣ����ַ�����ʽ��%c\n)��ӡch��n��ʾ����
//	//20
//	//short int - ������
//	//int - ����
//	//int age = 20;
//	//printf("%d\n", age);//%d--��ӡ����ʮ��������
//	//long������
//	//long num = 100;
//	//printf("%d\n",num);
//	//float f = 5.0;
//	//printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//		return 0;
//}
//����һ����stdio.h���ļ�
//std-��׼ standard input output 
//#include<stdio.h>
//int main()//������-��������-main�������ҽ���һ��
//{
//	//�������������
//	//����Ļ�����hello world
//	//����-print function - printf - ��ӡ����
//	//�⺯��-C���Ա����ṩ�����ǵĸ����ǵĺ���
//	//���˵Ķ��������к�
//	//#include<stdio.h>
//	printf("hello ����\n");
//	return 0;
//}
////int�����͵���˼
////mainǰ���int��ʾmain�������÷���һ������ֵ
////int main()
////{
////return 0; //����0
////}