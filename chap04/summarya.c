/*
	第4章总结（单独说明）
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;

	do {
		printf("0 到 100 之间的整数值：");
		scanf("%d", &x);
	} while (!(x >= 0 && x <= 100));

	y = x;
	z = x;
	while (y >= 0)
		printf("%d %d\n", y--, ++z);

	printf("长宽均为整数，面积为%d"
		   "矩形边长：\n", x);
	for (i = 1; i < x; i++) {
		if (i * i > x) break;      /* break文    */
		if (x % i != 0) continue;  /* continue文 */
		printf("%d × %d\n", i, x / i);
	}

	puts("5 行 7 列星号");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 7; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
