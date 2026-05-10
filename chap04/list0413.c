/*
	读取指定个数的整数并显示总值和平均值
*/

#include <stdio.h>

int main(void)
{
	int i = 0; /* 整数变量 i */
	int sum = 0;			/* 总计値 */
	int num, tmp; /* 整数变量 num 和 tmp */

	printf("有多少个整数："); /* 提示用户输入整数个数 */
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("No.%d：", i + 1); /* 提示用户输入第 i 个整数 */
		scanf("%d", &tmp); /* 读取用户输入的整数 */
		sum += tmp; /* 将 tmp 加到 sum 中 */
	}

	printf("总计値：%d\n", sum); /* 显示总计 */
	printf("平均値：%.2f\n", (double)sum / num); /* 显示平均值 */

	return 0; /* 返回值为0 */
}
