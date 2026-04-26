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

	for (i = 0; i < num; i++) {
		printf("No.%d：", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("总计値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);

	return 0;
}
