#include<stdio.h>
const double PI = 3.14159;//c99的做法
#define PI 3.14159//这就是宏，预处理时会进行处理，宏定义； 
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f\n",PI);\
			printf("%f\n",PI2)
#define DEBUG//没有值得宏，是用来做条件编译的，如果有这个做这个分支，没有这个做另一个分支；
int main(int argc, char const *grgv[])
{
	//printf(FORMAT, 2 * PI*3.0);
	PRT;
	printf("%s:%d\n", __FILE__, __LINE__);
	printf("%s,%s\n", __DATE__, __TIME__);//这几个是预设的宏，非常好用；
	return 0;
}
