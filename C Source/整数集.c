#include<stdio.h>
int main()
{
	int a,i,j,k,count=0;
	scanf("%d",&a);
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<a+4;k++){
				if(i!=j&&i!=k&&j!=k){
					count++; 
					printf("%d%d%d",i,j,k);
					if(count%6==0){
						printf("\n");
					} 
					else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}
