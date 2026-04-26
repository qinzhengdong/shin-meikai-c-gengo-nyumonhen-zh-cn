/*
	显示右下角为直角的直角等腰三角形
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("右下右等压三角形。");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		/* i行（i = 1, 2, … , len） */
		for (j = 1; j <= len - i; j++)	/* 每行显示 len - i '' */
			putchar(' ');
		for (j = 1; j <= i; j++)		/* 每行显示 i '*' */
			putchar('*');
		putchar('\n');					/* 改行 */
	}

	return 0;
}
