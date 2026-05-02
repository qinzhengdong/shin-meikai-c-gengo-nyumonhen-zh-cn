/*
	读取的整数值能否被5整除？
*/

#include <stdio.h>

int main(void) /* 主函数 */
{
	int no; /* 整数变量 no */

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */

	if (no % 5) /* 如果 no 不能被5整除 */
		puts("这个数字不能被5整除。");
	else
		puts("这个数字能被5整除。");

	return 0; /* 返回值为0 */
} /* 主函数结束 */
