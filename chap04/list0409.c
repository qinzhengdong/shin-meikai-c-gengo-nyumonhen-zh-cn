/*
	读取指定个数的整数并显示总值和平均值
*/

#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;			/* 总计値 */
	int num, tmp;

	printf("有多少个整数：");
	scanf("%d", &num);

	while (i < num) {
		printf("No.%d：", ++i);		/* 增加 i 值后的显示 */
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("总计値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);

	return 0;
}
