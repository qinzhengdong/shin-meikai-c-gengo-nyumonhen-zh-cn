/*
	将读取的整数值倒数至 0
*/

#include <stdio.h> /* 包含标准输入输出库 */

int main(void) /* 主函数 */
{
	int no; /* 整数变量 no */

	printf("请输入一个正整数："); /* 提示用户输入一个正整数 */
	scanf("%d", &no); /* 读取用户输入的整数 */

	while (no >= 0) { /* 当 no 大于等于 0 时，执行以下操作 */
		printf("%d ", no); /* 显示 no 的值 */
		no--;			/* no 减 1 */
	}
	printf("\n");		/* 换行 */

	return 0; /* 返回值为0 */	
}
