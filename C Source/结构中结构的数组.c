#include<stdio.h>
//�ṹ�нṹ������
struct point {
	int x;
	int y;
};
struct rectangle {
	struct point p1;
	struct point p2;
};
void printrect(struct rectangle r)
{
	printf("<%d, %d> to <%d, %d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}
int main()
{
	int i;
	struct rectangle r[] = { 
		{{1,2},{3,4}},//r[0]��p1��p2
		{{5,6},{7,8}}//r[1]��p1��p2
	};
	for (i = 0; i < 2; i++) {
		printrect(r[i]);
	}
	return 0;
}