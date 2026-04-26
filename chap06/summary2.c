/*
	让我记住之前的号码
*/

#include <stdio.h>

/* 记住 no 并返回之前的值 */
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}

int main(void)
{
	int retry;

	do {
		int n;

		printf("需要记住的价值：");
		scanf("%d", &n);
		printf("我的记录完成了。第一句话是%d。\n", val(n));

		printf("再次？ [是…0/否…9]：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
