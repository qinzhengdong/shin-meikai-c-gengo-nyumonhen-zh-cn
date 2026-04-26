/*
	复制数组a的元素
*/

#include <stdio.h>

#define  NUMBER		5		/* 要素数 */

/* 将数组 b 的前 n 个元素复制到 a */
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int v1[NUMBER];			/* 复制来源 */
	int v2[NUMBER];			/* 复制目的地 */

	for (i = 0; i < NUMBER; i++) {
		printf("v1[%d]：", i);
		scanf("%d", &v1[i]);
	}

	cpy_ary(v2, v1, NUMBER);	/* 将 v1 的所有元素复制到 v2 */

	puts("通用数字组合v1和所属元素加法系统v2。\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]：%d\n", i, v2[i]);
	}

	return 0;
}
