/*
	显示读取的两个整数值中较大的值（第3部分：条件运算符）
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max;

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数１：");   scanf("%d", &n1); /* 读取整数 */
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	max = (n1 > n2) ? n1 : n2;		/* 将较大的值赋给 max */

	printf("较大的数字是%d。\n", max);

	return 0; /* 返回值为0 */
}
