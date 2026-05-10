/*
	依次读取整数值并显示总和和平均值（第 2 部分）
	*使用复合赋值运算符和后缀增量运算符
*/

#include <stdio.h>

int main(void)
{
	int sum = 0;	/* 总计 */
	int cnt = 0;	/* 整数值的数量 */
	int retry;		/* 继续处理 */

	do {
		int t;

		printf("请输入一个整数值：");
		scanf("%d", &t);

		sum += t;	 /* 将 t 添加到总和中 */
		cnt++;		 /* 增加碳数 */

		printf("继续吗？ <是…0/否…9>：");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("和为 %d，平均值为 %.2f。\n", sum, (double)sum / cnt);

	return 0;
}
