/*
	atoi函数使用示例
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	printf("将整数转换回 %d。\n", atoi(str));

	return 0;
}
