/*
	扫描并显示字符串
*/

#include <stdio.h>

/*--- 显示字符串 s (无换行符) ---*/
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	printf("你");
	put_string(str);
	printf("我输入了 \n");

	return 0;
}
