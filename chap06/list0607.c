/*
	显示左下右角的直角等腰三角形（函数版）
*/

#include <stdio.h>

/*--- 显示n个连续的符号字符'*' ---*/
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;

	printf("一个三角形，左下和右下各一块。\n");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
