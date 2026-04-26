/*
	显示九九乘法表（遇到包含4的数字时执行Continue语句）
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;
			if (seki % 10 == 4 || seki / 10 == 4) {
				printf("   ");
				continue;
			}
			printf("%3d", seki);
		}
		putchar('\n');		/* 改行 */
	}

	return 0;
}
