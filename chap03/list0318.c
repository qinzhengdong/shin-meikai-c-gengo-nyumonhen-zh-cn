/*
	显示读取的整数值除以 3 的余数
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("排除3.");
	else if (no % 3 == 1)
		puts("除去前景3剩余金额1。");
	else
		puts("除去前景3剩余量2。");

	return 0;
}
