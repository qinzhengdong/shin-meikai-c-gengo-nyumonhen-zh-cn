/*
	说明两个整数之和中存在两个整数之和（加法结果）。
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;
	int wa;		/* 和 */

	puts("导入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	wa = n1 + n2;								/* 将 n1 和 n2 之和赋给 wa */

	printf("内心的平静是%d。\n", wa);		/* 显示总和 */

	return 0;
}
