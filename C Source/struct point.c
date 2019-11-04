#include<stdio.h>
struct point {
	int x;
	int y;
};
//struct point *m = &mypoint;
//(*m).x = 12;
//p->x = 12;//这行程序和上边一行是等同的
struct point* getStruct(struct point*);//getStruct得到一个结构指针，经过函数运算后返回一个结构指针
void output(struct point);//这个函数变量是结构体
void print(const struct point *p);//这个函数变量是结构体指针
int main()
{
	struct point y = { 0,0 };
	output(y);
	getStruct(&y);//传的值是指针值（地址）
	output(y);
	output(*getStruct(&y));//要再重新运行一遍getStruct所以要重新输入
	print(getStruct(&y));
}
struct point* getStruct(struct point *p)//传入结构体地址，返回指针
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