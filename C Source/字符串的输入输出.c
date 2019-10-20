#include<stdio.h>
int main()
{
	char *t = "title";
	char *s;
	s = t;//没有产生新的字符串，因为s并不是字符串，只是一个指针，让这个指针s指向t，所以对\
		  s操作就是对t,这就是字符串的赋值
	char string[8];
	scanf("%s", string);
//这是字符串的输入输出，用是scanf读入一个单词，直到出现space enter tab为止
	char string1[8];
	scanf("%s", string1);
//	printf("%s##\n", string);
	printf("%s##%s##\n", string,string1);//%s是读入单词，是一个广义的单词，但是是不安全的，\
										 因为不知道它的长度，安全的做法是scanf（”%7s“，）\
										表示scanf只能读7个，后边的空格就不生效了，是读数呢
	char *s;
	scanf("%s", s);//这是错误的，因为这个时候只是定义了一个指针，他还没指向具体的地址，操作错误\
						他仍指向原来的值，可能会出错，指针一定要初始化
	char buffer[100] = "";//这是一个空字符串，buffer[0]='\0'
	char buffer[] = "";//这个字符串的长度是1，只有一个\0


	return 0;
}