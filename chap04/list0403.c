/*不停地输入整数，显示其和和平均数*/

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

		sum = sum + t;	 /* 将sum加上t得到的值赋给sum（sum加上t）*/
		cnt = cnt + 1;	 /* 将cnt的值加1赋给cnt（cnt加1）*/

		printf("继续吗？ <是…0/否…9>：");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("和为 %d，平均值为 %.2f。\n", sum, (double)sum / cnt);

	return 0;
}
