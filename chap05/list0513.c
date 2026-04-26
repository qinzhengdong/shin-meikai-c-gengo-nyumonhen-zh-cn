/*
	查找并显显显 4 名学生 3 科 题目 2 号试卷号。
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];			/* 总计 */

	/* 计算两次考试的总成绩 */
	for (i = 0; i < 4; i++) {							/* 适合 4 人 */
		for (j = 0; j < 3; j++)							/* 3 科目 */
			sum[i][j] = tensu1[i][j] + tensu2[i][j];	/* 添加2剂 */
	}

	/* 显示第一个分数 */
	puts("第一分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu1[i][j]);
		putchar('\n');
	}

	/* 显示第二个分数 */
	puts("第二分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu2[i][j]);
		putchar('\n');
	}

	/* 显示总分 */
	puts("总分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
