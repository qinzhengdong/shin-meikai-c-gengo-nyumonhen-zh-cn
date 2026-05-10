/*
	连续显示*为读取的整数个数
*/

#include <stdio.h>

int main(void)
{
	int no; /* 整数变量 no */

	printf("正整数："); /* 提示用户输入一个正整数 */
	scanf("%d", &no); /* 读取用户输入的整数 */

	while (no-- > 0) /* 当 no 大于 0 时，执行以下操作 */
		putchar('*'); /* 显示 * */
	putchar('\n'); /* 换行 */

	return 0; /* 返回值为0 */
}
