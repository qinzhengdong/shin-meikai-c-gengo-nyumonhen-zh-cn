/*
	第 3 章摘要（第 2 部分）根据值显示颜色
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("请输入一个整数：");
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("赤");  break;
		 case 2: printf("青");  break;
		 case 3: printf("白");  break;
		}
		printf("正确的。\n");
	}

	return 0;
}
