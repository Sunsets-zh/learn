#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	do
	{
		int t=x%10;
		x/=10;
		printf("%d",t);
	}while(x>0);
	return 0;
} 
