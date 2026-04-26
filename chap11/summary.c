/*
	字符串和字符串数组
*/

#include <ctype.h>
#include <stdio.h>

/*--- 显示由“”包围的字符串 s 并另起一行 ---*/
#define put_str_ln(s)  (put_str(s), putchar('\n'))

/*--- 显示由“”包围的字符串 ---*/
void put_str(const char *s)
{
	putchar('\"');
	while (*s)
		putchar(*s++);
	putchar('\"');
}

/*--- 将字符串转换为大写并复制 ---*/
char *str_cpy_toupper(char *d, const char *s)
{
	char *tmp = d;

	while (*d++ = toupper(*s++))
		;

	return tmp;
}

int main(void)
{
	int i;
	char s[128], t[128];	/* 字符串按数组 */
	char a[] = "CIA";		/* 字符串按数组 */
	char *p  = "FBI";		/* 通过指针字符串 */
	char a2[][5] = {"LISP", "C", "Ada"};	/* 按数组排列的字符串数组 */
	char *p2[]   = {"PAUL", "X", "MAC"};	/* 通过指针组成的字符串数组 */

	printf("字符串 s =");   scanf("%s", s);
	printf("我有大量通用复制系统的副本。\n");
	printf("字符串 t = %s\n", str_cpy_toupper(t, s));

	printf("a = ");   put_str_ln(a);
	printf("p = ");   put_str_ln(p);

	for (i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
		printf("a2[%d] = ", i);   put_str_ln(a2[i]);
	}

	for (i = 0; i < sizeof(p2) / sizeof(p2[0]); i++) {
		printf("p2[%d] = ", i);   put_str_ln(p2[i]);
	}
}
