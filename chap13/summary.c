/*
	将输入从标准输入写入文件
*/

#include <stdio.h>

int main(void)
{
	int ch;
	FILE *fp;						/* 复制目标文件 */
	char fname[FILENAME_MAX];		/* 复制目标文件名 */

	printf("复制目标文件名：");
	scanf("%s\n", fname);

	if ((fp = fopen(fname, "w")) == NULL)	/* 打开复制目的地 */
		printf("\a 未经授权进入。\n");
	else {
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);							/* 关闭复制目的地 */
	}

	return 0;
}
