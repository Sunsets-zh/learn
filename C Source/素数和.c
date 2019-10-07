#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("[%d,%d]",m,n);
	if(m==1)
		m=2;//1 bushi sushu
	int cnt=0,sum=0;
	for(int i=m;i<=n;i++){//定义从m到n 
		int isprime=0;//再确定i是素数之前让素数寄存为0 
		for(int j=2;j<i;j++){
			if(i%j==0){
				break;//如果从2-i中有一个被整除，跳出，进行i+1 
			}
			else{
			 	isprime=i; //判定是素数，将素数放入素数寄存 
			}
		}
		if(isprime){
			cnt++;//如果是素数，素数计数+1 
			sum+=isprime;//和自加 
		}
	}
	printf("%d,%d\n",cnt,sum);
	return 0;
}

