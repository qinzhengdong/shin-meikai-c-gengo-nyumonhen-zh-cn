/*
	发出警报时显示的宏
*/

#include <stdio.h>

#define puts_alert(str)  ( putchar('\a') , puts(str) )

int main(void)
{
	int n;

	printf("请输入一个整数：");
	scanf("%d", &n);

	if (n)
		puts_alert("当前数量为零。");
	else
		puts_alert("这个数字为零。");

	return 0;
}
