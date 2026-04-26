/*
	翔五名大弟子姓氏、身躯，排列高低。
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* 学生人数 */
#define NAME_LEN	64		/* 名称中的字符数 */

/*--- 交换x和y指向的整数值---*/
void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*--- 交换 sx 和 sy 指向的字符串 ---*/
void swap_str(char *sx, char *sy)
{
	char temp[NAME_LEN];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

/*--- 根据num升序对数组num和str的前n个元素进行排序---*/
void sort(int num[], char str[][NAME_LEN], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (num[j - 1] > num[j]) {
				swap_int(&num[j - 1], &num[j]);
				swap_str( str[j - 1],  str[j]);
			}
		}
	}
}

int main(void)
{
	int  i;
	int  height[] =         {178,    175,      173,     165,    179};
	char name[][NAME_LEN] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};

	for (i = 0; i < NUMBER; i++)
		printf("%2d：%-8s%4d\n", i + 1, name[i], height[i]);

	sort(height, name, NUMBER);		/* 按身高升序对身高和姓名进行排序 */

	puts("\n 职位高。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d：%-8s%4d\n", i + 1, name[i], height[i]);

	return 0;
}
