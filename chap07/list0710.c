/*
	查找两点之间的距离
*/

#include <math.h>
#include <stdio.h>

/*--- 求点 (x1, y1) 和点 (x2, y2) 之间的距离 ---*/
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
	double x1, y1;		/* 点１ */
	double x2, y2;		/* 点２ */

	printf("两点之间的距离。\n");
	printf("点１…Ｘ座標：");   scanf("%lf", &x1);
	printf("　　　Ｙ座標：");   scanf("%lf", &y1);
	printf("点２…Ｘ座標：");   scanf("%lf", &x2);
	printf("　　　Ｙ座標：");   scanf("%lf", &y2);

	printf("距离 %f。\n", dist(x1, y1, x2, y2));

	return 0;
}
