/*
	显示加载月份的季节
*/

#include <stdio.h>

int main(void)
{
	int month;					/* 月 */

	printf("现在是几月？");
	scanf("%d", &month);

	if (month >= 3 && month <= 5)
		printf("%d Tsukiryo 是顺天的天道。\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d 月亮是夏天。\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d Tsukiryo 是酒吞。\n", month);
	else if (month == 1 || month == 2 || month == 12)
		printf("%d 月亮是冬天。\n", month);
	else
		printf("%d没有月亮！！\a\n", month);

	return 0;
}
