/*
	读取的整数值是奇数还是偶数？
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("数量奇数。");
	else
		puts("数量均匀。");

	return 0;
}
