/*--- strcat的实现示例---*/
char *strcat(char *s1, const char *s2)
{
	char *tmp = s1;

	while (*s1)					/* 将 s1 推进到末尾 */
		s1++;
	while (*s1++ = *s2++)		/* 复制直到在 s2 中找到 '\0' */
		;

	return tmp;
}

/*--- strncat的实现示例 ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *tmp = s1;

	while (*s1)							/* 将 s1 推进到末尾 */
		s1++;
	while (n--)
		if (!(*s1++ = *s2++)) break;	/* 如果中间有'\0'则结束 */
	*s1 = '\0';							/* 将'\0'放在s1的末尾 */

	return tmp;
}
