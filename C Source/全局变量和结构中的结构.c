struct Weather {
	char *AorP;//��Ϊ�±������%s�����ַ������ַ����Ĵ��ڷ�ʽ���ַ�ָ���������
	char *Weather;//���Ҫ��char c����߱������%c
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
#define N 5//ȫ�ֱ��������������������ȫ�֣�������main�����Լ�����ĺ����ﶼ����ʹ��
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
	for (int i = 0; i < 2; i++) {//�����ﶨ���ر���int i������������for
		print(r[i]);
	}
	return 0;
}