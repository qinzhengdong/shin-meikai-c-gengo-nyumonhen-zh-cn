/*
	读取的整数值能否被5整除？
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 5)
		puts("除以5（未经授权的数字）。");

	return 0;
}
