#include<stdio.h>
int main()
{
//	int x;
//	x=13425;
//	int mask=10000;
//	do
//	{
//		int d=x/mask;
//		printf("%d",d);
//		if(x>9)
//		{
//			printf(" ");
//		}
//		x%=mask;        ����Ϊ��70000/10000=7
//						70000%10000=0,���0����x������ѭ������ֱ�Ӵ��� 
//		mask/=10;
//		printf("x=%d,mask=%d,d=%d\n",x,mask,d);
//	}while(x>0);
//	printf("\n");
//	return 0;
	int x;
	int mask=1;
	x=70000;
	int t=x;
//	int count=0;
//	while(t>0)
//	{
//		t/=10;
//		count++;
//	}
//	printf("count=%d\n",count);
//	mask=pow(10,count-1);      ������һ����������,�����±����� 



//	do
//	{
//		t/=10;
//		mask*=10;
//	}while(t>9);           do...while ��while���ж�����һ������������ѭ�� 
//							һ���Ĵ����� ,���������do...while��������ִ��һ��
//							�����е�X=1ʱ,������������ִ��,��Ϊ����������,Ӧ�����ж� 
	while(t>9)
	{
		t/=10;
		mask*=10;
	} 
//	printf("mask=%d\n",mask);
	do
	{
		int d=x/mask;
		printf("%d",d);
		if(mask>9)
		{
			printf(" ");
		}
		x%=mask;
		mask/=10;
//		printf("x=%d,mask=%d,d=%d\n",x,mask,d);
	}while(mask>0);
	printf("\n");
	return 0;
}
