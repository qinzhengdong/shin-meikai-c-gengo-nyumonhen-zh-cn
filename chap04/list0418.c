/*
	显示左下角为直角的直角等腰三角形
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("一个三角形，左下角和右下角各一个。");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		/* i行（i = 1, 2, … , len） */
		for (j = 1; j <= i; j++)		/* 每行显示 i '*' */
			putchar('*');
		putchar('\n');					/* 改行 */
	}

	return 0;
}
