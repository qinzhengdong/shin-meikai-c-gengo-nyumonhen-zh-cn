/*
	一遍又一遍地添加浮点数
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	float value;		/* 値 */
	float sum = 0.0f;	/* 总计 */

	puts("一次又一次相加的浮点数。");
	printf("値：");     scanf("%f", &value);
	printf("回数：");   scanf("%d", &no);

	for (i = 0; i < no; i++)
		sum += value;
	printf("加法结果为 %f。\n", sum);

	return 0;
}
