/*
	在两个变量中存储和显示整数值
*/

#include <stdio.h>

int main(void)
{
	int vx, vy;							/* vx 和 vy 是 int 类型变量 */

	vx = 57;							/* 将 57 分配给 vx */
	vy = vx + 10;						/* 将 vx + 10 赋给 vy */

	printf("vx的值为%d。\n", vx);	/* 显示vx值 */
	printf("vy的值为%d。\n", vy);	/* 显示vy的值 */

	return 0;
}
