/*
	确定读取的整数值的符号
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("这个数字是0。");
	else if (no > 0)
		puts("这是修正后的数字。");
	else
		puts("这是一个数字量。");

	return 0;
}
