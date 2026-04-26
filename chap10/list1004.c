/*
	通过指针间接操纵高度
*/

#include <stdio.h>

/*--- Hiroko（身高从不足180厘米增加到180厘米）---*/
void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato   = 178;		/* 佐藤宏的身高 */
	int sanaka = 175;		/* 真中敏也身高 */
	int masaki = 179;		/* 正木弘高身高 */

	hiroko(&masaki);

	printf("佐藤的身高：%d\n", sato);
	printf("萨那卡的身高：%d\n", sanaka);
	printf("正树的身高：%d\n", masaki);

	return 0;
}
