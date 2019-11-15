//输出一个二进制数
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int number;
	scanf("%h", &number);
	unsigned mask = 1u << 31;//1是1；U是代表是个无符号数；
	for (; mask; mask >>= 1) {
		printf("%d", number&mask ? 1 : 0);
	}
	printf("\n");
	return 0;
}