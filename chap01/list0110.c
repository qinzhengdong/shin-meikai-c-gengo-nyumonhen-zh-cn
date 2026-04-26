/*
	初始化并显示两个变量
*/

#include <stdio.h>

int main(void)
{
	int vx = 57;					/* vx是int类型变量（初始化为57）*/
	int vy = vx + 10;				/* vy 是一个int类型变量（用vx+10初始化）*/

	printf("vx的值为%d。\n", vx);	/* 显示vx值 */
	printf("vy的值为%d。\n", vy);	/* 显示vy的值 */

	return 0;
}
