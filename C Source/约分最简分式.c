//Լ������ʽ    ������Լ�� Ȼ����ӷ�ĸ����� 
#include<stdio.h>
int main(){
	int a,b,t,fenzi,fenmu;
	scanf("%d/%d",&fenzi,&fenmu);//��Ϊ������/���Լ���ʱ�������fenzi/fenmu 
	a=fenzi;
	b=fenmu;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
	} 
//	printf("%d %d %d\n",a,b,t); 
	printf("%d/%d\n",fenzi/a,fenmu/a);
	return 0;
} 
