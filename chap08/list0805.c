/*
	加载并排序学生身高
*/

#include <stdio.h>

#define NUMBER	5		/* 人数 */

/*--- 冒泡排序 ---*/
void bsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int height[NUMBER];		/* NUMBER 个学生身高 */

	printf("%d此人的身高。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);		/* 种类 */

	puts("排序顺序。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号：%d\n", i + 1, height[i]);

	return 0;
}
