/*
	显示乘法口诀表
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) { /* 循环显示乘法口诀表 */
		for (j = 1; j <= 9; j++) /* 循环显示乘法口诀表 */
			printf("%3d", i * j); /* 显示乘法口诀表 */
		putchar('\n');				/* 改行 */
	}

	return 0;
}
