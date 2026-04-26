/*
	检查具有静态存储持续时间的对象的隐式初始化
*/

#include <stdio.h>

int fx;						/* 初始化为0 */

int main(void)
{
	int i;
	static int    si;		/* 初始化为0 */
	static double sd;		/* 初始化为0.0 */
	static int    sa[5];	/* 所有元素都初始化为0 */

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);

	return 0;
}
