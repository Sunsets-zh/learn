#include<stdio.h>
//#define gall 5
//int gall;//����ȫ�ֵķ�ʽ���ڿ��Զ�ȫ�ֵı����������㣬��define�����������ϵ�const\
					�޷����в�����ֻ������   û�г�ʼ����ȫ�ֱ����ᱻ�Զ���0��
//ֻ���ñ���ʱ��֪��ֵ����ʼ��ȫ�ֱ�������ʼ��Ӧ�÷�����main֮ǰ��
int gall = 5;
//int g2 = gall;//���ǲ��еģ���Ϊ��������Ϊ��ʱgall�Ǳ���������֪����ֵ
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
	static int all = 1;//static�������ͨ�ı��ر�������һ�����ֵĹ��ܣ�����ס�ϴκ���������ֵ��
	//��̬���ر�����ʵ����ȫ�ֱ���
	int k = 1;
	int i = 1;
	printf("k    = %p\n", &k);
	printf("i    = %p\n", &i);
	printf("all  = %p\n", &all);
	printf("gall = %p\n", &gall);//�ӽ�����Կ���all��gall�Ƿ���һ��ģ�����k��i�Ƿ���һ��ģ�
	//��������Կ�������all��gall��ʵ��һ���ģ�i��k��ʵ��һ���ģ�
	printf("in %s %d\n", __func__, all);
	all += 2;
	printf("in %s is %d\n", __func__, all);
	return all;
}