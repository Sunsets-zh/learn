#include <stdio.h>
#include "student.h"
void getList(Student astu[],int number);
int save(Student astu[],int number);
int main()
{
	int number = 0;
	printf("输入学生数量\n");
	scanf("%d", &number);
	Student *astu = (Student *)malloc(number * sizeof(int));
	//Student astu[number];//c99里直接可以用这种，但是如果不支持C99，只能用这种方式，用完记得要释放内存
	getList(astu, number);
	if (save(astu, number)) {
		printf("success save\n");
	}
	else {
		printf("save failed");
	}
	free( astu);
	return 0;
}
void getList(Student astu[], int number)
{
	char format[STR_LEN];
	sprintf(format, "%%%ds\n", STR_LEN - 1);//%%是指要输出一个%,%d是标准格式\
											s也是要输出的-->"%19s",这个理解不到位最好不要使用
	int i;
	for (i = 0; i < number; i++) {
		printf("第%d个学生的姓名：\n", i+1);
		printf("\t姓名：");
		scanf("%s", astu[i].name);
		printf("\t性别(女生：1，男生：0，其他：2):");
		scanf("%d", &astu[i].gender);
		printf("\t年龄：");
		scanf("%d", &astu[i].age);

	}
}
int save(Student astu[], int number) 
{
	int ret = 0;
	FILE*fp = fopen("studebt.data", "w");
	if (fp) {
		ret = fwrite(astu,sizeof(Student),number,fp);
		fclose(fp);
		return ret == number;

	}
}