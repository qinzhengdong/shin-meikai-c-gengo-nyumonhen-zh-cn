/*
	第 3 章摘要（第 2 部分）根据值显示颜色
*/

#include <stdio.h>

int main(void)
{
	int sw;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */	
	scanf("%d", &sw);

	if (sw >= 1 && sw <= 3) {
		switch (sw) {
		 case 1: printf("红色");  break;
		 case 2: printf("绿色");  break;
		 case 3: printf("蓝色");  break;
		}
		printf("我选择了它。\n");
	}

	return 0;
}
