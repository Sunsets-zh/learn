#ifndef _MAX_H_//如果在这个编译单元里没有定义过max.h
#define _MAX_H_//那么定义它，如果定义了，就不定义了，因为预编译时，只会编译一个编译单元
int max(int a, int b);
extern int gall;//这就是变量的声明，说明在项目的某处，存在一个全局变量gall
//声明是不产生代码的
//头文件里只可以放声明，同时，在同一个编译单元里，同名的结构不能被重复声明
struct node {
	int value;
	char*x;
};
#endif