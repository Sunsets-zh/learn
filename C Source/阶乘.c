#include<stdio.h>
int main()
{
	int i=1,fac=1,n;
	scanf("%d",&n); 
	while(i<=n)
	{
		fac*=i;
		i++;
	}
	printf("%d�Ľ׳���%d\n",n,fac); 
	return 0;
}
