/*
	按位逻辑运算
*/

#include <stdio.h>

/*--- 返回整数 x 中设置的位数 ---*/
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

/*--- 返回无符号类型的位数 ---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*--- 显示无符号类型的位内容 ---*/
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned a, b;

	printf("不可转移的整数。\n");
	printf("a : ");   scanf("%u", &a);
	printf("b : ");   scanf("%u", &b);

	printf("\na     = ");   print_bits(a);
	printf("\nb     = ");   print_bits(b);
	printf("\na & b = ");   print_bits(a & b);		/* a 和 b 的逻辑积 */
	printf("\na | b = ");   print_bits(a | b);		/* a 和 b 的逻辑和 */
	printf("\na ^ b = ");   print_bits(a ^ b);		/* a 和 b 的异或 */
	printf("\n~a    = ");   print_bits(~a);			/* 一个人的补语 */
	printf("\n~b    = ");   print_bits(~b);			/* b 的 1 的补码 */
	putchar('\n');

	return 0;
}
