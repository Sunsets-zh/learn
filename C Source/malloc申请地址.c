#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void *p;
	int cnt = 0;
	p = malloc(100 * 1024 * 1024);//����100MB �Ŀռ�
	p++;//��p���в���
	free(p);//ʵ���p���в������ܷ�黹p�ĵ�ַ
	//�������ʵ�ʧ����
	return 0;
}