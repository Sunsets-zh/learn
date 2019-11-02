#include<stdio.h>
#include<stdbool.h>
struct date {
	int day;
	int month;
	int year;
};
bool isLeap(struct date d);
int numberofDays(struct date d);
int main()
{
	struct date today, tomorrow;
	printf("enter today's date(yyyy-mm-dd):");
	scanf("%i-%i-%i",  &today.year, &today.month, &today.day);
	if (today.day != numberofDays(today)) {//如果不是每个月的最后一天
		tomorrow.day = today.day + 1;//day+1
		tomorrow.month = today.month;//月不变
		tomorrow.year = today.year;//年不变
	}
	else if (today.month == 12) {//如果是12月
		tomorrow.day = 1;//次年的1.1
		tomorrow.month = 1;
		tomorrow.year = today.year+1;
	}
	else {//如果是不是12月的其他月份的最后一天
		tomorrow.day = 1;//月份+1.1
		tomorrow.month = today.month+1;
		tomorrow.year = today.year;
	}
	printf("Tomorrow's date is %i-%i-%i", tomorrow.year, tomorrow.month, tomorrow.day);
	return 0;
}
int numberofDays(struct date d)//用来输出每个月的最后一天
{
	int days;
	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (d.month == 2 && isLeap(d)) {//如果是2月且是闰年 
		days = 29;
	}
	else {
		days = daysPerMonth[d.month - 1];
	}
	return days;
}
bool isLeap(struct date d)//判断是否是闰年
{
	bool leap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		leap = true;
	}
	return leap;
}