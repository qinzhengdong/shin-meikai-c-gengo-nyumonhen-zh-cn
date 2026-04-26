/*
	将字符串存储在数组中并显示它（第 1 部分：赋值）
*/

#include <stdio.h>

int main(void)
{
	char str[4];	/* 存储字符串的数组 */

	str[0] = 'A';	/* 代入 */
	str[1] = 'B';	/* 代入 */
	str[2] = 'C';	/* 代入 */
	str[3] = '\0';	/* 代入 */

	printf("字符串 str 为 \"%s\"。\n", str);	/* 展示 */

	return 0;
}
