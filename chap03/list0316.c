/*
	查找并显示读取的两个整数值的较大值和较小值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	if (n1 > n2) {
		max = n1; /* 将 n1 赋值给 max */
		min = n2; /* 将 n2 赋值给 min */
	} else {
		max = n2; /* 将 n2 赋值给 max */
		min = n1; /* 将 n1 赋值给 min */
	}

	printf("较大的数字是%d。\n", max);
	printf("较小的数字是%d。\n", min);

	return 0; /* 返回值为0 */
}
