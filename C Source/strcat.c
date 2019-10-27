#include<stdio.h>
#include<string.h>
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
	return ret;
}
char*mycat(char*s1, const char*s2) 
{
	int i = 0;
	int idx = 0;
	char*b = (char*)malloc(strlen(s1) + strlen(s2) + 1);
	while (s1[idx] != '\0') {
		b[idx] = s1[idx];
		idx++;
	}
	while (s2[i]!='\0') {
		b[mystrlen(s1)+i] = s2[i];
		i++;
	}
	b[mystrlen(s1) + i] = '\0';
	return b;
}
int main()
{
//	char *strcat(char *restrict s1, const char *restrict s2);//把s2复制到s1的后边然后返回s1；
	char *src = "World";
	char *dst = "Hello ";
	
	printf("%s\n", mycat(dst,src));
	return 0;
}