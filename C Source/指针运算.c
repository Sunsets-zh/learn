#include<stdio.h>
int main()
{
	char ac[] = { 0,1,2,3,4,5,6,7,8,9, };
	char *p = ac;
	char *p1 = &ac[5];
	printf("p=%p\n", p);
	printf("p+1=%p\n", p + 1);
	printf("*p=%d\n", *p);
	printf("*p+1=%d\n", *(p + 1));
	printf("p1-p=%d\n", p1 - p);
	//两个指针相减，减出来的值是地址差值/sizeof（变量），是两个指针之间有几个变量
	int ai[] = { 0,1,2,3,4,5,6,7,8,9, };
	int *q = ai;
	printf("q=%p\n", q);
	printf("q+1=%p\n", q + 1);//对指针+1的动作其实是移位sizeof（变量）
	//如果指针不是指向一个连续的空间，诸如数组之类的，那么指针的运算就毫无意义；
	//*（p+n）<-->ac[n];
	printf("*q=%d", *q);
	printf("*q+1=%d\n", *(q + 1));
	return 0;

}