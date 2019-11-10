#include <stdio.h>
#include "student.h"
void getList(Student astu[],int number);
int save(Student astu[],int number);
int main()
{
	int number = 0;
	printf("����ѧ������\n");
	scanf("%d", &number);
	Student *astu = (Student *)malloc(number * sizeof(int));
	//Student astu[number];//c99��ֱ�ӿ��������֣����������֧��C99��ֻ�������ַ�ʽ������ǵ�Ҫ�ͷ��ڴ�
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
	sprintf(format, "%%%ds\n", STR_LEN - 1);//%%��ָҪ���һ��%,%d�Ǳ�׼��ʽ\
											sҲ��Ҫ�����-->"%19s",�����ⲻ��λ��ò�Ҫʹ��
	int i;
	for (i = 0; i < number; i++) {
		printf("��%d��ѧ����������\n", i+1);
		printf("\t������");
		scanf("%s", astu[i].name);
		printf("\t�Ա�(Ů����1��������0��������2):");
		scanf("%d", &astu[i].gender);
		printf("\t���䣺");
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