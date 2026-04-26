/*
	查找数组中的元素数量
*/

#include <stdio.h>

int main(void)
{
	int    vi[10];
	double vd[25];

	printf("数组 vi 中的元素数量 = %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("数组 vd 的元素数量 = %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	return 0;
}
