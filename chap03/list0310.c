/*
	如果取一个整数，可以通过修正数来判断，如果能判断出来就是偶数，那么就是奇数。
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */		

	if (no > 0) /* 如果 no 为正数 */
		if (no % 2 == 0) /* 如果 no 为偶数 */
			puts("这个数字是偶数。");
		else /* 如果 no 为奇数 */
			puts("这个数字是奇数。");
	else /* 如果 no 为负数 */
		puts("这个数字是负数。 \a\n");

	return 0; /* 返回值为0 */
}
