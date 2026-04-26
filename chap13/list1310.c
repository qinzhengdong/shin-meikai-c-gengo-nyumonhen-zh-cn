/*
	文件转储（以字符和代码显示文件内容）
*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE *fp;
	char fname[FILENAME_MAX];			/* 文件名 */

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "rb")) == NULL)					/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		while ((n = fread(buf, 1, 16, fp)) > 0) {
			int i;

			printf("%08lX ", count);						/* 地址 */

			for (i = 0; i < n; i++)							/* 16進数 */
				printf("%02X ", (unsigned)buf[i]);

			if (n < 16)
				for (i = n; i < 16; i++)
					printf("   ");

			for (i = 0; i < n; i++)							/* 文字 */
				putchar(isprint(buf[i]) ? buf[i] : '.');

			putchar('\n');

			count += 16;
		}
		fclose(fp);											/* 关闭 */
	}

	return 0;
}
