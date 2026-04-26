/*
	复制文件
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *sfp;						/* 复制源文件 */
	FILE *dfp;						/* 复制目标文件 */
	char sname[FILENAME_MAX];		/* 复制源文件名 */
	char dname[FILENAME_MAX];		/* 目标文件名 */

	printf("复制源文件名：");   scanf("%s", sname);
	printf("复制目标文件名：");   scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)			/* 打开复制源 */
		printf("\a 非法爆炸源文本项。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)		/* 打开复制目的地 */
			printf("\a 未经授权进入。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				fputc(ch, dfp);
			fclose(dfp);						/* 关闭复制目的地 */
		}
		fclose(sfp);							/* 关闭复制源 */
	}

	return 0;
}
