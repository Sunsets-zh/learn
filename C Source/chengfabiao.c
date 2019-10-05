#include<stdio.h>
int main()
{
	int n,i=1,j=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			int q=i*j;
			if(q<10){
				printf("%d*%d=%d   ",j,i,q);	
			}
			else{
				printf("%d*%d=%d  ",j,i,q);
			}
			if(i==j){
				printf("\n");
			}			
		} 
	}
	return 0;
} 
