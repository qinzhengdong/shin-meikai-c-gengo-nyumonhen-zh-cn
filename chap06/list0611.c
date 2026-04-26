/*
	找出最高的英语分数和数学分数
*/

#include <stdio.h>

#define NUMBER	5		/* 学生人数 */

/*--- 返回包含 n 个元素的数组 v 的最大值 ---*/
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];		/* 英语成绩 */
	int mat[NUMBER];		/* 数学成绩 */
	int max_e, max_m;		/* 最高点 */

	printf("简介 %d 人分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 英語：", i + 1);  scanf("%d", &eng[i]);
		printf( "    数学：");         scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* 英语最高分 */
	max_m = max_of(mat, NUMBER);	/* 数学的最高点 */

	printf("英语最高分 = %d\n", max_e);
	printf("数学最高分 = %d\n", max_m);

	return 0;
}
