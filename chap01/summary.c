/*
	求矩形的面积
*/

#include <stdio.h>

int main(void)
{
	int width;		/* 矩形的宽度 */
	int height;		/* 矩形高度 */

	puts("矩形表面。");

	printf("横幅：");
	scanf("%d", &width);

	printf("高度：");
	scanf("%d", &height);

	/* 展示区 */
	printf("表面高度 %d。 \a\n", width * height);

	return 0;
}
