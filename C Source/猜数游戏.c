#include <stdio.h>

int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0,a=0;
	printf("我已经想好了一个1到100的数\n");
	do
	{
		printf("请输入一个数：");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
			printf("你输入的数太大了，请重新输入"); 
		} 
		else if(a<number)
		{
			printf("你输入的数太小了，请重新输入"); 
		} 
		/*else这一步可以不用写，因为如果不满足上边两个条件仅剩（a=number）这步可以放在循环
				条件检查处，如果相等，跳出循环 
		{
			printf("你用%d次就猜到了答案",count);
			break;
		} */ 
	} while(a!=number);
	printf("你用%d次就猜到了答案",count);
	
	
	return 0;
} 