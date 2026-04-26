/*
	读取两个整数值并显示平均值
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("输入两个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("另一个人的平均值是 %d。\n", (a + b) / 2);

	return 0;
}
