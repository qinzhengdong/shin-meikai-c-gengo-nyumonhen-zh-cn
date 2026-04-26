/*
	确定简单 char 类型是有符号类型还是无符号类型
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("该处理系统的char类型是");

	if (CHAR_MIN)
		puts("是的，有一个标志类别。");
	else
		puts("它是无代码类型。");

	return 0;
}
