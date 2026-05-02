/*
	显示加载月份的季节
*/

#include <stdio.h>

int main(void)
{
	int month;					/* 月 */

	printf("现在是几月？");
	scanf("%d", &month); /* 读取整数 */

	if (month >= 3 && month <= 5) /* 如果 month 在 3 到 5 之间 */
		printf("%d月是春季。\n", month);
	else if (month >= 6 && month <= 8) /* 如果 month 在 6 到 8 之间 */	
		printf("%d月是夏季。\n", month);
	else if (month >= 9 && month <= 11) /* 如果 month 在 9 到 11 之间 */
		printf("%d月是秋季。\n", month);
	else if (month == 1 || month == 2 || month == 12) /* 如果 month 是 1、2 或 12 */
		printf("%d月是冬季。\n", month);
	else
		printf("%d没有月份！！\a\n", month); /* 如果 month 不是 1、2 或 12 */

	return 0;	/* 返回值为0 */
}
