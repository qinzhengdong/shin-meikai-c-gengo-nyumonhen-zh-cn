/*
	整数的平方和浮点数的平方（函数）
*/

#include <stdio.h>

/*---求int类型整数的平方值---*/
int sqr_int(int x)
{
	return x * x;
}

/*--- 计算 double 型浮点数的平方值 ---*/
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int    n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("数字平方为 %d。\n", sqr_int(n));

	printf("请输入真实号码：");
	scanf("%lf", &x);
	printf("数字平方为 %f。\n", sqr_double(x));

	return 0;
}
