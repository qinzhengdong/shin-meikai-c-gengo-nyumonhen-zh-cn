/*
	从头开始为数组的每个元素赋值1,2,3,4,5并显示（for语句）
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5];	/* int[5]类型数组 */

	for (i = 0; i < 5; i++)		/* 为元素分配一个值 */
		v[i] = i + 1;

	for (i = 0; i < 5; i++)		/* 显示元素值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
