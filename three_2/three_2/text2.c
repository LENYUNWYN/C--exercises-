//给出三角形三边，求面积 有问题
#include"math.h"
#include<stdio.h>
int main()
{
	double s, a, b, c, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c) / 2.0; 
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("area=%lf", area);
	getchar();
	return 0;
}


//练习简易计算器1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("******  简易计算器  *******\n");
//	printf("******1.Add      2.Sub*****\n");
//	printf("******3.Mol      4.Div*****\n");
//	printf("******     0.exit     *****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return (x - y);
//}
//int Mol(int x, int y)
//{
//	return (x * y);
//}
//int Div(int x, int y)
//{
//	return (x / y);
//}
//
//int main()
//{
//	
//	int input;
//	do {
//		int x;
//	    int y;
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		
//		switch ( input )
//		{
//		case 1:
//			printf("输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;	  
//		case 3:		  
//			printf("输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mol(x, y));
//			break;	  
//		case 4:		  
//			printf("输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default :
//			printf("选择错误！\n");
//			break;
//		}
//	} while (input);
//	
//}

//简易计算器2
//void menu()
//{
//	printf("***************************\n");
//	printf("******  简易计算器  *******\n");
//	printf("******1.Add      2.Sub*****\n");
//	printf("******3.Mol      4.Div*****\n");
//	printf("******     0.exit     *****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return (x - y);
//}
//int Mol(int x, int y)
//{
//	return (x * y);
//}
//int Div(int x, int y)
//{
//	return (x / y);
//}
//void Col(int (*p)(int,int ))
//{   int x;
//	int y;
//	printf("输入两个数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x,y));
//}
//int main()
//{
//
//	int input;
//	do {
//		
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Col(Add);
//			break;
//		case 2:
//			Col(Sub);
//			break;
//		case 3:
//			Col(Mol);
//			break;
//		case 4:
//			Col(Div);
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default:
//			printf("选择错误！\n");
//			break;
//		}
//	} while (input);
//
//}

//函数指针数组
//void menu()
//{
//	printf("***************************\n");
//	printf("******  简易计算器  *******\n");
//	printf("******1.Add      2.Sub*****\n");
//	printf("******3.Mol      4.Div*****\n");
//	printf("******     0.exit     *****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return (x - y);
//}
//int Mol(int x, int y)
//{
//	return (x * y);
//}
//int Div(int x, int y)
//{
//	return (x / y);
//}
//
//int main()
//{
//	
	/*int input;
	do {
		int x;
	    int y;
		menu();
		printf("请选择：");
		scanf("%d", &input);
		printf("输入两个数：");
		scanf("%d%d", &x, &y);
		int(*p[])(x, y) = {0,Add,Sub,Mol,Div};
		if (input > 0 && input <= 5)
		{
			int rel = (*p[input])(x, y);
			printf("%d\n", rel );
		}
		else if(input==0)
			printf("退出！\n");
		else 
			printf("选择错误！\n");
			
	} while (input);
	
}*/