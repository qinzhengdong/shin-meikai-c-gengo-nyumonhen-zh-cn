/*
	显示两个读取的整数值的总和（相加结果）
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("导入两个整数。");                  /* 提示用户输入两个整数 */		
	printf("整数１：");   scanf("%d", &n1);  /* 读取第一个整数 */
	printf("整数２：");   scanf("%d", &n2);  /* 读取第二个整数 */

	printf("他们的和是%d。\n", n1 + n2);		/* 显示总和 */
	return 0;									/* 返回值为0 */
}
