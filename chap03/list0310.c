/*
	如果取一个整数，可以通过修正数来判断，如果能判断出来就是偶数，那么就是奇数。
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("数量均匀。");
		else
			puts("数量奇数。");
	else
		puts("启动已完成，无需确认。 \a\n");

	return 0;
}
