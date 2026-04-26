/*
	求两个整数值的平均值
*/

#include <stdio.h>

/* 以实数形式返回 a 和 b 的平均值 */
double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main(void)
{
	int n1, n2;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	printf("平均压力%.1f。\n", ave2(n1, n2));

	return 0;
}
