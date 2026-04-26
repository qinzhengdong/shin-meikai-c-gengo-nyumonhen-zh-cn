/*
	显示与读取的整数值的符号相反的值
*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);								/* 读取整数值 */

	printf("%d。\n", -num);	/* 単項-演算子 */

	return 0;
}
