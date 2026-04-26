/*
	显示EOF值和数字字符值
*/

#include <stdio.h>

int main(void)
{
	int i;

	printf("EOF ＝ %d\n", EOF);

	for (i = 0; i < 10; i++)
		printf("'%d' ＝ %d\n", i, '0' + i);

	return 0;
}
