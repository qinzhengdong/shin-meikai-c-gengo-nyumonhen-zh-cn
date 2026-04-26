/*
	显示左移和右移的无符号类型的值
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
	unsigned x, n;

	printf("非负整数：");          scanf("%u", &x);
	printf("要移位的位数：");  scanf("%u", &n);

	printf("\n整数     = ");   print_bits(x);
	printf("\n左移 =");   print_bits(x << n);
	printf("\n右移=");   print_bits(x >> n);
	putchar('\n');

	return 0;
}
