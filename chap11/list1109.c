/*--- strcpy 的实现示例 ---*/
char *strcpy(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1++ = *s2++)
		;

	return tmp;
}

/*--- strncpy 实现示例 ---*/
char *strncpy(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (n) {
		if (!(*s1++ = *s2++)) break;	/* 找到'\0'时退出 */
		n--;
	}
	while (n--)
		*s1++ = '\0';					/* 其余部分用'\0'填写 */

	return tmp;
}
