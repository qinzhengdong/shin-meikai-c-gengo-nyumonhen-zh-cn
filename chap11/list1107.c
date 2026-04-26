/*
	复制字符串（错误示例）
*/

#include <stdio.h>

/*--- 将字符串 s 复制到 d ---*/
char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char *ptr = "1234";
	char tmp[128];

	printf("ptr = \"%s\"\n", ptr);

	printf("复制：", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);					/* 将 tmp 复制到 ptr */

	puts("我可以控制它。");
	printf("ptr = \"%s\"\n", ptr);		/* 复制后显示ptr */

	return 0;
}
