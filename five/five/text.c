//1ʹ��ѭ�����5���ַ���helloword
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
//2.ʹ��ѭ�����1-20��ֵ
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
//3.����1-20���ۼӺ�
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

//4.N�Ľ׳�
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
//5.fib(쳲���������)1 1 2 3 5...
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int frist = 1, second = 1, thrid,n,i=1;
	printf("��N��쳲������ǣ�");
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