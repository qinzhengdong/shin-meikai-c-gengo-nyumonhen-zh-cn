/*
	第8章小结（功能号、数字符号、符号输入/输出等）
*/

#include <stdio.h>

/* 发出警报 */
#define alert() (putchar('\a'))

/* 显示字母 c 并开始新行 */
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch;
	int sum = 0;	/* 所有数字的总和 */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {
			alert();
			putchar('\n');
		} else {
			putchar_ln(ch);
		}
	}

	printf("数字字符代码 %d。\n", sum);

	return 0;
}
