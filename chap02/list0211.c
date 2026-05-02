/*
	读取三个整数值并显示总和及平均值
*/

#include <stdio.h>

int main(void)	/* 主函数 */
{
	int a, b, c;		/* 整数变量 a 和 b */
	int sum;				/* 总计値 */
	double ave;				/* 平均値 */

	puts("输入 3 个整数。"); /* 提示用户输入三个整数 */
	printf("整数a：");   scanf("%d", &a); /* 读取整数 a */
	printf("整数b：");   scanf("%d", &b); /* 读取整数 b */
	printf("整数c：");   scanf("%d", &c); /* 读取整数 c */

	sum = a + b + c;
	ave = (double)sum / 3;		/* 计算 a 和 b 和 c 的平均值 */

	printf("总和是 %5d。\n",   sum);		/* 以99999格式输出 */
	printf("平均值是 %5.1f。\n", ave);		/* 以 999.9 格式输出 */

	return 0; /* 返回值为0 */
} /* 主函数结束 */
