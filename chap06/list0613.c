/*
	線形探索（逐次探索）
*/

#include <stdio.h>

#define NUMBER		5		/* 要素数 */
#define FAILED		-1		/* 探索失敗 */

/*--- 从数组 v 中搜索与 key 匹配的元素及其元素个数 ---*/
int search(const int v[], int key, int n)
{
	int i = 0;

	while (1) {
		if (i == n)
			return FAILED;		/* 探索失敗 */
		if (v[i] == key)
			return i;			/* 探索成功 */
		i++;
	}
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]：", i);
		scanf("%d", &vx[i]);
	}
	printf("寻找的价值：");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);	/* 从元素数量为 NUMBER 的数组 vx 中搜索 ky */

	if (idx == FAILED)
		puts("\a 搜索失败。");
	else
		printf("%d 这是 %d 问题。\n", ky, idx + 1);

	return 0;
}
