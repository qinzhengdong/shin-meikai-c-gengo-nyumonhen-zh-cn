/*
	检查字符串的长度
*/

#include <stdio.h>

/*--- 返回字符串 str 的长度 ---*/
int str_length(const char s[])
{
	int len = 0;

	while (s[len])
		len++;
	return len;
}

int main(void)
{
	char str[128];	/* 最多可存储 128 个字符（包括空字符） */

	printf("请输入字符串：");
	scanf("%s", str);

	printf("字符 \"%s\" 的长度为 %d。\n", str, str_length(str));

	return 0;
}
