/*用户选择石头剪刀布，程序显示对应的手势*/

#include <stdio.h>

int main(void)
{
	int hand;	/* 手（0...剪刀/1...石头/2...布） */

	do {
		printf("请选择出什么拳[0...剪刀/1...石头/2...布]：");
		scanf("%d", &hand); /* 读取整数 */
	} while (hand < 0 || hand > 2); /* 如果 hand 不在 0 到 2 之间 */

	printf("你选择了");
	switch (hand) { /* 根据 hand 执行不同的操作 */
	 case 0: printf("剪刀");	break;
	 case 1: printf("石头");	break;
	 case 2: printf("布");	break;
	}

	return 0; /* 返回值为0 */
}
