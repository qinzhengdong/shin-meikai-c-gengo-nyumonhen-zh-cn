/*
	读取的整数值是否为零？
*/

#include <stdio.h>

int main(void) /* 主函数 */
{
	int num; /* 整数变量 num */

	printf("请输入一个整数：");
	scanf("%d", &num); /* 读取整数 */

	if (num) /* 如果 num 不为0 */
		puts("这个数字不为零。");
	else
		puts("这个数字为零。");

	return 0; /* 返回值为0 */
}
