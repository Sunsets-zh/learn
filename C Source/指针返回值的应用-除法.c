#include<stdio.h>
//return:��������ɹ�������1���������ʧ�ܷ���0��
int divide(int a, int b, int *result);

int main()
{
	int a ;
	printf("���������a:");
	scanf("%d", &a);
	int b ;
	printf("�����뱻����b:");
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