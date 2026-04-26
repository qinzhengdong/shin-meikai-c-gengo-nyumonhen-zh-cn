/*
	通过指针间接操纵高度
*/

#include <stdio.h>

int main(void)
{
	int sato   = 178;	/* 佐藤宏的身高 */
	int sanaka = 175;	/* 真中敏也身高 */
	int masaki = 179;	/* 正木弘高身高 */

	int *isako, *hiroko;

	isako  = &sato;			/* isako 指的是 sato（我喜欢 sato）*/
	hiroko = &masaki;		/* hiroko 指的是 masaki（我喜欢 Masaki）*/

	printf("Isako 最喜欢的人的身高：%d\n", *isako);
	printf("弘子最喜欢的人的身高：%d\n", *hiroko);

	isako = &sanaka;		/* isako 指的是 sanaka（我改变主意了）*/

	*hiroko = 180;			/* 将 180 赋值给 hiroko 指向的对象 */
							/* 改写弘子最爱的人的身高 */

	putchar('\n');
	printf("佐藤的身高：%d\n", sato);
	printf("萨那卡的身高：%d\n", sanaka);
	printf("正树的身高：%d\n", masaki);
	printf("Isako 最喜欢的人的身高：%d\n", *isako);
	printf("弘子最喜欢的人的身高：%d\n", *hiroko);

	return 0;
}
