/*
	实际测量数量、差异、实际定量工作结果
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;		/* 浮動小数点数 */

	puts("实际数量。");
	printf("実数vx：");   scanf("%lf", &vx);
	printf("実数vy：");   scanf("%lf", &vy);

	printf("vx + vy = %f\n",  vx + vy);
	printf("vx - vy = %f\n",  vx - vy);
	printf("vx * vy = %f\n",  vx * vy);
	printf("vx / vy = %f\n",  vx / vy);

	return 0;
}
