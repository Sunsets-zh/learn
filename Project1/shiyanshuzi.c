#include<stdio.h>
int main()
{
	/*unsigned char c = 0;
	int i = 255;
	c = c - 1;
	printf("c=%d,i=%d\n", c, i);
	*/


	int a = 0, b = 0;
	while (++a > 0);
		printf("int���������ǣ�%d\n", a - 1);
		b++;
	while ((a = a / 10) != 0)
	{
		b++;
	}
	printf("int��������λ����%d\n", b);
	return 0;
}