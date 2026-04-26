/*
	交换两个实数（错误）
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
	double da, db;

	puts("实际数量。");
	printf("実数Ａ：");  scanf("%lf", &da);
	printf("実数Ｂ：");  scanf("%lf", &db);

	swap(&da, &db);

	puts("我已经换了一段时间了。");
	printf("实际数字 A 是 %f。\n", da);
	printf("实际数字 B 是 %f。\n", db);

	return 0;
}
