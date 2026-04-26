/*
	依次读取整数值并显示总和和平均值
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

		sum = sum + t;	 /* 将sum加上t得到的值赋给sum（sum加上t）*/
		cnt = cnt + 1;	 /* 将cnt的值加1赋给cnt（cnt加1）*/

		printf("仍然？ <是…0/否…9>：");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("平均强度 %d，平均强度 %.2f。\n", sum, (double)sum / cnt);

	return 0;
}
