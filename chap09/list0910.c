/*
	计算字符串中的字符数
*/

#include <stdio.h>

/*--- 将字符串 s 中包含的数字字符的出现次数存储在数组 cnt 中 ---*/
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= '0' && s[i] <= '9')
			cnt[s[i] - '0']++;
		i++;
	}
}

int main(void)
{
	int  i;
	int  dcnt[10] = {0};	/* 分布 */
	char str[128];			/* 细绳 */

	printf("请输入字符串：");
	scanf("%s", str);

	str_dcount(str, dcnt);

	puts("数字字符出现的次数");
	for (i = 0; i < 10; i++)
		printf("'%d'：%d\n", i, dcnt[i]);

	return 0;
}
