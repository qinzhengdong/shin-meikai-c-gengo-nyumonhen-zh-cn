/*
	显示读取的整数值除以 3 的余数
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */

	if (no % 3 == 0) /* 如果 no 除以 3 的余数为0 */
		puts("排除3.");
	else if (no % 3 == 1) /* 如果 no 除以 3 的余数为1 */
		puts("除去前景3剩余金额1。");
	else /* 如果 no 除以 3 的余数为2 */
		puts("除去前景3剩余量2。");

	return 0; /* 返回值为0 */
}
