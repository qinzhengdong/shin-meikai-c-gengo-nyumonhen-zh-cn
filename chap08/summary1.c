/*
	第8章总结（枚举）
*/

#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void)
{
	int color;

	printf("0 到 2 之间的值：");  scanf("%d", &color);

	printf("你");  
	switch (color) {
	 case 0 : printf("赤");  break;
	 case 1 : printf("緑");  break;
	 case 2 : printf("青");  break;
	}
	printf("我选择了它。\n");

	return 0;
}
