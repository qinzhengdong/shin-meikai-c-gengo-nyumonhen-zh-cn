/*
	求矩形的面积
*/

#include <stdio.h>

int main(void)
{
	int width;		/* 矩形的宽度 */
	int height;		/* 矩形高度 */

	puts("矩形表面。"); /* 提示用户输入矩形的宽度和高度 */

	printf("宽度：");	
	scanf("%d", &width); /* 读取矩形的宽度 */

	printf("高度：");
	scanf("%d", &height); /* 读取矩形的高度 */

	/* 展示区 */
	printf("面积是%d。 \a\n", width * height);

	return 0;
}
