#include<stdio.h>
void minmax(int a[], int len, int *min, int *max);
int main(void)
{
	int a[] = {1,2,3,4,5,14,23,55,32,77,88,86,};
	int min, max;
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("len=%d,min=%d,max=%d", sizeof(a)/sizeof(a[0]),min, max);
	return 0;
}
void minmax(int a[],int len,int *min,int *max)
{
	int i;
	*min = *max = a[0];
	for (i = 0; i < len; i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i]>*max){
			*max = a[i];
		}
	}
}