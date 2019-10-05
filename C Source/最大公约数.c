#include<stdio.h>
int main()
{	
	int a, b; 
	start:
	printf("请输入a和b：\n"); 
	scanf("%d%d",&a,&b);
	int min=0,gcb;
//	if(a>b){
//		min=b;
//	} 
//	else{
//		min=a;
//	}
	for(int i=1;i<a&&i<b;i++){
		if(a%i==0){
			if(b%i==0){
				gcb=i;
			}
		} 
	}
	printf("最大公约数是：%d\n",gcb);
	goto start;
	return 0;
}
