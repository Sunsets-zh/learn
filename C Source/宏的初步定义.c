#include<stdio.h>
const double PI = 3.14159;//c99������
#define PI 3.14159//����Ǻ꣬Ԥ����ʱ����д����궨�壻 
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f\n",PI);\
			printf("%f\n",PI2)
#define DEBUG//û��ֵ�ú꣬����������������ģ����������������֧��û���������һ����֧��
int main(int argc, char const *grgv[])
{
	//printf(FORMAT, 2 * PI*3.0);
	PRT;
	printf("%s:%d\n", __FILE__, __LINE__);
	printf("%s,%s\n", __DATE__, __TIME__);//�⼸����Ԥ��ĺ꣬�ǳ����ã�
	return 0;
}
