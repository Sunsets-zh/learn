#include<stdio.h>
struct point {
	int x;
	int y;
};
//struct point *m = &mypoint;
//(*m).x = 12;
//p->x = 12;//���г�����ϱ�һ���ǵ�ͬ��
struct point* getStruct(struct point*);//getStruct�õ�һ���ṹָ�룬������������󷵻�һ���ṹָ��
void output(struct point);//������������ǽṹ��
void print(const struct point *p);//������������ǽṹ��ָ��
int main()
{
	struct point y = { 0,0 };
	output(y);
	getStruct(&y);//����ֵ��ָ��ֵ����ַ��
	output(y);
	output(*getStruct(&y));//Ҫ����������һ��getStruct����Ҫ��������
	print(getStruct(&y));
}
struct point* getStruct(struct point *p)//����ṹ���ַ������ָ��
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	printf("%d,%d-get\n", p->x, p->y);
	return p;
}
void output(struct point p)
{
	printf("%d,%d-output\n", p.x, p.y);
}
void print(const struct point *p)
{
	printf("%d,%d-print\n", p->x, p->y);

}