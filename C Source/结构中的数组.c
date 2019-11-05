#include<stdio.h>
//struct date dates[100];
//struct date dates[] = { {4,5,2005},{5,4,2005} };这是普通的结构
//struct DateAndTime{
//	struct date sdates;
//	struct time stimes;
//};//这个就不是普通的结构了这是结构体的嵌套，结构体中的结构体；
struct time {
	int hour;
	int minutes;
	int seconds;
};
struct time timeUpdate(struct time now);
int main()
{
	struct time Times[] = { {11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27} };
	int i;
	for (i = 0; i < 5; i++) {
		printf("Timenow is %.2i:%.2i:%.2i\n", Times[i].hour, Times[i].minutes, Times[i].seconds);
		Times[i] = timeUpdate(Times[i]);
		printf("one seconds later it's %.2i:%.2i:%.2i\n", 
			Times[i].hour, Times[i].minutes, Times[i].seconds);
	}
	return 0;
}
struct time timeUpdate(struct time now)
{
	now.seconds = now.seconds + 1;
	if (now.seconds == 60) {
		now.seconds = 0;
		now.minutes++;
		if (now.minutes == 60) {
			now.minutes = 0;
			now.hour++;
			if (now.hour == 24) {
				now.hour = 0;
			}
		}
	}
	return now;
}