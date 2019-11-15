#include<stdio.h>
//位段
void prtBin(unsigned int number);

struct U0 {
	unsigned int leading : 3;//这个占3个比特
	unsigned int FLAG1 : 1;
	unsigned int FLAG2 : 1;
	int trailing : 32;
};//这是一个位段，

int main(int argc,char const *argv[])
{
	struct U0 uu;
	uu.leading = 2;
	uu.FLAG1 = 0;
	uu.FLAG2 = 1;
	uu.trailing = 0;
	printf("sizeof(uu)=%lu\n", sizeof(uu));
	prtBin(*(int*)&uu);
	return 0;
}

void prtBin(unsigned int number)
{
	unsigned int mask = 1u << 31;
	for (; mask; mask >>= 1) {
		printf("%d", number&mask ? 1 : 0);
	}
	printf("\n");
}//位段不具有可移植性，当所需要的位超过一个int时，会采用多个int