//�ļ����������
#include<stdio.h>
int main(int argc, char const *argv[])
{
	FILE*fp = fopen("12.in", "r");
	//fopen �Ĳ���
	//r����ֻ����  r+���򿪶�д��  w����ֻд��������������½��������������գ�  w+��\
	�򿪶�д��������������½��������������գ�a����׷�ӣ����������½�����������ļ�β��ʼ\
	..x������Ǽӵ��ϱ��⼸��������ߵģ���ֻ�½�������������ܴ򿪣�

	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else {
		printf("�޷����ļ�\n");
	}
	return 0;
}