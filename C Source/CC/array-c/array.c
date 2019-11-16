//�ɱ�����
#include"array.h"
#include<stdlib.h>

const BLOCK_SIZE = 20;
Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}


//��װ��ͨ�����ַ�ʽ������a.size
int array_size(const Array *a)
{
	return a->size;
}


int* array_at(Array *a, int index)
{
	if (index >= a->size) {
		//array_inflate(&a, index - a->size + 1);//�������һ��һ�����룬���ǿ��ǵ�ʵ���ǲ��ϵĸ����ͷţ����Ժ���
		//��������BLOCK
		array_inflate(&a, (index / BLOCK_SIZE + 1)*BLOCK_SIZE - a->size);//����ǽ�eg�������ʼ������100��������Ҫ����102����
		//��ʱ102/100=5��(5+1)*BLOCK����Ҫ���ʵ����������һ��BLOCK�˵�����������ޣ�Ȼ���ڼ�ȥԭ
		//���Ŀռ䣬�����������ÿռ䣬�������Ǻ�index-a->size+1��һ���ģ�ֻ�ǳ��öࣻ
	}
	return &(a->array[index]);
}//��ϲ�����ֲ���
//������Խ������µĲ���
//*array_at(&a,0)=10;
//��ô����ʹ��������Ժ�����������⣻
void array_set(Array *a, int index, int value)
{
	a->array[index] = value;
}//�������ṹ�嶨��������������ֵ
int array_get(const Array *a, int index)
{
	return a->array[index];
}//�������ؽṹ�����鸳ֵ��Ľ��



void array_inflate(Array *a, int more_size)
{
	int*p = (int *)malloc(sizeof(int) *(a->size + more_size));
	int i;
	for (i = 0; i < a->size; i++) {
		p[i] = a->array[i];//��δ����и��⺯����memcpy������Ч��void *memcpy(void *str1, const void *str2, size_t n)
		//str1:Ŀ�����飬str2��Դ���飬size_t n���Ǹ��ƶ��ٸ��ַ���
		free(a->array);
		a->array = p;
		a->size += more_size;
	}
}