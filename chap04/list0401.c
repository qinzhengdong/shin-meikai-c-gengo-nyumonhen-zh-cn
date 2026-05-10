/*
	读取的整数值是奇数还是偶数（可以重复多次）
*/

#include <stdio.h>

static void clear_line(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

int main(void)
{
	int retry;		/* 继续处理 */

	do {
		int no; /* 整数 */

		printf("请输入一个整数："); /* 提示用户输入一个整数 */
		if (scanf("%d", &no) != 1) {
			clear_line();
			puts("输入无效，请输入整数。");
			retry = 0;
			continue;
		}
		clear_line();

		if (no % 2) /* 如果 no 为奇数 */		
			puts("这个数字是奇数。");
		else
			puts("这个数字是偶数。");

		printf("继续吗？ [是…0/否…9]：");
		if (scanf("%d", &retry) != 1) {
			clear_line();
			retry = 9; /* 输入异常时退出循环，避免刷屏 */
			puts("输入无效，已结束。");
		} else {
			clear_line();
		}
	} while (retry == 0);

	return 0; /* 返回值为0 */
}
