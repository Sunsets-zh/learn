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
//���ϱߵ����struct������±ߵ������һ���ģ�ֻ�����±ߵİѱ�������Ҳ�ŵ����������
//�����Ҫһ��ȫ�ֱ������������±����֣��ֲ��������ϱ�����
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
	struct date *pdate = &today;//����������ǵ�ַ�����ǽṹ�����ֲ����ǵ�ַ
	struct date today1 = { 12,02,2019 };
	struct date thismonth = { .month = 11,.year = 2019 };
	//�����ָ�ֵ��ʽ���ǿ��Եģ�һ����һ��һ����ֵ��һ�����ô�����һ���Ը�ֵ����ȻҲ����ָ�����ĸ�
	printf("Today date is %i-%i-%i.\n", today.year, today.month, today.day);
	printf("Today date is %i-%i-%i.\n", today1.year, today1.month, today1.day);
	printf("This month is %i-%i-%i.\n", thismonth.year, thismonth.month, thismonth.day);
	printf("address of today is %p\n", pdate);
	p1 = (struct point) { 5, 10 };//��������ֵ��ǿ��ת��ΪSTR��P1
	p2 = p1;//�����ǲ������������µģ�a[]=b[]
	p2.y = 6;
	printf("%d-%d\n", p1.x, p1.y);
	printf("%d-%d\n", p2.x, p2.y);
	return 0;
}