#include<stdio.h>
struct point {
	int x;
	int y;
};
void getStruct(struct point);
void outStruct(struct point);
struct point getstruct(void);
void main() 
{
	struct point y = { 0,1 };
	struct point z;
	printf("%i-%i\n", y.x, y.y);
	//getStruct(y);
	y = getstruct();
	outStruct(y);
}
void getStruct(struct point p)
{
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%i-%i\n", p.x, p.y);//û�з���ֵ��ֻ��������������ֵ������ʾ����û�ж�y���в���
}
void outStruct(struct point p)
{
	printf("%i-%i\n", p.x, p.y);
}
struct point getstruct(void)
{
	struct point temp;
	scanf("%d", &temp.x);
	scanf("%d", &temp.y);
	printf("%d,%d", temp.x, temp.y);
	return temp;//����з���ֵ������ʵ��
}