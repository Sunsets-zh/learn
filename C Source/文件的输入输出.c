//文件的输入输出
#include<stdio.h>
int main(int argc, char const *argv[])
{
	FILE*fp = fopen("12.in", "r");
	//fopen 的参数
	//r，打开只读；  r+，打开读写；  w，打开只写，如果不存在则新建，如果存在则清空；  w+，\
	打开读写，如果不存在则新建，如果存在则清空；a，打开追加，不存在则新建，存在则从文件尾开始\
	..x（这个是加到上边这几个参数后边的），只新建，如果存在则不能打开；

	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else {
		printf("无法打开文件\n");
	}
	return 0;
}