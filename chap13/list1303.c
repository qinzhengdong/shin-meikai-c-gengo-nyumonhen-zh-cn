/*
	将程序执行的日期和时间导出到文件
*/

#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 各元素的时间（当地时间）*/

	if ((fp = fopen("dt_dat", "w")) == NULL)				/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		printf("我完成拍照之前的日期和时间。\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,		   timer->tm_min,	  timer->tm_sec  );
		fclose(fp);											/* 关闭 */
	}

	return 0;
}
