/*
	以 0.01 为单位重复从 0.0 到 1.0（由整数控制）
*/

#include <stdio.h>

int main(void)
{
	int i;
	float x;

	for (i = 0; i <= 100; i++) {
		x = i / 100.0;
		printf("x = %f\n", x);
	}

	return 0;
}
