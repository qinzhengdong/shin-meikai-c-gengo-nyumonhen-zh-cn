/*
	显示读取的整数值的所有除数
*/

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("整数値：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);
	putchar('\n');

	return 0;
}
