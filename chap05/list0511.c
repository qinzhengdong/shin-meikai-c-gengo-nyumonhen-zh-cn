/*
	加载学生成绩并显示最高分和最低分
*/

#include <stdio.h>

#define NUMBER	5		/* 学生人数 */

int main(void)
{
	int i;
	int tensu[NUMBER];	/* NUMBER个学生成绩 */
	int max, min;		/* 最高/最低点 */

	printf("简介 %d 人分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("最高点：%d\n", max);
	printf("最低点：%d\n", min);

	return 0;
}
