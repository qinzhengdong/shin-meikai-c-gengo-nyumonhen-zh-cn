/*
	读取的两个整数值是否相等？
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("输入两个整数。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	if (n1 == n2)
		puts("其他人的看法也一致。");
	else
		puts("你如何看待别人并没有什么区别。");

	return 0;
}
