/*
	画一个矩形
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("单个矩形。");
	printf("高度：");   scanf("%d", &height);
	printf("横幅：");   scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* 矩形是高度行 */
		for (j = 1; j <= width; j++)		/* 每行显示宽度“*” */
			putchar('*');
		putchar('\n');						/* 改行 */
	}
	return 0;
}
