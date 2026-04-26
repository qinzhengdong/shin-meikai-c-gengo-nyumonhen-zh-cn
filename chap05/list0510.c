/*
	加载学生成绩并显示总分和平均分（用宏定义学生人数）
*/

#include <stdio.h>

#define NUMBER	5		/* 学生人数 */

int main(void)
{
	int i;
	int tensu[NUMBER];	/* NUMBER个学生成绩 */
	int sum = 0;		/* 总分 */

	printf("简介 %d 人分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("总分：%5d\n", sum);
	printf("平均分：%5.1f\n", (double)sum / NUMBER);

	return 0;
}
