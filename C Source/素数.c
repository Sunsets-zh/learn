#include<stdio.h>
int main()
{
	int count=0;
	for(int x=1;x<=100;x++)
	{
		int isprime=1;
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			count++;
			printf("%d\t",x);
		}
		if(count%5==0)
		{
			printf("\n");
		}
	}
	
	return 0;
} 
