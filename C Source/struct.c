#include<stdio.h>
struct date {
	int month;
	int day;
	int year;
};
struct point {
	int x;
	int y;
};
//struct point p1,p2;
//这上边的这个struct定义和下边的这个是一样的，只不过下边的把变量定义也放到声明这儿了
//如果需要一个全局变量，可以用下边这种，局部变量用上边这种
struct {
	int a;
	int b;
}p3,p4;
int main(int argc, char const *argv[])
{

	struct point p1, p2;
	struct date today;
	today.day = 02;
	today.month = 11;
	today.year = 2019;
	struct date *pdate = &today;//数组的名字是地址，但是结构的名字并不是地址
	struct date today1 = { 12,02,2019 };
	struct date thismonth = { .month = 11,.year = 2019 };
	//这三种赋值方式都是可以的，一种是一个一个赋值，一种是用大括号一次性赋值，当然也可以指明给哪个
	printf("Today date is %i-%i-%i.\n", today.year, today.month, today.day);
	printf("Today date is %i-%i-%i.\n", today1.year, today1.month, today1.day);
	printf("This month is %i-%i-%i.\n", thismonth.year, thismonth.month, thismonth.day);
	printf("address of today is %p\n", pdate);
	p1 = (struct point) { 5, 10 };//把这两个值，强制转换为STR给P1
	p2 = p1;//数组是不能做这样的事的，a[]=b[]
	p2.y = 6;
	printf("%d-%d\n", p1.x, p1.y);
	printf("%d-%d\n", p2.x, p2.y);
	return 0;
}