/*
	将 0.0 分配给数组的所有元素并显示
*/

#include <stdio.h>

int main(void)
{
	int i;
	double x[7];	/* double[7] 类型的数组 */

	for (i = 0; i < 7; i++)		/* 为元素分配一个值 */
		x[i] = 0.0;

	for (i = 0; i < 7; i++)		/* 显示元素值 */
		printf("x[%d] = %.1f\n", i, x[i]);

	return 0;
}
