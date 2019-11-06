#include<stdio.h>
//#define gall 5
//int gall;//这种全局的方式在于可以对全局的变量进行运算，而define是真正意义上的const\
					无法进行操作，只能引用   没有初始化的全局变量会被自动归0；
//只能用编译时已知的值来初始化全局变量，初始化应该发生在main之前；
int gall = 5;
//int g2 = gall;//这是不行的，因为编译器认为此时gall是变量，它不知道的值
int f(void);
int main(int argc,char const *argv[])
{	
	printf("in %s gall= %d\n", __func__, gall);
	f();
	printf("out in %s gall= %d\n", __func__, gall);
	return 0;
}
int f(void)
{
	int gall = 1;//当有同名的本地变量时，全局变量会被隐藏，会以本地变量为准；同样在更下一级中的变\
	量会隐藏掉高一级的同名变量
	printf("in %s %d\n", __func__, gall);
	gall += 2;
	printf("in f() end %s is %d\n", __func__, gall);
	return gall;
}