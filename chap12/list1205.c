/*
	具有超自然能力的 Hiroko（向结构引入 typedef 名称）
*/

#include <stdio.h>

#define NAME_LEN	64		/* 名称中的字符数 */

/*===代表学生的结构===*/
typedef struct student {
	char  name[NAME_LEN];	/* 名前 */
	int   height;			/* 身長 */
	float weight;			/* 体重 */
	long  schols;			/* 奨学金 */
} Student;

/*---将std指示的学生身高增加至180cm，体重减少至80kg ---*/
void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight >  80) std->weight =  80;
}

int main(void)
{
	Student sanaka = {"Sanaka", 175, 62.5, 73000};

	hiroko(&sanaka);

	printf("氏　名 ＝ %s\n",   sanaka.name);
	printf("身　長 ＝ %d\n",   sanaka.height);
	printf("体　重 ＝ %.1f\n", sanaka.weight);
	printf("奨学金 ＝ %ld\n",  sanaka.schols);

	return 0;
}
