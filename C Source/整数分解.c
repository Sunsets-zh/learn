#include<stdio.h>
int main()
{
//	int x;
//	x=13425;
//	int mask=10000;
//	do
//	{
//		int d=x/mask;
//		printf("%d",d);
//		if(x>9)
//		{
//			printf(" ");
//		}
//		x%=mask;        是因为像70000/10000=7
//						70000%10000=0,这个0就是x，所以循环条件直接错误 
//		mask/=10;
//		printf("x=%d,mask=%d,d=%d\n",x,mask,d);
//	}while(x>0);
//	printf("\n");
//	return 0;
	int x;
	int mask=1;
	x=70000;
	int t=x;
//	int count=0;
//	while(t>0)
//	{
//		t/=10;
//		count++;
//	}
//	printf("count=%d\n",count);
//	mask=pow(10,count-1);      多引入一个计数变量,不如下边两种 



//	do
//	{
//		t/=10;
//		mask*=10;
//	}while(t>9);           do...while 和while再判定条件一样的情形下是循环 
//							一样的次数的 ,区别仅在于do...while多无条件执行一次
//							像本例中的X=1时,它不能无条件执行,因为不满足条件,应当先判定 
	while(t>9)
	{
		t/=10;
		mask*=10;
	} 
//	printf("mask=%d\n",mask);
	do
	{
		int d=x/mask;
		printf("%d",d);
		if(mask>9)
		{
			printf(" ");
		}
		x%=mask;
		mask/=10;
//		printf("x=%d,mask=%d,d=%d\n",x,mask,d);
	}while(mask>0);
	printf("\n");
	return 0;
}
