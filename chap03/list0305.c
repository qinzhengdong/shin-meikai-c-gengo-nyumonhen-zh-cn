/*
	读取的整数值是否为零？
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if (num)
		puts("当前数量为零。");
	else
		puts("这个数字为零。");

	return 0;
}
