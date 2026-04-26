/*
	反转数组中所有元素的顺序
*/

#include <stdio.h>

int main(void)
{
	int i;
	int x[7];					/* int[7]类型数组 */

	for (i = 0; i < 7; i++) {	/* 将值加载到元素中 */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* 反转元素顺序 */
		int temp = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = temp;
	}

	puts("这是一个惊喜。");
	for (i = 0; i < 7; i++)		/* 显示元素值 */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
