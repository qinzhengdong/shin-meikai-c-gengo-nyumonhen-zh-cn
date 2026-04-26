/*
	找到力量
*/

#include <stdio.h>

/*--- 返回 x 的 n 次方 ---*/
double power(double x, int n)
{
	int i;
	double tmp = 1.0;

	for (i = 1; i <= n; i++)
		tmp *= x;	/* 将 tmp 乘以 x */
	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("理想的 b 阶。\n");
	printf("実数a：");   scanf("%lf", &a);
	printf("整数b：");   scanf("%d",  &b);

	printf("%.2f %d 下一个是 %.2f。\n", a, b, power(a, b));

	return 0;
}
