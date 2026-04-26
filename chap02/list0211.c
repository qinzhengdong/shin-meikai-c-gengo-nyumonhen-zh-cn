/*
	读取三个整数值并显示总和及平均值
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;				/* 总计値 */
	double ave;				/* 平均値 */

	puts("输入 3 个整数。");
	printf("整数a：");   scanf("%d", &a);
	printf("整数b：");   scanf("%d", &b);
	printf("整数c：");   scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;		/* 投掷 */

	printf("其他人数为 %5d。\n",   sum);		/* 以99999格式输出 */
	printf("另一个人的平均值是 %5.1f。\n", ave);		/* 以 999.9 格式输出 */

	return 0;
}
