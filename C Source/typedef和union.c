//type int Length;就是Length可以代替int
//typedef struct {
//	int month;
//	int day;
//	int year;
//}Date; 就是Date就是中间这个结构体，简化了每次都要数Struct date的结果
//typedef *char[10] Strings;Strings是10个字符串的数组的类型；
//typedef struct node {
//	int data;
//	struct node *next;
//}aNode;
//或者
//typedef struct node aNode;用aNode代替了struct node
#include<stdio.h>
typedef union {
	int i;
	char ch[sizeof(int)];
}CHI;
int main()
{
	CHI chi;
	int i;
	chi.i = 1234;
	for (i = 0; i < sizeof(int); i++) {
		printf("%02hhX", chi.ch[i]);
	}
	printf("\n");
	return;//通过使用union得到一个变量int  double 等的内部字节
	//做文件操作，把一个整数以二进制或者其他进制写到文件里时，union可以作为一个媒介
}