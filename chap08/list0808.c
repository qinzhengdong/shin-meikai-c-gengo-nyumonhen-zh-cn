/*
	将输入从标准输入复制到标准输出
*/

#include <stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
