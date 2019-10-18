#include<stdio.h>
int main()
{
	int i,sign=1,n;
	double sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=sign*1.0/i;
		sign=-sign;
	}
	printf("%f",sum);
	return 0;
}
