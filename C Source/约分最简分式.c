//约分最简分式    求出最大公约数 然后分子分母除这个 
#include<stdio.h>
int main(){
	int a,b,t,fenzi,fenmu;
	scanf("%d/%d",&fenzi,&fenmu);//因为这里有/所以键入时必须键入fenzi/fenmu 
	a=fenzi;
	b=fenmu;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
	} 
//	printf("%d %d %d\n",a,b,t); 
	printf("%d/%d\n",fenzi/a,fenmu/a);
	return 0;
} 
