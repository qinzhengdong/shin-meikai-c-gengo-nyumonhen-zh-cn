/*
	显示小于或等于读取的整数值的偶数
*/

#include <stdio.h>

int main(void)
{
	int i, n; /* 整数变量 i 和 n */

	printf("整数値："); /* 提示用户输入整数 */
	scanf("%d", &n); /* 读取用户输入的整数 */

	for (i = 2; i <= n; i += 2) /* 循环显示小于或等于读取的整数值的偶数 */
		printf("%d ", i);
	putchar('\n'); /* 显示换行 */

	return 0; /* 返回值为0 */
}
