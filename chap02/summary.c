/*
	第 2 章总结
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	double r;	/* 半径 */

	printf("整数a和b的值：");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);	/* 加算：２項+演算子 */
	printf("a - b = %d\n", a - b);	/* 減算：２項-演算子 */
	printf("a * b = %d\n", a * b);	/* 積　：２項*演算子 */
	printf("a / b = %d\n", a / b);	/* 商　：/演算子     */
	printf("a %% b = %d\n", a % b);	/* 剰余：%演算子     */

	printf("(a+b)/2 = %d\n",   (a + b) / 2);
	printf("平均値  = %f\n\n", (double)(a + b) / 2);

	printf("半径：");
	scanf("%lf", &r);

	printf("半径 PH_0__，表面粗糙度 PH_1__。\n", r, 3.14 * r * r);

	return 0;
}
