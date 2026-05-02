/*
	查找并显示读取的两个整数值的较大值和较小值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	if (n1 > n2) { /* 如果 n1 大于 n2 */
		printf("较大的数字是%d。\n", n1);
		printf("较小的数字是%d。\n", n2);
	} else { /* 如果 n1 小于 n2 */
		printf("较大的数字是%d。\n", n2);
		printf("较小的数字是%d。\n", n1);
	}

	return 0;
}
