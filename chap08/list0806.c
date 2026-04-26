/*
	显示选定的动物声音
*/

#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

/*---狗叫了---*/
void dog(void)
{
	puts("汪汪！！");
}

/*--- 猫喵喵叫 ---*/
void cat(void)
{
	puts("喵！！");
}

/*--- 猴子哭了 ---*/
void monkey(void)
{
	puts("琪琪！！");
}

/*--- 选择一种动物 ---*/
enum animal select(void)
{
	int tmp;

	do {
		printf("0…犬　1…猫　2…猿　3…終了：");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;

	do {
		switch (selected = select()) {
		 case Dog	 : dog();	 break;
		 case Cat	 : cat();	 break;
		 case Monkey : monkey(); break;
		}
	} while (selected != Invalid);

	return 0;
}