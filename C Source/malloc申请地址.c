#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void *p;
	int cnt = 0;
	p = malloc(100 * 1024 * 1024);//申请100MB 的空间
	p++;//对p进行操作
	free(p);//实验对p进行操作后，能否归还p的地址
	//毫无疑问的失败了
	return 0;
}