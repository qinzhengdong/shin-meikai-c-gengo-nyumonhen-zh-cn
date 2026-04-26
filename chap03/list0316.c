/*
	查找并显示读取的两个整数值的较大值和较小值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	if (n1 > n2) {
		max = n1;
		min = n2;
	} else {
		max = n2;
		min = n1;
	}

	printf("更多展览%d。\n", max);
	printf("较小的值为 %d。\n", min);

	return 0;
}
