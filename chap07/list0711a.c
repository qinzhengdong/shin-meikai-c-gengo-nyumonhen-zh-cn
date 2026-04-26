/*
	以 0.01 为单位从 0.0 重复到 1.0 [已修订]
*/

#include <stdio.h>

int main(void)
{
	float x;

	for (x = 0.0; x != 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;
}
