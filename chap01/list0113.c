/*
	显示两个读取的整数值的总和（相加结果）
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("导入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	printf("内心的平静是%d。\n", n1 + n2);		/* 显示总和 */

	return 0;
}
