#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *a;//定义一个指针变量，它是一个地址，可以把它当作一个数组来用，因为数组名也是地址
	int i;
	printf("输入数量：");
	scanf("%d", &n);
	//int a[n];C99里直接可以这样使用

	int *a = (int *)malloc(n * sizeof(int));//取动态分配地址，用sizeof但是要强制类型从int→int（*）
	for (i = 0; i < n; i++) {
		scanf("&d", &a[i]);//读入a数组的值
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}//逆序输出
	free(a);//分配了动态内存，用完要释放掉
	return 0;
}