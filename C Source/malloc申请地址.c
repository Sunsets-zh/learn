#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void *p=0;//一般我们要有这样的一个习惯，在定义一个指针时，初始化其为0；
	int cnt = 0;
	int i = 5;
	/*//p = malloc(100 * 1024 * 1024);//申请100MB 的空间
	p = &i;
	p++;//对p进行操作
	free(p);//实验对p进行操作后，能否归还p的地址
	//毫无疑问的失败了

*/
	free(0);//free(NULL);因为我们有之前的那个初始化的好习惯，所以就算动态失败了
					//	或者没有操作，仍可以释放掉p
	return 0;
}