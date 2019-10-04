#include<stdio.h>
int main ()
{
	int n;
	double fenzi,fenmu;
	double sum=0.0;
	int i;
	double t;
	scanf("%d",&n);//决定分母上限；
	fenzi=2;
	fenmu=1;
	for(i=1;i<=n;i++){
		sum+=fenzi/fenmu;
		t=fenzi;
		fenzi=fenzi+fenmu;	//程序运行只能是小数字   因为这儿有个累加，如果到达2000就已经无效 
		fenmu=t;
	} 
	printf("%.2f\n",sum);
	return 0; 
}
