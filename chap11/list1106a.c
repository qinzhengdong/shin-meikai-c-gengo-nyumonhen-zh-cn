/*
	复制字符串
*/
#include <stdio.h>

/*--- 将字符串 s 复制到 d ---*/
char *str_copy(char *d, const char *s)
{
	int i;

	while (d[i] = s[i])
		i++;
	return d;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("复制：", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("我可以控制它。");
	printf("str = \"%s\"\n", str);

	return 0;
}
