//1使用循环输出5次字符串helloword
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	/*while (i < 5)
//	{
//		printf("%d.hello world!\n",i+1);
//		i++;
//	}*/
//	/*do {
//		printf("%d.hello world!\n", i + 1);
//		i++;
//	} while (i < 5);*/
//	for (; i < 5;)
//	{
//		printf("%d.hello world!\n", i + 1);
//		i++;
//	}
//	return 0;
//}
//2.使用循环输出1-20的值
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	/*while (i < 21)
//	{
//		printf("%d ", i);
//		i++;
//	}*/
//	/*do {
//		printf("%d ", i);
//		i++;
//	}while (i < 21);*/
//	for (; i < 21;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//3.计算1-20的累加和
//#include<stdio.h>
//int main()
//{
//	int i = 1,sum=0;
//	/*while (i < 21)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d\n", sum);*/
//	do {
//		sum += i;
//		i++;
//	} while (i < 21);
//	printf("%d\n", sum);
//	for (i=0,sum=0; i < 21; i++)
//	{
//		sum += i;
//		
//	}printf("%d\n",sum);
//	return 0;
//}

//4.N的阶乘
//int main()
//{
//	int n = 5,N=1;
//	if(0==n)
//	{
//		printf("%d\n",n);
//	}
//	if (n > 1)
//	{
//		for (; n;n--)
//		{
//			N *= n;
//		}
//		printf("%d\n", N);
//	}
//}
//5.fib(斐波那契数列)1 1 2 3 5...
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int frist = 1, second = 1, thrid,n,i=1;
	printf("第N个斐波那契是：");
	scanf("%d", &n);
	for (; i < n - 1; i++)
	{
		thrid = frist + second;
		frist=second;
		second = thrid;
	}
	printf("%d\n", thrid);
	return 0;
}