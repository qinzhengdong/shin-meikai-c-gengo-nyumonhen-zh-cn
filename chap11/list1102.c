/*
	使用数组重写字符串
*/

#include <stdio.h>

int main(void)
{
	char s[] = "ABC";

	printf("s = \"%s\"\n", s);

	s = "DEF";		/* 错误 */

	printf("s = \"%s\"\n", s);

	return 0;
}
