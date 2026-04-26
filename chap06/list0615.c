/*
	逐次探索（号兵法：for文）
*/

#include <stdio.h>

#define NUMBER		5		/* 要素数 */
#define FAILED		-1		/* 探索失敗 */

/*--- 从数组 v 中搜索与元素匹配的元素（保护方法）---*/
int search(int v[], int key, int n)
{
	int i;

	v[n] = key;		/* 存放守卫 */

	for (i = 0; v[i] != key; i++)
		;
	return (i < n) ? i : FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]：", i);
		scanf("%d", &vx[i]);
	}
	printf("寻找的价值：");
	scanf("%d", &ky);

	if ((idx = search(vx, ky, NUMBER)) == FAILED)
		puts("\a 搜索失败。");
	else
		printf("%d 这是 %d 问题。\n", ky, idx + 1);

	return 0;
}
