/*
	连续显示*为读取的整数个数（for语句）
*/

#include <stdio.h>

int main(void)
{
	int i, no; /* 整数变量 i 和 no */

	printf("正整数：");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*'); /* 显示 * */
	putchar('\n'); /* 显示换行 */

	return 0; /* 返回值为0 */
}
