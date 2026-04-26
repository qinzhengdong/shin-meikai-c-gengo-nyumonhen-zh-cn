/*
	测量身高、体重、计算平均值
*/

#include <stdio.h>

int main(void)
{
	FILE   *fp;
	int    ninzu = 0;			/* 人数 */
	char   name[100];			/* 名前 */
	double height, weight;		/* 身高/体重 */
	double hsum = 0.0;			/* 总高度 */
	double wsum = 0.0;			/* 总重量 */

	if ((fp = fopen("hw.dat", "r")) == NULL)				/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);											/* 关闭 */
	}

	return 0;
}
