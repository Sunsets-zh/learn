//可以定义带参数的宏
//宏一切参数都要有括号
//宏没分号，宏不是C语言语句//
//宏有两个运算符：#和##
//inline可以取代部分宏
#include<stdio.h>
#define cube(x) ((x)*(x)*(x))
int main()
{
	int i;
	printf("%d\n", cube(i+2));
	return 0;
}