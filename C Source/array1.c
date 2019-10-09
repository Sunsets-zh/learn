#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int number[100];
	scanf("%d", &x);
	while (x != 0) 
	{
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	if (cnt > 0)
	{
		printf("%f\n", sum / cnt);
		int i;
		for (i = 0; i < cnt; i++)
		{
			if (number[i] > sum / cnt)
			{
				int j=0;
				printf("%d ", number[i]);
				j++;
				if (j > 5)
				{
					printf("\n");
				}
			}
		}
	}
	return 0;
 }