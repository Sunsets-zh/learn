#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t;
//	三位数是从100-999
	for(t=pow(10,n-1);t<pow(10,n);t++){
		int d=t;
		int p;
		int sum=0; 
		do{
			int m=d%10;
			d/=10;
			p=pow(m,n);
			sum+=p;
		}while(d>0);
		if(sum==t){
			printf("%d\n",t);
		}
	} 
	return 0;
} 
