/*
	将数组的所有元素设置为零
*/

#include <stdio.h>

/*--- 将 0 分配给 n 个元素的数组 v 的元素 ---*/
void set_zero(int v[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		v[i] = 0;
}

/*--- 显示 n 个元素的数组 v 的所有元素并换行 ---*/
void print_array(const int v[], int n)
{
	int i;

	printf("{ ");
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("}");
}

int main(void)
{
	int ary1[] = {1, 2, 3, 4, 5};
	int ary2[] = {3, 2, 1};

	printf("ary1 = ");   print_array(ary1, 5);   putchar('\n');
	printf("ary2 = ");   print_array(ary2, 3);   putchar('\n');

	set_zero(ary1, 5);		/* 将 0 赋给数组 ary1 的所有元素 */
	set_zero(ary2, 3);		/* 将 0 赋给数组 ary2 的所有元素 */

	printf("我一般0分布的元素归多个组所有。\n");
	printf("ary1 = ");   print_array(ary1, 5);   putchar('\n');
	printf("ary2 = ");   print_array(ary2, 3);   putchar('\n');

	return 0;
}
