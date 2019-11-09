#include<stdio.h>
int main(int argc, char const *argv[])
{
	//%[flags][width][.prec][hiL]type
	//flags(-,+, ,0)+width(9)
	printf("%9d-fla\n", 123);//9是输出的字符要占据9个字符位
	printf("%+9d-fla\n", 123);//+是输出的字符前边要有加号
	printf("%-9d-fla\n", 123);//-是要求左对齐
	printf("%-+9d-fla\n", 123);//组合使用，是左对齐的同时要求输出加号
	printf("%09d-fla\n", 123);//0的意思是前边空位全部用0填充
	//width或者prec
	//width(number,*,.number,.*)
	printf("%9.2f-wid\n", 123.0);//这个9.2并不是说小数点前边有9位，而是包含小数点及其后一共有九位，\
							 其中小数点后显示两位
	printf("%*d-wid\n",6, 123);//其实6是用来满足*的相当于%6d\n
	//hil，类型修饰符
	//hil(hh,h,l,ll,L)
	printf("%hhd-hil\n", 12345);//hh要求输出一个单字节的char ；这里会输出57；原因是12345 \
								16进制下最后两位是39，取这两位换到10进制下就是57
	//h-short；l-long；ll-long long；L-long double
	//type(i&d-int;u-unsigned int;o-8;x-16;X-char 16;f-float,F-6float;e&E-exp;g&G-float;a&A-x,float\
	c-char,s-char*,p-point,n-r,num||w,num);
	int num;
	//printf("%d%n-type\n",12345, &num);//会出错，编译可以通过但是没法运行，显示不被允许的
	//printf("%d-type\n", num);
	//scanf%[flag]type
	//flag(*-跳过；num-最大字符数；hh;h;l;ll;L)
	scanf("%*d%d", &num);
	printf("%d-scanf\n", num);//%*d%d,z中间的这个*是跳过读取的第一个数字
	//type[...]
	//i是强制转换为整数；
	//￥GPRMC,004319.00,,a,
	//scanf("%*[^,],%[^,],%[^,]")//指要从开始到逗号出现为止的字符全部需要输入；
	//printf scanf的返回值
	int i;
	int i1 = scanf("%d", &i);
	int i2 = printf("%d\n", i);
	printf("%d:%d\n", i1, i2);//i1=读入几个数据，i2就等于你输出几个字符+enter的那一位
	return 0;
}