/*
	整数的平方和浮点数的平方（类函数宏）
*/

#include <stdio.h>

#define sqr(x)  ((x) * (x))		/* 计算 x 平方值的函数宏 */

int main(void)
{
	int    n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("数字平方为 %d。\n", sqr(n));

	printf("请输入真实号码：");
	scanf("%lf", &x);
	printf("数字平方为 %f。\n", sqr(x));

	return 0;
}
