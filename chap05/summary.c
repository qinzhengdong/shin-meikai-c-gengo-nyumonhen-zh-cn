/*
	第 5 章总结
*/

#include <stdio.h>

#define SIZE	5		/* 数组 a 和 b 中的元素数量 */

int main()
{
	int i, j;
	int sum;

	/* 数组a和b是int[5]类型的一维数组（元素类型为int，元素个数为5）*/
	int a[SIZE];
	int b[SIZE] = {1, 2, 3};

	/* 数组c是int[2][3]类型的二维数组（元素类型为int[3]，元素个数为2）*/
	int c[2][3] = {
		{11, 22, 33},
		{44, 55, 66},
	};

	/* 将数组 b 的所有元素复制到 a */
	for (i = 0; i < SIZE; i++)
		a[i] = b[i];

	/* 显示数组a所有元素的值 */
	for (i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	/* 显示数组b所有元素的值 */
	for (i = 0; i < SIZE; i++)
		printf("b[%d] = %d\n", i, b[i]);

	/* 显示数组a中所有元素的总和 */
	sum = 0;
	for (i = 0; i < SIZE; i++)
		sum += a[i];
	printf("数组 a 所有元素的总和 = %d\n", sum); 

	/* 显示数组c所有元素的值 */
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}

	return 0;
}
