#include<stdio.h>
//#define gall 5
//int gall;//����ȫ�ֵķ�ʽ���ڿ��Զ�ȫ�ֵı����������㣬��define�����������ϵ�const\
					�޷����в�����ֻ������   û�г�ʼ����ȫ�ֱ����ᱻ�Զ���0��
//ֻ���ñ���ʱ��֪��ֵ����ʼ��ȫ�ֱ�������ʼ��Ӧ�÷�����main֮ǰ��
int gall = 5;
//int g2 = gall;//���ǲ��еģ���Ϊ��������Ϊ��ʱgall�Ǳ���������֪����ֵ
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
	int gall = 1;//����ͬ���ı��ر���ʱ��ȫ�ֱ����ᱻ���أ����Ա��ر���Ϊ׼��ͬ���ڸ���һ���еı�\
	�������ص���һ����ͬ������
	printf("in %s %d\n", __func__, gall);
	gall += 2;
	printf("in f() end %s is %d\n", __func__, gall);
	return gall;
}