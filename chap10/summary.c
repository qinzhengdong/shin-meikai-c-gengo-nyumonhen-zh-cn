/*
	加载学生成绩并按升序排序
*/

#include <stdio.h>

#define NUMBER	5		/* 人数 */

/*---交换px和py指向的对象的值---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*--- 冒泡排序 ---*/
void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int i;
	int point[NUMBER];		/* NUMBER个学生成绩 */

	printf("简介 %d 人分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &point[i]);
	}

	bsort(point, NUMBER);		/* 种类 */

	puts("排序顺序。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号：%d\n", i + 1, point[i]);

	return 0;
}
