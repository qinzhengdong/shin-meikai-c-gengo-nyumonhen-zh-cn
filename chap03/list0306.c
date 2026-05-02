/*
	读取的两个整数值是否相等？
*/

#include <stdio.h> /* 包含标准输入输出函数 */

int main(void) /* 主函数 */
{
	int n1, n2; /* 整数变量 n1 和 n2 */

	puts("输入两个整数。"); /* 提示用户输入两个整数 */		
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2); /* 读取整数 */

	if (n1 == n2) /* 如果 n1 和 n2 相等 */
		puts("其他人的看法也一致。");
	else
		puts("你如何看待别人并没有什么区别。");

	return 0;
}
