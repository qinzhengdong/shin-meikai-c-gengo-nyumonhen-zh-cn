/*
	读取两个整数值并显示商和余数
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	puts("输入两个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);

	printf("a 除以 b 的商是 %d，余数是 %d。\n", a / b, a % b);

	return 0;
}
