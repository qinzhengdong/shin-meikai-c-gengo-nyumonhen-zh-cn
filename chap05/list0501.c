/*
	读取5名学生的成绩并显示总分和平均分
*/

#include <stdio.h>

int main(void)
{
	int uchida;			/* 内田的成绩 */
	int satoh;			/* 佐藤的成绩 */
	int sanaka;			/* 萨那卡的成绩 */
	int hiraki;			/* 平木的成绩 */
	int masaki;			/* 正崎的评分 */
	int sum = 0;		/* 总分 */

	printf("参加人数为5人。\n");
	printf(" 1号：");	scanf("%d", &uchida);	sum += uchida;
	printf(" 2号：");	scanf("%d", &satoh);	sum += satoh;
	printf(" 3号：");	scanf("%d", &sanaka);	sum += sanaka;
	printf(" 4号：");	scanf("%d", &hiraki);	sum += hiraki;
	printf(" 5号：");	scanf("%d", &masaki);	sum += masaki;

	printf("总分：%5d\n", sum);
	printf("平均分：%5.1f\n", (double)sum / 5);

	return 0;
}
