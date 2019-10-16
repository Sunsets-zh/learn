#include<stdio.h>
//遍历
int main()
{
	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1};
	char *p = ac;
	//旧的遍历方式
	int i;
	for (i = 0; i < sizeof(ac)/sizeof(ac[0]); i++) {
		printf("ac[%d]=%d\n",i, ac[i]);
	}
	//新的，通过指针运算操作的遍历方式
	//for (p = ac; *p != -1; p++) {
		//printf("%d\n", *p);
	//}
	/*
	//for (p = ac;*p != -1; ){
		printf("%d\n",*p++);	
	}
	这个代码段和13-15行效果是一模一样的
	*/
	while(*p != -1){//在没有第三段条件的情况下，第一段在外部表示，可以使用while
		printf("%d\n", *p++);
	}
	int ai[] = { 1,2,3,4,5,6,7,8,9,0, };
	int *q = ai;
	q = p;
	return 0;

}