/*
	读取的整数值是奇数吗？
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */

	if (no % 2) /* 如果 no 不能被2整除 */
		puts("这个数字是奇数。");
	else
		puts("这个数字是偶数。");

	return 0; /* 返回值为0 */
} /* 主函数结束 */
