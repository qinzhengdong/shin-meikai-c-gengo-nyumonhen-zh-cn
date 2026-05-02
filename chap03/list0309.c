/*
	确定读取的整数值的符号
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */

	if (no == 0) /* 如果 no 为0 */
		puts("这个数字是0。");
	else if (no > 0) /* 如果 no 为正数 */
		puts("这个数字是正数。");
	else /* 如果 no 为负数 */
		puts("这个数字是负数。");

	return 0; /* 返回值为0 */
}
