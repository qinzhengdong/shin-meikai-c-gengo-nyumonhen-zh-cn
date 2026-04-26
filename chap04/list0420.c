/*
	联系信息
*/

#include <stdio.h>

int main(void)
{
	int retry;

	do {
		int i, no;

		do {
			printf("请输入一个正整数：");
			scanf("%d", &no);
			if (no <= 0)
				puts("\a 输入一个非正数。");
		} while (no <= 0);
							/* 否大于或等于0 */
		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("再次？ [是…0/否…9]：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
