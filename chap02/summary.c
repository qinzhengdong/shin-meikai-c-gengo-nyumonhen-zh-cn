/*
	第 2 章总结
*/

#include <stdio.h>

int main(void)
{
	int a; /* 整数变量 a */
	int b; /* 整数变量 b */
	double r; /* 浮点数变量 r */

	printf("整数a和b的值："); /* 提示用户输入两个整数 */
	scanf("%d%d", &a, &b); /* 读取两个整数 */

	printf("a + b = %d\n", a + b);	/* 加：两整数相加（%d 整数格式） */
	printf("a - b = %d\n", a - b);	/* 减：两整数相减 */
	printf("a * b = %d\n", a * b);	/* 乘：两整数相乘 */
	printf("a / b = %d\n", a / b);	/* 商：整数除法 */
	printf("a %% b = %d\n", a % b);	/* 余：取余；格式串里 %% 表示输出一个 % */

	printf("(a+b)/2 = %d\n", (a + b) / 2);	/* 整数平均 */
	printf("平均值  = %f\n\n", (double)(a + b) / 2); /* 浮点平均（%f） */

	printf("半径："); /* 提示用户输入半径（%lf 浮点格式） */
	scanf("%lf", &r); /* 读取浮点数 */

	printf("半径为%.3f，圆的面积为 %.3f。\n", r, 3.14 * r * r); /* 计算圆的面积（%f 浮点格式，小数点后3位）*/

	return 0; /* 返回值为0 */
}
