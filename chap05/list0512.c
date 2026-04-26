/*
	加载学生成绩并显示分布
*/

#include <stdio.h>

#define NUMBER	80		/* 最大人数 */

int main(void)
{
	int i, j;
	int num;				/* 实际人数 */
	int tensu[NUMBER];		/* 学生成绩 */
	int bunpu[11] = {0};	/* 积分分配 */

	printf("请输入人数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("请输入\a1~%d：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("简介 %d 人分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("请输入 \a1 到 100：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---分布图---");
	printf("      100：");

	for (j = 0; j < bunpu[10]; j++)			/* 100点 */
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {				/* 100点未満 */
		printf("%3d ～%3d：", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
