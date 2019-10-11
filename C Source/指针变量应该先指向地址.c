#include<stdio.h>
void f(int *p);
void g(int k);
int main()
{
	int i = 6;
	int *p;
	int k = 12;
//	*p = 12;这是错误操作，因为p还没有指向任何地址；
	printf("&i=%p\n", &i);
	f(&i);
	g(k);
	return 0;
}
void f(int *p)
{
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);
	*p = 26;
}
void g(int k)
{
	printf("k=%d\n", k);
}