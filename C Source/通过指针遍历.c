#include<stdio.h>
//����
int main()
{
	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1};
	char *p = ac;
	//�ɵı�����ʽ
	int i;
	for (i = 0; i < sizeof(ac)/sizeof(ac[0]); i++) {
		printf("ac[%d]=%d\n",i, ac[i]);
	}
	//�µģ�ͨ��ָ����������ı�����ʽ
	//for (p = ac; *p != -1; p++) {
		//printf("%d\n", *p);
	//}
	/*
	//for (p = ac;*p != -1; ){
		printf("%d\n",*p++);	
	}
	�������κ�13-15��Ч����һģһ����
	*/
	while(*p != -1){//��û�е���������������£���һ�����ⲿ��ʾ������ʹ��while
		printf("%d\n", *p++);
	}
	int ai[] = { 1,2,3,4,5,6,7,8,9,0, };
	int *q = ai;
	q = p;
	return 0;

}