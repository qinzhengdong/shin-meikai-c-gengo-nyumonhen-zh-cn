/*
	第 3 章摘要（第 1 部分）显示加载月份的季节
*/

#include <stdio.h>

int main(void)
{
	int month;					/* 月 */

	printf("现在是几月？");
	scanf("%d", &month); /* 读取整数 */	

	if (month < 1 || month > 12) /* 如果 month 不在 1 到 12 之间 */
		printf("%d没有月份！！\a\n", month); /* 如果 month 不在 1 到 12 之间 */
	else if (month <= 2 || month == 12) /* 如果 month 在 2 到 12 之间 */
		printf("%d月是冬季。\n", month); /* 如果 month 在 2 到 12 之间 */
	else if (month >= 9) /* 如果 month 在 9 到 12 之间 */
		printf("%d月是秋季。\n", month); /* 如果 month 在 9 到 12 之间 */
	else if (month >= 6) /* 如果 month 在 6 到 8 之间 */
		printf("%d月是夏季。\n", month); /* 如果 month 在 6 到 8 之间 */
	else
		printf("%d月是春季。\n", month); /* 如果 month 在 3 到 5 之间 */

	return 0;	/* 返回值为0 */
}
