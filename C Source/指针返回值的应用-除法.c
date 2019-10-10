#include<stdio.h>
//return:如果除法成功，返回1，如果除法失败返回0；
int divide(int a, int b, int *result);

int main()
{
	int a ;
	printf("请输入除数a:");
	scanf("%d", &a);
	int b ;
	printf("请输入被除数b:");
	scanf("%d", &b);
	int c;
	if (divide(a, b, &c)) {
		printf("a/b=%.0f", (double)c);
	}
	else {
		printf("false");
	}
	return 0;
}
int divide(int a, int b, int *result)
{
	int ret=1;
	if (b == 0) {
		ret = 0;
	}
	else {
		*result = a / b;
	}
	return ret;
}