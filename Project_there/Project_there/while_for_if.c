#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//////1.���������Ӵ�С���
////int main()
////{
////	int a, b, c,tmp;
////	printf("����������:");
////	scanf("%d%d%d", &a,&b,&c);
////	if (a < b)
////	{
////		tmp = a;
////		a = b;
////		b = tmp;
////	}
////	if (a < c)
////	{
////		tmp = a;
////		a = c;
////		c = tmp;
////	}
////	if (b < c)
////	{
////		tmp = b;
////		b = c;
////		c = tmp;
////	}
////	
////	printf("�Ӵ�С��%d %d %d\n",a, b, c);
////	return 0;
////}

//1-100֮��3�ı���
//int main()
//{
//	int i=1,count=0;
//	while (i < 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}printf("\n");
//	printf("%d\n", count);
//	return 0;
//}

////�����������������ǵ����Լ��
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	while (a%b)//շת�����
//	{
//		int t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("���Լ����%d\n", b);
//	return 0;
//
//}

//��ӡ1000-2000��֮�������
//int main()
//{
//	int i = 1000 ,count=0;
//	while (i <= 2000)
//	{
//		// �ܱ�4�������Ҳ��ܱ�100����
//		//�ܱ�400����
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i); count++;
//		}
//		i++;
//	}printf("\n%d", count);
//	return 0;
//}
//// ��ӡ100-200֮�������
//int main()
//{
//	int i = 100,j;
//	while (i < 201)
//	{
//1.
//		int count = 0;//ע��count�ŵ�λ��
//		for (j = 1; j <= 10; j++)
//		{
//			if(i%j==0)
//			{
//				count++;
//			}
//		}
//		if(1==count)
//		{
//			printf("%d ", i);
//		}
////2.
//for (j = 2; j < i; j++)//j<=sqrt(i)
//{
//	if (i%j == 0)
//	{
//		break;
//	}
//}
//if(j==i)(j>sqrt(i))
//{
//	printf("%d", i);
//}
//		i++;
//	}
//	return 0;
//
//}


////1-100��������9�����м���
//int main()
//{
//	int i = 1,count=0;
//	while (i <= 100)
//	{
//		if (i % 10 == 9)
//		{ 
//			count++;
//		}
//	   if (i / 10 == 9) count++;
//		i++;
//	}printf("\n%d", count);
//	return 0;
//
//}

////����1-1/2+1/3-1/4+1/5...-1/100��ֵ
//#include<math.h>
//int main()
//{
//	double i = 1,sum=0;//int flag=1;
//	while (i <= 100)
//	{//sum+=flag*1.0/i
//		sum += pow(-1,i-1)*(1.0 / i);
//		i++;//flag=-flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//// //10���������ֵ
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,11,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max=arr[0];//����max�����ֵ
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//
//}

////�˷��ھ���Ĵ�ӡ
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

////���ֲ��ң���дһ����������������Ҿ���������ҵ���ӡ�����±꣬�Ҳ���������Ҳ���
//int main()
//{
//	//int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1, k = 7;//ȷ�������±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])//��ͨ
//		{
//			printf("%d", i); break;
//		}
//	}if (i == sz)printf("�Ҳ���");*/
//	return 0;
//
//}


//*****************
//h***************!
//he*************!!
//hel***********!!!
//hello world!!!!!!
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//int main()
//{
//	int i;
//	char arr1[] = "hello world!!!!!!";
//	char arr2[] = "*****************";
//	int sz = strlen(arr1);
//	int left = 0, right = sz - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
