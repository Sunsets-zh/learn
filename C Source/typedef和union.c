//type int Length;����Length���Դ���int
//typedef struct {
//	int month;
//	int day;
//	int year;
//}Date; ����Date�����м�����ṹ�壬����ÿ�ζ�Ҫ��Struct date�Ľ��
//typedef *char[10] Strings;Strings��10���ַ�������������ͣ�
//typedef struct node {
//	int data;
//	struct node *next;
//}aNode;
//����
//typedef struct node aNode;��aNode������struct node
#include<stdio.h>
typedef union {
	int i;
	char ch[sizeof(int)];
}CHI;
int main()
{
	CHI chi;
	int i;
	chi.i = 1234;
	for (i = 0; i < sizeof(int); i++) {
		printf("%02hhX", chi.ch[i]);
	}
	printf("\n");
	return;//ͨ��ʹ��union�õ�һ������int  double �ȵ��ڲ��ֽ�
	//���ļ���������һ�������Զ����ƻ�����������д���ļ���ʱ��union������Ϊһ��ý��
}