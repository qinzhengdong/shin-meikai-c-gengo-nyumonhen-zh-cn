/*
	按身高升序对 5 名学生进行排序
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* 学生人数 */
#define NAME_LEN	64		/* 名称中的字符数 */

/*===代表学生的结构===*/
typedef struct {
	char  name[NAME_LEN];	/* 名前 */
	int   height;			/* 身長 */
	float weight;			/* 体重 */
	long  schols;			/* 奨学金 */
} Student;

/*--- 交换 x 和 y 指向的学生 ---*/
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

/*--- 按高度升序对学生数组 a 的前 n 个元素进行排序 ---*/
void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	int i;
	Student std[] = {
		{ "Sato",   178, 61.2, 80000},	/* 佐藤宏史君 */
		{ "Sanaka", 175, 62.5, 73000},	/* 佐中俊哉君 */
		{ "Takao",  173, 86.2, 0},		/* 高尾健司君 */
		{ "Mike",   165, 72.3, 70000},	/* 平木Mike君 */
		{ "Masaki", 179, 77.5, 70000},	/* 真崎宏孝君 */
	};

	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	sort_by_height(std, NUMBER);	/* 按身高升序排列 */

	puts("\n 职位高。");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	return 0;
}
