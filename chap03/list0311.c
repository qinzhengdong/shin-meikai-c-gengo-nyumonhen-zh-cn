/*
	显示两个读取的整数值中较大的一个
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	if (n1 > n2)
		printf("更多展览%d。\n", n1);
	else
		printf("更多展览%d。\n", n2);

	return 0;
}
