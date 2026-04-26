/*
	将字符串中的字母字符转换为大写/小写
*/

#include <ctype.h>
#include <stdio.h>

/*--- 将字符串中的字母字符转换为大写 ---*/
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}

/*--- 将字符串中的字母字符转换为小写 ---*/
void str_tolower(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = tolower(s[i]);
		i++;
	}
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	str_toupper(str);
	printf("大文字：%s\n", str);

	str_tolower(str);
	printf("小文字：%s\n", str);

	return 0;
}
