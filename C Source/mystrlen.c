#include<stdio.h>
#include<string.h>
int mylen(const char *s)
{
	int i = 0;
	while (s[i]!='\0') {
		i++;
	}
	return i;
}//����Ϳ���ʵ��size_t strlen�����Ĺ������������ַ����ĳ���
int main(int argc,char const *argv[])
{
	size_t strlen(const char *s);
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));//��ΪHelloֻ�����
	printf("sizeof=%lu\n", sizeof(line));//��ΪHELLO\0��������6��
	printf("mylen=%lu\n", mylen(line));
	return 0;
}