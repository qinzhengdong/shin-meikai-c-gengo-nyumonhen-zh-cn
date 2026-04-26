/*
	显示上次程序运行的日期和时间
*/

#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";				/* 文件名 */

/*--- 获取并显示之前的日期和时间 ---*/
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				/* 打开 */
		printf("这是我的第一步。\n");
	else {
		int year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("上时%d年%d月%d天%d短时%d分%d秒。\n",
										year, month, day, h, m, s);
		fclose(fp);											/* 关闭 */
	}
}

/*--- 写入当前日期和时间 ---*/
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 各元素的时间（当地时间）*/

	if ((fp = fopen(data_file, "w")) == NULL)				/* 打开 */
		printf("非法打开 \a 文本项。\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,		   timer->tm_min,	  timer->tm_sec);
		fclose(fp);											/* 关闭 */
	}
}

int main(void)
{
	get_data();			/* 获取并显示之前的日期和时间 */

	put_data();			/* 写入当前日期和时间 */

	return 0;
}
