/*
	显示读取的两个整数值中较大的值（第2部分）
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max;

	puts("输入两个整数。"); /* 提示用户输入两个整数 */	
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

if (n1 > n2) max = n1; else max = n2; /* 如果 n1 大于 n2，否则取 n2 */

	printf("较大的数字是%d。\n", max); /* 显示较大的数字 */

	return 0; /* 返回值为0 */
}
