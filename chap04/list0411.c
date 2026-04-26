/*
	计数到读取的正整数值（for语句）
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d ", i);
	putchar('\n');		/* 改行 */

	return 0;
}
