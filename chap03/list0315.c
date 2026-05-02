/*
	查找并显示两个读取的整数值之间的差异（条件运算符）
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	printf("两个数字的差是%d。\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0; /* 返回值为0 */
}
