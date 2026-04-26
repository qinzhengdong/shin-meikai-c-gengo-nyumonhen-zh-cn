/*
	读取的整数值的最低有效位是5吗？
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("最小数量为 5。");
	else
		puts("最少数量 5。");

	return 0;
}
