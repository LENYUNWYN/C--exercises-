//1.print function 1-n
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
////}
//int main()
//{
//	void print();//��������������������ʱ��Ӧ������
//	int n;
//	scanf("%d",&n);
//	print(n);
//	getchar();
//	return 0;
//}
//void print(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//}
//2.��������1-N���ۼӺͣ���װ������ͨ������ֵ����
//int add(int n)
//{
//	int i = 1,sum=0;
//	for (; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//int main()
//{
//	int n,sum;
//	scanf("%d", &n);
//	sum = add(n);
//	printf("%d\n", sum);
//}
//3.���������������ֵ����װ������ͨ������ֵ����
//int Max(int a, int b)
//{
//	if (a > b)return a;
//	else return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//4.������ε��������װ������ͨ������ֵ����
//double JxArea(double a,double b)
//{
//	return a*b;
//}
//int main()
//{
//	double a, b, arae;
//	scanf("%lf%lf", &a, &b);
//	arae = JxArea(a, b);
//	printf("%lf", arae);
//	return 0;
//}
//5.����Բ���������װ������ͨ������ֵ����
//double Arae(double r)
//{
//	return r*r*3.14;
//}
//int main()
//{
//	double  r, arae;
//	scanf("%lf", &r);
//	arae = Arae(r);
//	printf("%lf\n", arae);
//	return 0;
//}

//6.����һ���޲Σ��޷���ֵ�ĺ���show�����øú�����ӡ5��Hello world
//void show()
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d.hello world\n",i+1);
//	}
//}
//int main()
//{
//	show();
//	return 0;
//}
//7.��װһ������add������int����a,b������a,b�ĺ�
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", add(a, b));
//	return 0;
//}
//8.���������ȳ�����Ԫ�غͣ���֪int nums1[3]={1,2,3},
//int nums2[3]={1,2,3},int nums3[3]����1,2�ĺ͸�ֵ3��
//void add(int nums1[], int nums2[], int nums3[],int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		nums3[i] = nums1[i] + nums2[i];
//		printf("%d ", nums3[i]);
//	}
//}
//int main()
//{
//	int nums1[3] = { 1,2,3 }, nums2[3] = { 1,2,3 }, nums3[3];
//	int sz = sizeof(nums1) / sizeof(nums1[0]);
//	add(nums1, nums2, nums3,sz);
//	return 0;
//}
//9.��֪����int  nums[]={35,999,2,12},�ҳ����ֵ
//int maoP(int* nums, int sz)
//{
//	int i = 0,j,tmp;
//	for (; i < sz; i++)//�������
//	{
//		for (j = 0; j < sz - 1; j++)//�ڲ�Ƚ�
//		{
//			if (nums[i] < nums[i + 1]) //ð������
//			{
//				tmp = nums[i];
//				nums[i] = nums[i + 1];
//				nums[i + 1] = tmp;
//			}
//		}
//	}return nums[0];
//}
//int main()
//{
//	int nums[] = { 35,999,2,12 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int Max = maoP(nums, sz);
//	printf("%d\n", Max);
//	return 0;
//}
//10.atoi�ַ���ת���κ�����int atoi(const char *str) #include<stdlib.h>
//#include<stdlib.h>
//int main()
//{
//	char s[] = "123";
//	int num=atoi(s);
//	printf("%d\n", num);
//}

//11.sprintf�ַ�����ʽ������(int sprintf(char *buffer(�����ʽ���ַ�����Ŀ���ַ�����������const char *format[�����б�]����ʽ������ַ���)

//int main()
//{
//	char buffer[18] = { 0 };//��д���鳤���ױ���
//    sprintf(buffer, "%s,%d", "hellow", 123);
//	printf("%s", buffer);
//	return 0;
//}

//12.��֪int a[5]={1,2,3,4,5}����
//void Arry(int a[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//		printf(" ");
//	}
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	Arry(a, sz);
//	return 0;
//}
//13.����int a[]={2,1,0,7,8,19}�ĳ���
//int main()
//{
//	int a[] = { 2,1,0,7,8,19 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", sz);
//	return 0;
//}





