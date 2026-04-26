/*
	求阶乘
*/

#include <stdio.h>

/*--- 返回阶乘值 ---*/
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d 与 %d 相同。\n", num, factorial(num));

	return 0;
}
