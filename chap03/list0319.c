/*
	显示读取的整数值除以 3 的余数（switch 语句）
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数："); /* 提示用户输入一个整数 */
	scanf("%d", &no); /* 读取整数 */

	switch (no % 3) { /* 根据 no 除以 3 的余数执行不同的操作 */
	 case 0 : puts("能被3整除。");		break;	
	 case 1 : puts("除以3的余数是1。");	break; /* 如果 no 除以 3 的余数为1 */
	 case 2 : puts("除以3的余数是2。");	break; /* 如果 no 除以 3 的余数为2 */
	}

	return 0; /* 返回值为0 */
}
