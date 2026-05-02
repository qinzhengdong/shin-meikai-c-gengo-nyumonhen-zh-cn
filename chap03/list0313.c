/*
	查找并显示读取的三个整数值中的最大值
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("输入 3 个整数。"); /* 提示用户输入三个整数 */
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */
	printf("整数３：");   scanf("%d", &n3); /* 读取整数 */

	max = n1; /* 将 n1 赋值给 max */
	if (n2 > max) max = n2; /* 如果 n2 大于 max，则将 n2 赋值给 max */
	if (n3 > max) max = n3; /* 如果 n3 大于 max，则将 n3 赋值给 max */

	printf("较大的数字是%d。\n", max);

	return 0;
}
