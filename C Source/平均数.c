#include<stdio.h>
int main()
{
	int number=0,count=0,sum=0;
/* 
	do 
	{
		scanf("%d",&number);
		if(number!=-1)		//(第一次判断number不等于-1)
		{
			sum+=number;
			count++;
		}
	}while(number!=-1);	//	（第二次判断number不等于-1） 产生了一些资源浪费 
*/ 						/*但是这个逻辑更容易 
						想到，从if开始到结束，最后按照需求给加一个循环 */ 

	scanf("%d",&number);
	while(number!=-1)
	{
		sum+=number;
		count++;
		scanf("%d",&number);
	}  
	printf("平均数为%f\n",1.0*sum/count); 
} 
