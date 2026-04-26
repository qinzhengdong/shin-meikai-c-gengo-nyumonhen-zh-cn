/*
	显示读取的整数值的最低位
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);							/* 读取整数值 */

	printf("最小数量为 %d。\n", no % 10);

	return 0;
}
