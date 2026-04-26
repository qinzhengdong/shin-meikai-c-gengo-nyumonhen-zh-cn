/*
	自动存储时长和静态存储时长
*/

#include <stdio.h>

int fx = 0;				/* 静态存储时长+文件范围 */

void func(void)
{
	static int sx = 0;	/* 静态存储持续时间+块作用域 */
	int        ax = 0;	/* 自动存储时长+块作用域 */

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void)
{
	int i;

	puts(" ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
		func();
	puts("----------");

	return 0;
}
