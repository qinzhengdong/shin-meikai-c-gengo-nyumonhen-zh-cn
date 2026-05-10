/*
	以相反顺序显示读取的正整数值
*/

#include <stdio.h> /* 包含标准输入输出库 */

static void clear_line(void)	/* 清除输入缓冲区中的多余字符 */
{
	int c; /* 字符变量 c */
	while ((c = getchar()) != '\n' && c != EOF) /* 读取字符，直到遇到换行符或EOF */
		; /* 空语句 */
}

int main(void) /* 主函数 */
{
	int no; /* 整数变量 no */

	do {
		printf("请输入一个正整数："); /* 提示用户输入一个正整数 */
		if (scanf("%d", &no) != 1) {
			clear_line();
			puts("\a请输入整数。");
			no = 0; /* 让循环继续，直到读到合法整数 */
			continue;
		}
		clear_line();
		if (no <= 0)
			puts("\a请不要输入非正数。"); /* 提示用户输入一个非正数 */
	} while (no <= 0);

	printf("该整数逆向显示为："); /* 提示用户逆向显示该整数 */
	while (no > 0) {
		printf("%d", no % 10); /* 显示最低有效数字的值 */
		no /= 10; /* 右移一位数 */
	}
	puts("正确的。");

	return 0;
}
