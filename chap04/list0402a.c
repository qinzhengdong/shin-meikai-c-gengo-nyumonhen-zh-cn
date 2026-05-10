/*用户选择石头剪刀布，程序显示对应的手势*/

#include <stdio.h>

int main(void)
{
	int hand;	/* 手 */

	do {
		printf("请选择石头剪刀布[0...石头/1...剪刀/2...布]：");
		scanf("%d", &hand);
	} while (!(hand >= 0 && hand <= 2));

	printf("你选择了");
	switch (hand) {
	 case 0: printf("石头");	break;
	 case 1: printf("剪刀");	break;
	 case 2: printf("布");	break;
	}
	printf("。\n");

	return 0;
}
