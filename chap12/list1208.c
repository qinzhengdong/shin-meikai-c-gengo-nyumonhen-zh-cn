/*
	查找两点之间的距离
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))		/* 求平方值 */

/*===显示点汇总===*/
typedef struct  {
	double x;	/* Ｘ座標 */
	double y;	/* Ｙ座標 */
} Point;

/*--- 返回点 pa 和点 pb 之间的距离---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
	Point crnt, dest;

	printf("当前位置的X坐标：");   scanf("%lf", &crnt.x);
	printf("　　　　Ｙ座標：");   scanf("%lf", &crnt.y);
	printf("目标值的X坐标：");   scanf("%lf", &dest.x);
	printf("　　　　Ｙ座標：");   scanf("%lf", &dest.y);

	printf("距离为 %.2f。\n", distance_of(crnt, dest));

	return 0;
}
