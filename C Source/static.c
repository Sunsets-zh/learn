#include<stdio.h>
//#define gall 5
//int gall;//这种全局的方式在于可以对全局的变量进行运算，而define是真正意义上的const\
					无法进行操作，只能引用   没有初始化的全局变量会被自动归0；
//只能用编译时已知的值来初始化全局变量，初始化应该发生在main之前；
int gall = 5;
//int g2 = gall;//这是不行的，因为编译器认为此时gall是变量，它不知道的值
int f(void);
int b(void);
int main(int argc,char const *argv[])
{	
	f();
	f();
	f();
	b();
	b();
	b();
	return 0;
}
int f(void)
{
	int all = 1;
	printf("in %s %d\n", __func__, all);
	all += 2;
	printf("in %s is %d\n", __func__, all);
	return all;
}
int b(void)
{
	static int all = 1;//static相比于普通的本地变量多了一个保持的功能，保持住上次函数产生的值。
	//静态本地变量其实就是全局变量
	int k = 1;
	int i = 1;
	printf("k    = %p\n", &k);
	printf("i    = %p\n", &i);
	printf("all  = %p\n", &all);
	printf("gall = %p\n", &gall);//从结果可以看到all和gall是放在一起的，但是k和i是放在一起的；
	//从这里可以看出来，all和gall其实是一样的，i和k其实是一样的；
	printf("in %s %d\n", __func__, all);
	all += 2;
	printf("in %s is %d\n", __func__, all);
	return all;
}