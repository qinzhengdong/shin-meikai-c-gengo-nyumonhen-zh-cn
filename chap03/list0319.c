/*
	显示读取的整数值除以 3 的余数（switch 语句）
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	switch (no % 3) {
	 case 0 : puts("排除3.");		break;
	 case 1 : puts("除去前景3剩余金额1。");	break;
	 case 2 : puts("除去前景3剩余量2。");	break;
	}

	return 0;
}
