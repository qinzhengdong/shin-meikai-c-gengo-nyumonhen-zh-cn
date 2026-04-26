/*
	以相反顺序显示读取的正整数值
*/

#include <stdio.h>

/*--- 读取并返回一个正整数 ---*/
int scan_pint(void)
{
	int tmp;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &tmp);
		if (tmp <= 0)
			puts("\a 输入一个非正数。");
	} while (tmp <= 0);
	return tmp;
}

/*--- 返回非负整数的反转值 ---*/
int rev_int(int num)
{
	int tmp = 0;

	if (num > 0) {
		do {
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}
	return tmp;
}

int main(void)
{
	int nx = scan_pint();

	printf("%d。\n", rev_int(nx));

	return 0;
}
