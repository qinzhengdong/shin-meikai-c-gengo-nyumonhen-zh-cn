/*
	显示读取的整数值的所有除数
*/

#include <stdio.h> /* 包含标准输入输出库 */

int main(void) /* 主函数 */
{
	int i, n; /* 整数变量 i 和 n */

	printf("整数値："); /* 提示用户输入整数 */
	scanf("%d", &n); /* 读取用户输入的整数 */

	for (i = 1; i <= n; i++) /* 循环显示小于或等于读取的整数值的除数 */
		if (n % i == 0) /* 如果 n 除以 i 的余数为0 */
			printf("%d ", i);
	putchar('\n'); /* 显示换行 */

	return 0; /* 返回值为0 */
}
