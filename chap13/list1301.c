/*
	打开和关闭文件
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "r");						/* 打开文件 */

	if (fp == NULL)
		printf("\a 条 \"abc\" 非法开放。\n");
	else {
		printf("\a 文本 \"abc\" 打开。\n");
		fclose(fp);								/* 关闭文件 */
	}

	return 0;
}
