/*
	为 n 行 3 列的二维数组的所有分量分配相同的值
*/

#include <stdio.h>

/*---将v赋值给数组m中n个元素类型为int[3]的所有元素---*/
void fill(int m[][3], int n, int v)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = v;
}

/*---显示数组m的所有元素，其中n个元素的元素类型为int[3] ---*/
void mat_print(const int m[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main()
{
	int no;
	int x[2][3] = {0};		/* 2行3列：元素类型为int[3]类型，元素数量为2 */
	int y[4][3] = {0};		/* 4行3列：元素类型为int[3]类型，元素数量为4 */

	printf("分配给所有组件的值：");
	scanf("%d", &no);

	fill(x, 2, no);			/* 为 x 的所有分量指定 no */
	fill(y, 4, no);			/* 为 y 的所有分量指定 no */

	printf("--- x ---\n");   mat_print(x, 2);
	printf("--- y ---\n");   mat_print(y, 4);

	return 0;
}
