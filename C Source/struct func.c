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
	printf("%i-%i\n", p.x, p.y);//没有返回值，只是输入了这两个值，并显示，并没有对y进行操作
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
	return temp;//这个有返回值，可以实现
}