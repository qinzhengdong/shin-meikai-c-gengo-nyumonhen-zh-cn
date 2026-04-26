/*
	找出两个整数中较大的一个
*/

#include <stdio.h>

/*--- 返回较大的值 ---*/
int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int n1, n2;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	printf("更多展览%d。\n", max2(n1, n2));

	return 0;
}
