#include<stdio.h>
int main ()
{
	int n;
	double fenzi,fenmu;
	double sum=0.0;
	int i;
	double t;
	scanf("%d",&n);//������ĸ���ޣ�
	fenzi=2;
	fenmu=1;
	for(i=1;i<=n;i++){
		sum+=fenzi/fenmu;
		t=fenzi;
		fenzi=fenzi+fenmu;	//��������ֻ����С����   ��Ϊ����и��ۼӣ��������2000���Ѿ���Ч 
		fenmu=t;
	} 
	printf("%.2f\n",sum);
	return 0; 
}
