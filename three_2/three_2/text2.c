//�������������ߣ������ ������
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


//��ϰ���׼�����1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("******  ���׼�����  *******\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		
//		switch ( input )
//		{
//		case 1:
//			printf("������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;	  
//		case 3:		  
//			printf("������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mol(x, y));
//			break;	  
//		case 4:		  
//			printf("������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳���\n");
//			break;
//		default :
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	
//}

//���׼�����2
//void menu()
//{
//	printf("***************************\n");
//	printf("******  ���׼�����  *******\n");
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
//	printf("������������");
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
//		printf("��ѡ��");
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
//			printf("�˳���\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//}

//����ָ������
//void menu()
//{
//	printf("***************************\n");
//	printf("******  ���׼�����  *******\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		printf("������������");
		scanf("%d%d", &x, &y);
		int(*p[])(x, y) = {0,Add,Sub,Mol,Div};
		if (input > 0 && input <= 5)
		{
			int rel = (*p[input])(x, y);
			printf("%d\n", rel );
		}
		else if(input==0)
			printf("�˳���\n");
		else 
			printf("ѡ�����\n");
			
	} while (input);
	
}*/