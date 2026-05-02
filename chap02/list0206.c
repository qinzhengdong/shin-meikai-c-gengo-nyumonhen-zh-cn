/*
	整数和浮点数
*/

#include <stdio.h>

int main(void)	/* 主函数 */
{
	int n;			/* 整数 */
	double x;		/* 小数变量 x */

	n = 9.99;	/* 将 9.99 赋值给整数变量 n */
	x = 9.99;	/* 将 9.99 赋值给小数变量 x */

	printf("int类型变量n的值：%d\n", n);			 /*  n 的值=9 */
	printf("             n / 2 ：%d\n", n / 2);		/*  n 除以 2 的商=4 */

	printf("double类型变量x的值：%f\n", x);			/*  x 的值=9.99 */  %f 是浮点数格式化输出
	printf("             x /2.0：%f\n", x / 2.0);	/*  x 除以 2.0 的商=4.995 */

	return 0; /* 返回值为0 */
} /* 主函数结束 */
