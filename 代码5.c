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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
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
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls�����Ļ
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}���ֲ��Ҵ���



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 100;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()//��1��+2��+3��+4��...+10!�ĺͣ��Ż���
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



//int main()//��1��+2��+3��+4��...+10!�ĺ�
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//ret��ֵÿһ�ζ�ҪΪ1
//        for (i = 1; i <=n; i++)
//	   {
//		     ret *= i;
//	    }//n�Ľ׳�
//		sum += ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
// }



//int main()//��n��
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
//}//do-while�������Ҫ��ִ��һ��



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//ѭ��0�Σ���Ϊ�ж����Ϊk=0��Ϊ�پͲ�����ѭ�������жϾ�Ϊ��0��Ϊ��ѭ���� 

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
//		for (; j < 10; j++)//j��ֵ�ᱣ��Ϊ10���Ͳ���ѭ��
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
//}//��ѭ����ʡ���ж�����ʱ��Ϊ�档


//int main()
//{
//	int i = 0;
//	//��ʼ�� �ж� ����
//	for (i = 1; i <= 10; i++)//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//		//�����ȡǰ�պ�����д���롣
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
//	//EOF-end of file�ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);	
//	//}
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣһ��'\n'
//	//��ȡ��һ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N)��>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//return 0;
//}