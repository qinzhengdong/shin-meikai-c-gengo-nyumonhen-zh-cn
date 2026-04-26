/*
	交换两个整数值
*/

#include <stdio.h>

/*---交换px和py指向的对象的值---*/
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	int na, nb;

	puts("输入两个整数。");
	printf("整数Ａ：");   scanf("%d", &na);
	printf("整数Ｂ：");   scanf("%d", &nb);

	swap(&na, &nb);

	puts("我已经换了一段时间了。");
	printf("整数 A 是 %d。\n", na);
	printf("整数 B 是 %d。\n", nb);

	return 0;
}
