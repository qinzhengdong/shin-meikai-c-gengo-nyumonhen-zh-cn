/*
	读取指定个数的整数并显示总值和平均值，备注：原代码会报错，调整后兼容性更强
*/

#include <stdio.h> 		/* 包含标准输入输出库 */

static void clear_line(void)	/* 清除输入缓冲区中的多余字符 */
{
	int c; /* 字符变量 c */
	while ((c = getchar()) != '\n' && c != EOF) /* 读取字符，直到遇到换行符或EOF */
		;
}

int main(void) /* 主函数 */
{
	int i; 
	int sum = 0; /* 总计 */
	int num, tmp; /* 整数变量 num 和 tmp */

	for (;;) { /* 无限循环 */
		printf("要输入多少个整数："); /* 提示用户输入整数个数 */
		if (scanf("%d", &num) != 1) { /* 读取整数，如果读取失败，清除输入缓冲区 */
			clear_line();
			puts("请输入正整数（个数）。"); /* 提示用户输入正整数（个数） */
			continue; /* 继续循环 */
		}
		clear_line(); /* 清除输入缓冲区 */
		if (num <= 0) { /* 如果 num 小于等于 0 */	
			puts("个数必须为正整数，请重新输入。"); /* 提示用户输入正整数（个数） */
			continue; /* 继续循环 */
		}
		break;	/* 退出循环 */
	}

	for (i = 1; i <= num; i++) { /* 循环读取整数 */
		for (;;) { /* 无限循环 */
			printf("No.%d：", i); /* 提示用户输入第 i 个整数 */
			if (scanf("%d", &tmp) != 1) { /* 读取整数，如果读取失败，清除输入缓冲区 */
				clear_line(); /* 清除输入缓冲区 */
				puts("请输入整数。"); /* 提示用户输入整数 */
				continue; /* 继续循环 */
			}
			clear_line(); /* 清除输入缓冲区 */
			break; /* 退出循环 */
		}
		sum += tmp; /* 将 tmp 加到 sum 中 */
	}

	printf("总计：%d\n", sum); /* 显示总计 */
	printf("平均：%.2f\n", (double)sum / num); /* 显示平均值 */

	return 0; /* 返回值为0 */
}
