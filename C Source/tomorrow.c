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
	if (today.day != numberofDays(today)) {//�������ÿ���µ����һ��
		tomorrow.day = today.day + 1;//day+1
		tomorrow.month = today.month;//�²���
		tomorrow.year = today.year;//�겻��
	}
	else if (today.month == 12) {//�����12��
		tomorrow.day = 1;//�����1.1
		tomorrow.month = 1;
		tomorrow.year = today.year+1;
	}
	else {//����ǲ���12�µ������·ݵ����һ��
		tomorrow.day = 1;//�·�+1.1
		tomorrow.month = today.month+1;
		tomorrow.year = today.year;
	}
	printf("Tomorrow's date is %i-%i-%i", tomorrow.year, tomorrow.month, tomorrow.day);
	return 0;
}
int numberofDays(struct date d)//�������ÿ���µ����һ��
{
	int days;
	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (d.month == 2 && isLeap(d)) {//�����2���������� 
		days = 29;
	}
	else {
		days = daysPerMonth[d.month - 1];
	}
	return days;
}
bool isLeap(struct date d)//�ж��Ƿ�������
{
	bool leap = false;
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		leap = true;
	}
	return leap;
}