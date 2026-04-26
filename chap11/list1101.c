/*
	来自数组的字符串和来自指针的字符串
*/

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";		/* 字符串按数组 */
	char *ptr  = "123";		/* 通过指针字符串 */

	printf("str = \"%s\"\n", str);		/* str 是指向第一个字符的指针 */
	printf("ptr = \"%s\"\n", ptr);		/* ptr 是指向第一个字符的指针 */

	return 0;
}
