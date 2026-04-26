/*
	将两个整数按升序排列
*/

#include <stdio.h>

/*---交换px和py指向的对象的值---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/*---排列使得*n1≤*n2 ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int na, nb;

	puts("输入两个整数。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	sort2(&na, &nb);

	puts("排序顺序。");
	printf("整数 A 是 %d。\n", na);
	printf("整数 B 是 %d。\n", nb);

	return 0;
}
