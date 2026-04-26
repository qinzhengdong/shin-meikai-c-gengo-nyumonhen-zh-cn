/*
	呈现石头剪刀布基整数运动（多次接触0、1、2）【不同解解法】
*/

#include <stdio.h>

int main(void)
{
	int hand;	/* 手 */

	do {
		printf("请选择一个动作 [0...Goo/1...Scotch/2...Par]：");
		scanf("%d", &hand);
	} while (!(hand >= 0 && hand <= 2));

	printf("你");
	switch (hand) {
	 case 0: printf("粘性物");	break;
	 case 1: printf("长木");	break;
	 case 2: printf("标杆");	break;
	}
	printf("我选择了它。\n");

	return 0;
}
