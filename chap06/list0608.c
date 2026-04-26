/*
	显示右下角的直角等腰三角形（函数版）
*/

#include <stdio.h>

/*--- 显示n个连续字符ch ---*/
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main(void)
{
	int i, len;

	printf("右下右等软骨三角形。\n");
	printf("短辺：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}
