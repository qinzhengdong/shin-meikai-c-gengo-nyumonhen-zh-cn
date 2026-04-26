/*
	求数组所有元素的平均值作为实数
*/

#include <stdio.h>

#define  NUMBER		5		/* 要素数 */

/* 以实数形式返回数组 a 所有元素的平均值 */
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int main(void)
{
	int i;
	int v[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("v[%d]：", i);
		scanf("%d", &v[i]);
	}

	printf("占有元素平均值%.1f。\n", ave_ary(v, NUMBER));

	return 0;
}
