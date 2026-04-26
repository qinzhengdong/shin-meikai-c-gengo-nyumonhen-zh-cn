/*
	检查标识符的范围
*/

#include <stdio.h>

int x = 75;						/* A：文件有效范围 */

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int i;
	int x = 999;				/* B：阻挡有效范围 */

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++) {
		int x = i * 100;		/* C：格挡有效范围 */
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}
