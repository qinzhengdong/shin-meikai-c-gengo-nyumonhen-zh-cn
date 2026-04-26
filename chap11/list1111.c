/*---strcmp的实现示例---*/
int strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0')
			return 0;								/* 平等的 */
		s1++;
		s2++;
	}

	return (unsigned char)*s1 - (unsigned char)*s2;
}

/*---strncmp实现示例---*/
int strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2) {
		if (*s1 != *s2)								/* 不等于 */
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if (!n)  return 0;								/* 平等的 */
	if (*s1) return 1;								/* s1 > s2 */

	return -1;										/* s1 < s2 */
}
