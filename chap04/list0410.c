/*
	以相反顺序显示读取的正整数值
*/

#include <stdio.h>

int main(void)
{
	int no;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a 输入一个非正数。");
	} while (no <= 0);

	/* 否大于 0 */
	printf("如果你倒着读这个数字，");
	while (no > 0) {
		printf("%d", no % 10);		/* 显示最低有效数字的值 */ 
		no /= 10;					/* 右移一位数 */
	}
	puts("正确的。");

	return 0;
}
