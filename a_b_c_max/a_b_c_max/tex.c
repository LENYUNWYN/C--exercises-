//求a,b,c,三个数的最大值
#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a, b, c,max=0;
	printf("输入三个数：");
	scanf("%d%d%d", &a, &b, &c);
	if (a <= b)
	{
		if (b <= c)
			max = c;
		else max = b;
	}
	else if (a  <= c)
		max = c;
	else max = a;
	
	printf("最大值为：%d\n", max);
	return 0;

}