#include<stdio.h>
#define size 3
int main()
{
	//������������������ǶԽ�СҪ�ﵽsize����Ӯ
	//const int size = 3;//����,��C++��Ч
	int tab[size][size];//����3X3
	int i, j;
	int numof0;//0�ĸ���
	int numofx;//X�ĸ���,X��������ʹ��1����ʾ
	int result = -1;//�����-1��û��Ӯ��0��0Ӯ��1��XӮ
	//�������
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
	int q = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d ", tab[i][j]);
			q++;
			if (q > 2) {
				q = 0;
				printf("\n");
			}
		}
	}
	//�̶�i���j
	for (i = 0; i < size&&result == -1; i++)
	{
		numof0 = numofx = 0;
		for (j = 0; j < size; j++)
		{
			if (tab[i][j] == 0)
			{
				numofx++;
			}
			else
			{
				numof0++;
			}
			if (numof0 == size)
			{
				result = 0;
			}
			else if (numofx == size)
			{
				result = 1;
			}
		}
	}
	//�м��ֻҪ�� 0��1���н�������Ҫô��û�������-1����-1ʱ�����������
	if (result == -1) {
		for (j = 0; j < size&&result == -1; j++) {
			numof0 = numofx = 0;
			for (i = 0; i < size; i++) {
				if (tab[i][j] == 1) {
					numofx++;
				}
				else {
					numof0++;
				}
				if (numofx == size) {
					result = 1;
				}
				else if (numof0 == size) {
					result = 0;
				}
			}
		}
	}
	//�м��ֻҪ�� 0��1���н�������Ҫô��û�������-1����-1ʱ���Խ��ߣ�
	if (result == -1) {
		for (i = 0; i < size&&result == -1; i++) {
			numof0 = numofx = 0;
			if (tab[i][i] == 1) {
				numofx++;
			}
			else {
				numof0++;
			}
			if (numof0 == size) {
				result = 0;
			}
			else if (numofx == size) {
				result = 1;
			}
		}
	}
	if (result == -1) {
		numof0 = numofx = 0;
		for (i = 0; i < size&&result == -1; i++) {
			if (tab[i][size - i - 1] == 0) {
				numof0++;
			}
			else if (tab[i][size - i - 1] == 1) {
				numofx++;
			}
			if (numof0 == size) {
				result = 0;
			}
			else if (numofx == size) {
				result = 1;
			}
		}
	}
	if (result == 1) {
		printf("Xʤ��");
	}
	else if (result == 0) {
		printf("0ʤ��");
	}
	else {
		printf("û��ʤ����");
	}
	return 0;
}