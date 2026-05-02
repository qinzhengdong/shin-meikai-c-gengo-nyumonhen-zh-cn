/*
	读取的两个整数值是否相等？ ​​（第二部分）
*/

#include <stdio.h> /* 包含标准输入输出函数 */

int main(void) /* 主函数 */	
{
	int n1, n2; /* 整数变量 n1 和 n2 */

	puts("输入两个整数。"); /* 提示用户输入两个整数 */
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	if (n1 != n2) /* 如果 n1 和 n2 不相等 */
		puts("两个整数不相等。");
	else
		puts("两个整数相等。");

	return 0; /* 返回值为0 */
}
