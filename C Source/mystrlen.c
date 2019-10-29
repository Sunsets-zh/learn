#include<stdio.h>
#include<string.h>
int mylen(const char *s)
{
	int i = 0;
	while (s[i]!='\0') {
		i++;
	}
	return i;
}//这个就可以实现size_t strlen函数的功能用来计算字符串的长度
int main(int argc,char const *argv[])
{
	size_t strlen(const char *s);
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));//因为Hello只有五个
	printf("sizeof=%lu\n", sizeof(line));//因为HELLO\0，所以有6个
	printf("mylen=%lu\n", mylen(line));
	return 0;
}