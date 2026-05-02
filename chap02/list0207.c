/*
	实际测量数量、差异、实际定量工作结果
	说明：scanf 读 double 用 %lf；printf 输出 double 一般用 %f（%lf 同义也可）
*/

#include <stdio.h>

int main(void)	/* 主函数 */
{
	double vx, vy;		/* 小数变量 vx 和 vy */

	puts("输入两个实数值。"); /* 提示用户输入两个实数 */
	printf("实数值vx：");   scanf("%lf", &vx); /* 读取实数 vx */
	printf("实数值vy：");   scanf("%lf", &vy); /* 读取实数 vy */

	printf("vx + vy = %f\n",  vx + vy); /* 显示 vx 和 vy 的和 */
	printf("vx - vy = %f\n",  vx - vy); /* 显示 vx 和 vy 的差 */
	printf("vx * vy = %f\n",  vx * vy); /* 显示 vx 和 vy 的积 */
	printf("vx / vy = %f\n",  vx / vy); /* 显示 vx 和 vy 的商 */

	return 0; /* 返回值为0 */
} /* 主函数结束 */
