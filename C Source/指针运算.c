#include<stdio.h>
int main()
{
	char ac[] = { 0,1,2,3,4,5,6,7,8,9, };
	char *p = ac;
	char *p1 = &ac[5];
	printf("p=%p\n", p);
	printf("p+1=%p\n", p + 1);
	printf("*p=%d\n", *p);
	printf("*p+1=%d\n", *(p + 1));
	printf("p1-p=%d\n", p1 - p);
	//����ָ���������������ֵ�ǵ�ַ��ֵ/sizeof����������������ָ��֮���м�������
	int ai[] = { 0,1,2,3,4,5,6,7,8,9, };
	int *q = ai;
	printf("q=%p\n", q);
	printf("q+1=%p\n", q + 1);//��ָ��+1�Ķ�����ʵ����λsizeof��������
	//���ָ�벻��ָ��һ�������Ŀռ䣬��������֮��ģ���ôָ�������ͺ������壻
	//*��p+n��<-->ac[n];
	printf("*q=%d", *q);
	printf("*q+1=%d\n", *(q + 1));
	return 0;

}