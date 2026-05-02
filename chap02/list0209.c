/*
	读取两个整数值并将平均值显示为实数
*/

#include <stdio.h>

int main(void)	/* 主函数 */
{
	int a, b;		/* 整数变量 a 和 b */

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数a：");   scanf("%d", &a); /* 读取整数 a */
	printf("整数b：");   scanf("%d", &b); /* 读取整数 b */

	printf("他们的平均值是 %f。\n", (a + b) / 2.0);

	return 0; /* 返回值为0 */
} /* 主函数结束 */
