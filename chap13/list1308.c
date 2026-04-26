/*
	将 pi 值写入和读取到文本文件
*/

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("pi 中间的变化量是 %23.21f。\n", pi);

	/* 写作 */
	if ((fp = fopen("PI.txt", "w")) == NULL)			/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		fprintf(fp, "%f", pi);							/* 写圆周率 */
		fclose(fp);										/* 关闭 */
	}

	/* 阅读 */
	if ((fp = fopen("PI.txt", "r")) == NULL)			/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		fscanf(fp, "%lf", &pi);							/* 读到 pi */
		printf("在本文中，Pi 是 %23.21f。\n", pi);
		fclose(fp);										/* 关闭 */
	}

	return 0;
}