#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *a;
	int i;
	printf("����������");
	scanf("%d", &n);
	//int a[n];C99��ֱ�ӿ�������ʹ��

	int *a = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf("&d", &a[i]);
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}
	return 0;
}