/*
	汽车运动
*/

#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))

/*===显示点汇总===*/
typedef struct  {
	double x;	/* Ｘ座標 */
	double y;	/* Ｙ座標 */
} Point;

/*===代表汽车的结构===*/
typedef struct  {
	Point  pt;		/* 現在位置 */
	double fuel;	/* 剩余燃料 */
} Car;

/*--- 返回点 pa 和点 pb 之间的距离---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*--- 显示汽车当前位置和剩余油量 ---*/
void put_info(Car c)
{
	printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("剩余燃油：%.2f 升 \n", c.fuel);
}

/*---将c指向的小车移动到目的地坐标dest ---*/
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);	/* 移動距離 */
	if (d > c->fuel)						/* 行驶距离超过燃料 */
		return 0;							/* 移動不可 */
	c->pt = dest;		/* 更新当前位置（移动到目的地） */
	c->fuel -= d;		/* 更新燃油（减少行驶距离 d） */
	return 1;								/* 移動成功 */
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		Point dest;			/* 目的地坐标 */

		put_info(mycar);	/* 显示当前位置和剩余燃料 */

		printf("你想搬家吗？ [是…1/否…0]：");
		scanf("%d", &select);
		if (select != 1) break;

		printf("目标值的X坐标：");  scanf("%lf", &dest.x);
		printf("　　　　Ｙ座標：");  scanf("%lf", &dest.y);

		if (!move(&mycar, dest))
			puts("\a 由于缺乏燃料而没有燃料行驶。");
	}

	return 0;
}
