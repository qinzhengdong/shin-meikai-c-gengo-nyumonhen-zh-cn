/*
	读取的整数值是奇数还是偶数（可以重复多次）
*/

#include <stdio.h>

int main(void)
{
	int retry;		/* 继续处理 */

	do {
		int no;

		printf("请输入一个整数：");
		scanf("%d", &no);

		if (no % 2)
			puts("数量奇数。");
		else
			puts("数量均匀。");

		printf("再次？ [是…0/否…9]：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
