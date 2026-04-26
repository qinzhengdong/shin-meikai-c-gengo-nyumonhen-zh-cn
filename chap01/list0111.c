/*
	按原样显示读取的整数值
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);							/* 读取整数值 */

	printf("输入%d。\n", no);

	return 0;
}
