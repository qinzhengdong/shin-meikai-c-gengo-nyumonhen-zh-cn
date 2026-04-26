/*
	以 0.01 增量从 0.0 重复到 1.0
*/

#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.0; x <= 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;
}
