/*
	读取两个整数，计算 a 相当于 b 的百分之多少：(a/b)*100
*/

#include <stdio.h>

int main(void)	/* 主函数 */
{
	int a, b;		/* 整数变量 a 和 b */

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数a：");   scanf("%d", &a); /* 读取整数 a */
	printf("整数b：");   scanf("%d", &b); /* 读取整数 b */

	if (b == 0) {
		puts("b 不能为 0，无法计算比例。");
		return 1;
	}

	/* (double)a / b * 100.0：先转成浮点再除，避免整数除法截断 */
	printf("%d 是 %d 的 %.2f%%。\n", a, b, (double)a / b * 100.0);

	return 0; /* 返回值为0 */
}
