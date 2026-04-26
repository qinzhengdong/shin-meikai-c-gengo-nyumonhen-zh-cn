/*
	计算并显示4名学生3个科目2次测试的总和（函数版）
*/

#include <stdio.h>

/*--- 将 4×3 矩阵 a 和 b 的和存储在 c 中 ---*/
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/*--- 显示4行3列矩阵m ---*/
void mat_print(const int m[4][3])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];			/* 总计 */

	mat_add(tensu1, tensu2, sum);				/* 计算两次考试的总成绩 */

	puts("第一分");  mat_print(tensu1);	/* 显示第一个分数 */
	puts("第二分");  mat_print(tensu2);	/* 显示第二个分数 */
	puts("总分");        mat_print(sum);		/* 显示总分 */

	return 0;
}
