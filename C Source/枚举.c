#include<stdio.h>
#include<string.h>
//枚举在C中主要是用来定义符号量，而不是当作一种类型来使用
enum color {red,blue,green};
enum COLOR { RED, BLUE, YELLOW, NUMCOLORS };
enum pen { red = 1, green, blue = 5 };//这样red=1green=2，blue=5；
void f(enum color c);
int main(void)
{
	//1.常量符号化，因为数字很难知道背后的意思，但是如果将其符号化eg.number=10，就很容易明白
	//eg. const red=0;
	//const blue=1;现在我们有更方便方法来处理这个问题
	//枚举：enum COLOR{red,blue}；这里red就是0blue就是1；
	enum color t = red;
	scanf("%d", &t);
	f(t);
	//自动计数的枚举
	enum COLOR {RED,BLUE,YELLOW,NUMCOLORS};
	int color = -1;
	char *Colornames[NUMCOLORS] = { "RED","BLUE","YELLOW" };
	char *colorname = NULL;
	printf("输入你喜欢的颜色代码：");
	scanf("%d", &color);
	if (color >= 0 && color < NUMCOLORS) {
		colorname = Colornames[color];
	}//这样需要遍历所有的枚举量时或者建立一个用枚举量做下标的数组就很方便了 
	else
	{
		colorname = "unkown";
	}
	printf("你喜欢的颜色是：%s\n", colorname);
	//声明枚举量时可以自己定义
	enum pen{ red = 1,green,blue = 5 };//这样red=1green=2，blue=5；

	return 0;
}
void f(enum color c)
{
	printf("%d\n", c);
}