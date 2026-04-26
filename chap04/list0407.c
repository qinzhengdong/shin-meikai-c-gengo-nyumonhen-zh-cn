/*
	计数到读取的正整数值
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	while (i <= no)
		printf("%d ", i++);		/* 显示 i 的值后递增 */
	printf("\n");				/* 改行 */

	return 0;
}
