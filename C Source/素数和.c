#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("[%d,%d]",m,n);
	if(m==1)
		m=2;//1 bushi sushu
	int cnt=0,sum=0;
	for(int i=m;i<=n;i++){//�����m��n 
		int isprime=0;//��ȷ��i������֮ǰ�������Ĵ�Ϊ0 
		for(int j=2;j<i;j++){
			if(i%j==0){
				break;//�����2-i����һ��������������������i+1 
			}
			else{
			 	isprime=i; //�ж������������������������Ĵ� 
			}
		}
		if(isprime){
			cnt++;//�������������������+1 
			sum+=isprime;//���Լ� 
		}
	}
	printf("%d,%d\n",cnt,sum);
	return 0;
}

