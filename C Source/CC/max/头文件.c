#include<stdio.h>//�������������C�Ŀ⣬�������ֻ�����Ǹ�printf������
//һ������κ�.c��Ӧ���ж�Ӧ��ͬ��.h�ļ��������ж��⹫����h����ԭ�ͺ�qȫ�ֱ����������Ž�ȥ
//����ǰ����static����ֻ����������뵥Ԫ��ʹ�õı��غ���
#include"max.h"
//����������������ж���ȫ���ŵ������������ı�����ʽ
//int max(int a, int b);
//extern int gall;
//struct node {
//	int value;
//	char*x;
//};
#include"main.h"
//����������#include"max.h"
//int max(int a, int b);
//extern int gall;
//struct node {
//	int value;
//	char*x;
//};
//�������������struct node���ظ������ˣ��ͻ��������Ҫ�����׼ͷ�ļ�

int main()
{ 
	int a = 5, b = 6;
	printf("%d\n", max(gall, b));
	return 0;
}
