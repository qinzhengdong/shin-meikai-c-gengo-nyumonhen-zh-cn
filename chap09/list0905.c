/*
	格式化并显示字符串“12345”
*/

#include <stdio.h>

int main(void)
{
	char str[] = "12345";

	printf("%s\n",   str);		/* 按原样 */
	printf("%3s\n",  str);		/* 最低３桁 */
	printf("%.3s\n", str);		/* 最多 3 位数字 */
	printf("%8s\n",  str);		/* 右对齐至少 8 位数字 */
	printf("%-8s\n", str);		/* 左对齐至少 8 位数字 */

	return 0;
}
