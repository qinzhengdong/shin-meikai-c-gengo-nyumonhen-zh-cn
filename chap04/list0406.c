/*
	将读取的整数值倒数至 0（第 2 部分）
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--);	/* 显示无值后递减 */
	printf("\n");				/* 改行 */

	return 0;
}
