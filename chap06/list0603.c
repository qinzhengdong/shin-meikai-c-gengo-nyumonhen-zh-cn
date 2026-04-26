/*
	求两个整数的平方之差
*/

#include <stdio.h>

/*--- 返回 x 的平方值 ---*/
int sqr(int x)
{
	return x * x;
}

/*--- 返回 x 和 y 之间的差 ---*/
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;		/* 从较大的数中减去较小的数 */
}

int main(void)
{
	int x, y;

	puts("输入两个整数。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("x 平方和 y 平方差 %d。\n", diff(sqr(x), sqr(y)));

	return 0;
}
