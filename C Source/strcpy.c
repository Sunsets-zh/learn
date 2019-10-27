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
	return ret;//如果这里使用&s[0]因为s++已经改变了地址，所以它会越界
}
int main()
{
//	char *strcat(char *restrict s1, const char *restrict s2);//把s2复制到s1的后边然后返回s1；
	//char *strcpy(char *restrict dst, const char *restrict src);//把src的字符串拷贝到dst\
					 ，restrict表示不重叠，就是如果dst和src有重叠部分时，该函数不能使用
	char *src = "Hello";
	char *dst = (char *)malloc(strlen(src) + 1);
	//char *s1 = "hello";
	printf("%s\n", mycpy(dst, src));
	//printf("%d\n", strlen(s1));
	return 0;
}