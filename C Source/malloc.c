#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *a;//����һ��ָ�����������һ����ַ�����԰�������һ���������ã���Ϊ������Ҳ�ǵ�ַ
	int i;
	printf("����������");
	scanf("%d", &n);
	//int a[n];C99��ֱ�ӿ�������ʹ��

	int *a = (int *)malloc(n * sizeof(int));//ȡ��̬�����ַ����sizeof����Ҫǿ�����ʹ�int��int��*��
	for (i = 0; i < n; i++) {
		scanf("&d", &a[i]);//����a�����ֵ
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}//�������
	free(a);//�����˶�̬�ڴ棬����Ҫ�ͷŵ�
	return 0;
}