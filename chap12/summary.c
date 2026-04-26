/*
	代表日期的结构和代表人的结构
*/

#include <stdio.h>

#define NAME_LEN	128		/* 名称中的字符数 */

/*===显示日期结构===*/
struct Date {
	int y;		/* 年 */
	int m;		/* 月 */
	int d;		/* 日 */
};

/*===代表人类的结构===*/
typedef struct {
	char name[NAME_LEN];	/* 氏名 */
	struct Date birthday;	/* 誕生日 */
} Human;

/*--- 显示指针h所指向的人的姓名和生日---*/
void print_Human(const Human *h)
{
	printf("%s（出生于 %04d 年 %02d 月 %02d） \n",
				h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
	int i;
	struct Date today;		/* 今天的日期 */

	Human member[] = {
		{"古賀政男", {1904, 11, 18}},
		{"柴田望洋", {1963, 11, 18}},
		{"岡田准一", {1980, 11, 18}},
	};

	printf("现在是进口截止日期。\n");
	printf("年：");   scanf("%d", &today.y);
	printf("月：");   scanf("%d", &today.m);
	printf("日：");   scanf("%d", &today.d);

	printf("今天是 %d 月 %d %d 天。\n", today.y, today.m, today.d);

	printf("--- 会員一覧表 ---\n");
	for (i = 0; i < sizeof(member) / sizeof(member[0]); i++)
		print_Human(&member[i]);

	return 0;
}
