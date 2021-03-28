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
//	void print();//当函数定义在主函数后时，应该声明
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
//2.计算整数1-N的累加和，封装函数并通过返回值返回
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
//3.求两个整数的最大值，封装函数并通过返回值返回
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

//4.计算矩形的面积，封装函数并通过返回值返回
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
//5.计算圆的面积，封装函数并通过返回值返回
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

//6.定义一个无参，无返回值的函数show，调用该函数打印5次Hello world
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
//7.封装一个函数add，传入int变量a,b，返回a,b的和
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
//8.计算两个等长数组元素和（已知int nums1[3]={1,2,3},
//int nums2[3]={1,2,3},int nums3[3]计算1,2的和赋值3）
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
//9.已知数组int  nums[]={35,999,2,12},找出最大值
//int maoP(int* nums, int sz)
//{
//	int i = 0,j,tmp;
//	for (; i < sz; i++)//排序次数
//	{
//		for (j = 0; j < sz - 1; j++)//内层比较
//		{
//			if (nums[i] < nums[i + 1]) //冒泡排序
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
//10.atoi字符串转整形函数（int atoi(const char *str) #include<stdlib.h>
//#include<stdlib.h>
//int main()
//{
//	char s[] = "123";
//	int num=atoi(s);
//	printf("%d\n", num);
//}

//11.sprintf字符串格式化函数(int sprintf(char *buffer(保存格式化字符串的目标字符缓冲区），const char *format[参数列表]（格式化后的字符串)

//int main()
//{
//	char buffer[18] = { 0 };//不写数组长度易报错
//    sprintf(buffer, "%s,%d", "hellow", 123);
//	printf("%s", buffer);
//	return 0;
//}

//12.已知int a[5]={1,2,3,4,5}遍历
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
//13.计算int a[]={2,1,0,7,8,19}的长度
//int main()
//{
//	int a[] = { 2,1,0,7,8,19 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", sz);
//	return 0;
//}





