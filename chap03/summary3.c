/*
	查找并显示读取的两个整数值的较大值和较小值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	if (n1 > n2) {
		printf("善意 n1. \n");
		printf("不同的 %d。\n", n1 - n2);
	} else {
		printf("最大的是n2。\n");
		printf("不同的 %d。\n", n2 - n1);
	}

	return 0;
}
