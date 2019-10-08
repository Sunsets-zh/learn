#include<stdio.h>
int main()
{
	int one,two,five;
	int x;
	x=2;
	for(one=1;one<x*10;one++)
	{
		for(two=1;two<x*10/2;two++)
		{
			for(five=1;five<x*10/5;five++)
			{
				if(one+two*2+five*5==x*10)
				{
					printf("%d个1毛和%d个2毛和%d个5毛可以组合成%d元\n",one,two,five,x);
				} 
			}
		}
	}
	return 0; 
}
