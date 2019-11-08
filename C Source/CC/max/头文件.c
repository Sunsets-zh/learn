#include<stdio.h>//这个并不是引入C的库，而是里边只放着那个printf的声明
//一般而言任何.c都应该有对应的同名.h文件，把所有对外公开的h函数原型和q全局变量声明都放进去
//函数前加上static就是只能在这个编译单元中使用的本地函数
#include"max.h"
//它会把它包含的所有东西全部放到这里来，以文本的形式
//int max(int a, int b);
//extern int gall;
//struct node {
//	int value;
//	char*x;
//};
#include"main.h"
//这个里边又是#include"max.h"
//int max(int a, int b);
//extern int gall;
//struct node {
//	int value;
//	char*x;
//};
//这样在这里这个struct node就重复定义了，就会出错，所以要加入标准头文件

int main()
{ 
	int a = 5, b = 6;
	printf("%d\n", max(gall, b));
	return 0;
}
