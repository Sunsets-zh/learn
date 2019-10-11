#include<stdio.h>
int main()
{
	int i=5;
	/*int *const q = &i;
	printf("*q=%d\n", *q);
	*q = 25;
	printf("*q=%d\n", *q);*/
	//q++;因为int *const q相当于锁死了q的地址，可以操作地址里的数据，但是不能操作q；


	//=======================================================================================
	//	=====================================================================================


	//const int *m = &i;
	//*m = 25;因为const int*m相当于锁死了地址里的数，这种情况下可以操作地址，但是不能操作空间里的内容；
	//m++;
	//printf("*m=%d\n", *m);
	//printf("m=%p\n", p);

	int const *n = &i;
	//*n = 25;int const *n相当于const int *n，都是锁死了地址里的内容；
	*n++;

	return 0;
	/*eg.void （const int*q）
			int a=15;
			f(&a);
			const int b=a;
			void保证在函数内部不会修改q地址里放的值，并非必须传入一个const值，像&a，并不是一个const值
			但传入函数后，const 数据不会被修改
			f(&b);这是可以的，b是一个const
			b=a+1;		这是不可以的，因为b是一个const值*/

}