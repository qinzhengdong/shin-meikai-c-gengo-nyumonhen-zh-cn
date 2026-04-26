/*
	通过询问姓名来打招呼（阅读字符串）
*/

#include <stdio.h>

int main(void)
{
	char name[48];

	printf("你的名字是：");
	scanf("%s", name);

	printf("你好，%s！！\n", name);

	return 0;
}
