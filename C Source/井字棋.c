#include<stdio.h>
#define size 3
int main()
{
	//规则是无论行列亦或是对较小要达到size才算赢
	//const int size = 3;//恒量,在C++有效
	int tab[size][size];//桌面3X3
	int i, j;
	int numof0;//0的个数
	int numofx;//X的个数,X在数组中使用1来表示
	int result = -1;//结果：-1是没人赢，0是0赢，1是X赢
	//读入矩阵
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
	//固定i检查j
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
	//行检查只要是 0或1都有结果输出；要么就没有输出是-1；在-1时检查列向量；
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
	//列检查只要是 0或1都有结果输出；要么就没有输出是-1；在-1时检查对角线；
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
		printf("X胜利");
	}
	else if (result == 0) {
		printf("0胜利");
	}
	else {
		printf("没有胜利者");
	}
	return 0;
}