#include<stdio.h>
void minmax(int a[], int len, int *min, int *max);
int main(void)
{
	int a[] = { 1,2,3,4,5,14,23,55,32,77,88,86, };
	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("main a=%p\n", a);
	printf("len=%d,min=%d,max=%d", sizeof(a) / sizeof(a[0]), min, max);
	int b[] = a;//���Ǵ���Ĳ��ܽ�a����ֱ�Ӹ���b����
	//��һ��ʵ�����ǣ�int b[]-->int *const b,const��ֻ�����ܸı�ģ�
	int *q = a;//����ǿ��Ե���Ϊ*q��һ��ָ���������a�ĵ�ַ��q��
	return 0;
}
void minmax(int a[], int len, int *min, int *max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n", sizeof(a));
	printf("minmax a=%p\n", a);
	*min = *max = a[0];
	for (i = 0; i < len; i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}
}