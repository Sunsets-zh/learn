struct Weather {
	char *AorP;
	char *Weather;
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