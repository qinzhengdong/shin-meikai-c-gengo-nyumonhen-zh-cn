/*
	将数组的每个元素从头开始按顺序初始化并显示为1,2,3,4,5
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5] = {1, 2, 3, 4, 5};		/* 初始化 */

	for (i = 0; i < 5; i++)			/* 显示元素值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
