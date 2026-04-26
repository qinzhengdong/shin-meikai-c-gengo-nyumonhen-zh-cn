/*
	显示小于或等于读取的整数值的偶数
*/

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("整数値：");
	scanf("%d", &n);

	for (i = 2; i <= n; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}
