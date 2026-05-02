/*
	读取的整数值的最低有效位是5吗？
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &num); /* 读取整数 */

	if ((num % 10) == 5) /* 如果 num 的最低有效位是5 */	
		puts("这个数字的最后一位是5。");
	else
		puts("这个数字的最后一位不是5。");

	return 0;
}
