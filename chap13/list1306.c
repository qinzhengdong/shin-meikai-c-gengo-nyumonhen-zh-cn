/*
	显示文件内容
*/

#include <stdio.h>

int main(void)
{
	int  ch;
	FILE *fp;
	char fname[FILENAME_MAX];		/* 文件名 */

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)					/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);											/* 关闭 */
	}

	return 0;
}
