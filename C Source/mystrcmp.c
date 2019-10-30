#include<stdio.h>
#include<string.h>
int mycmp(const char *s1,const char *s2)
{
	int idex = 0;//下标
	while (s1[idex]==s2[idex]&&s1[idex]!='\0') {
		//if(s1[idex]!=s2[idex]){
		//	break;
		//}	//如果不相等的时候就离开
		//else if (s1[idex] == '\0') {
		//	break;
		//}//如果相等着，看是不是到了结尾，如果到了结尾就跳出\
		//这么一大段可以简化成一个逻辑判断，如果两个相等且s1[idex]！=‘\0’则一直循环
		idex++;
	}
		int i = s1[idex] - s2[idex];
		if (i > 0) {
			i = 1;
		}
		else if (i < 0) {
			i = -1;
		}
		return i;
}//这个就可以实现strcmp的功能，之前的版本没有这个强制转换1和-1的功能，现在有了
int main(int argc, char const *argv[])
{
	int strcmp(const char *s1, const char *s2);//用来比较两个字符串的大小\
												相等返回0；s1>s2，返回1；s1<s2，返回-1；
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", s1 == s2);//无论是什么字符串输出的结果都是0
	printf("%d\n", strcmp(s1, s2));
	if (strcmp(s1, s2) == 0) {
		printf("相等\n");
	}
	else if (strcmp(s1, s2)>0) {
		printf("s1>s2\n");
	}
	else {
		printf("s1<s2");
	}

	return 0;
}