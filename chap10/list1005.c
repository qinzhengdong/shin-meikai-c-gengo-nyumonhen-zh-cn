/*
	求两个整数的和与差
*/

#include <stdio.h>

/*--- 将n1和n2的和与差存储在*sum和*diff中---*/
void sum_diff(int n1, int n2, int *sum, int *diff)
{ 
	*sum  = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("输入两个整数。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);

	printf("瀻和为%d、为%d。\n", wa, sa);

	return 0;
}
