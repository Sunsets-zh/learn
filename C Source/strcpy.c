#include<stdio.h>
int mystrlen(char *s)
{
	int i=0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}
char* mycpy(char * s1,const char * s2)
{
	int idx = 0;
	/*while (s2[idx]!='\0') {
		s1[idx] = s2[idx];
		idx++;
	}
	s1[idx] = '\0'
		return s1;*/
	char*ret = s1;
	while (*s2 != '\0') {
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return ret;//�������ʹ��&s[0]��Ϊs++�Ѿ��ı��˵�ַ����������Խ��
}
int main()
{
//	char *strcat(char *restrict s1, const char *restrict s2);//��s2���Ƶ�s1�ĺ��Ȼ�󷵻�s1��
	//char *strcpy(char *restrict dst, const char *restrict src);//��src���ַ���������dst\
					 ��restrict��ʾ���ص����������dst��src���ص�����ʱ���ú�������ʹ��
	char *src = "Hello";
	char *dst = (char *)malloc(strlen(src) + 1);
	//char *s1 = "hello";
	printf("%s\n", mycpy(dst, src));
	//printf("%d\n", strlen(s1));
	return 0;
}