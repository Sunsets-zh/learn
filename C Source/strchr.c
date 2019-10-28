#include<stdio.h>
#include<string.h>
int main()
{
	//char*strchr(const char*s, int c);//是用来从左边开始找找字符串中第一个c
	//char*strrchr(const char*s, int c);//是用来从右边开始找找字符串中第一个c
	//返回NULL是没有找到，他们是返回指针的
	char s[] = "hello";//char *s和char s[],前者是表示一个地址，这个地址可以表达一个字符串
	//但是它是只读的，不能对里边进行操作，后者是表达一个空间，里边存放的是数据，可以进行操作
	printf("%s\n",strchr(s, 'l'));//从寻找到的那个字符向后输出
	printf("%s\n", strchr(strchr(s,'l')+1, 'l'));//从那个字符+1位向后输出，其实就
												//可以完成这个寻找第二的操作
	char *p = strchr(s, 'l');
	printf("%s\n", strchr(p + 1, 'l'));//和上边的代码是一样的，字符串其实是用首地址表示，所以
										//用+1表示和指针是一样的
	char *t = (char*)malloc(strlen(p) + 1);
	strcpy(t, p);
	printf("t=%s\n", t);
	char a = *p;
	*p = '\0';
	char*b = (char*)malloc(strlen(s) + 1);
	strcpy(b, s);
	printf("b=%s\n", b);
	*p = a;
	printf("s[]=%s\n", s);
	free(b);
	free(t);
	//char *strstr(const char*s1, const char*s2);
	//是用来在字符串里寻找一个字符串并且返回该字符串之后的所有字符
	//char *strcasestr(const char*s1,const char*s2);
	//忽略大小写的strstr
	return 0;
}