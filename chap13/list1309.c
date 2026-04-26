/*
	将 pi 值写入和读取二进制文件
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("pi 中间的变化量是 %23.21f。\n", pi);

	/* 写作 */
	if ((fp = fopen("PI.bin", "wb")) == NULL)		/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);			/* 写圆周率 */
		fclose(fp);
	}												/* 关闭 */

	/* 阅读 */
	if ((fp = fopen("PI.bin", "rb")) == NULL)		/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		fread(&pi, sizeof(double), 1, fp);			/* 读到 pi */
		printf("在本文中，Pi 是 %23.21f。\n", pi);
		fclose(fp);									/* 关闭 */
	}

	return 0;
}
