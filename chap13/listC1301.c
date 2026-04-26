/*
	显示当前日期和时间
*/

#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);				/* 当前日历时间 */
	struct tm *timer = localtime(&current);		/* 各元素的时间（当地时间）*/
	char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};

	printf("当天的当前周期 PH_0__ 年 %d 月 %d 天空 (%s) %d 小小时 %d 分钟 %d 秒。\n",
			timer->tm_year + 1900,			/* 年份（加1900即可查找）*/
			timer->tm_mon + 1,				/* 月（加1计算）*/
			timer->tm_mday,					/* 日 */
			wday_name[timer->tm_wday],		/* 曜日（0～6）*/
			timer->tm_hour,					/* 時 */
			timer->tm_min,					/* 分 */
			timer->tm_sec					/* 秒 */
		  );
	return 0;
}
