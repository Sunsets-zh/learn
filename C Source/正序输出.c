#include<stdio.h>
int main()
{
	int t=0;
	int x;
	scanf("%d",&x);
	do
	{
		int m=x%10;
		t=t*10+m;
		x/=10;
	} while(x>0);
	do
	{
		int n=t%10;
		t/=10;
		printf("%d",n);
	}while(t>0);
	return 0;
	/*这种先逆序再逆序的方法仅仅适用于后边没有0的数字*/ 
	 
}

