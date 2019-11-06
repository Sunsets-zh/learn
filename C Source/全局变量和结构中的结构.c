struct Weather {
	char *AorP;//因为下边输出的%s且是字符串，字符串的存在方式是字符指针或者数组
	char *Weather;//如果要用char c；后边必须输出%c
};
struct Date {
	int year;
	int month;
	int day;
};
typedef struct inf {
	struct Date p1;
	struct Weather p2;
}INF;
#include<stdio.h>
#define N 5//全局变量的作用域和生存期是全局，无论是main还是自己定义的函数里都可以使用
void print(INF r)
{
	printf("<%d-%d-%d> to <%s, %s>\n", r.p1.year, r.p1.month, r.p1.day, r.p2.AorP,r.p2.Weather);
}
int main()
{
	INF r[] = {
		{{2019,N,6},{"A","rain"}},
	{{2018,6,N},{"P","sun"}}
	};
	for (int i = 0; i < 2; i++) {//像这里定义额本地变量int i；仅仅能用于for
		print(r[i]);
	}
	return 0;
}