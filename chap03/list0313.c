/*
	查找并显示读取的三个整数值中的最大值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("输入 3 个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);
	printf("整数３：");   scanf("%d", &n3);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;

	printf("最大功率 %d。\n", max);

	return 0;
}
