/*
	显示读取整数值5倍的值
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);							/* 读取整数值 */

	printf("该数值是 %d 的五倍。\n", 5 * no);

	return 0;
}
