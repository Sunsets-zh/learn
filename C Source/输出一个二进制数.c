//���һ����������
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int number;
	scanf("%h", &number);
	unsigned mask = 1u << 31;//1��1��U�Ǵ����Ǹ��޷�������
	for (; mask; mask >>= 1) {
		printf("%d", number&mask ? 1 : 0);
	}
	printf("\n");
	return 0;
}