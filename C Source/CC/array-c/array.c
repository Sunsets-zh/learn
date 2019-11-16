//可变数组
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


//封装，通过这种方式来保护a.size
int array_size(const Array *a)
{
	return a->size;
}


int* array_at(Array *a, int index)
{
	if (index >= a->size) {
		//array_inflate(&a, index - a->size + 1);//这个就是一个一个申请，但是考虑到实质是不断的复制释放，所以很累
		//所以引入BLOCK
		array_inflate(&a, (index / BLOCK_SIZE + 1)*BLOCK_SIZE - a->size);//这个是将eg：如果初始定义了100个，但是要访问102个，
		//此时102/100=5，(5+1)*BLOCK就是要访问的这个是在下一个BLOCK里，说明了它的上限，然后在减去原
		//来的空间，就是新增长得空间，本质上是和index-a->size+1是一样的，只是长得多；
	}
	return &(a->array[index]);
}//更喜欢这种操作
//如果难以接受以下的操作
//*array_at(&a,0)=10;
//那么可以使用以下这对函数来解决问题；
void array_set(Array *a, int index, int value)
{
	a->array[index] = value;
}//用来给结构体定义的这个数组来赋值
int array_get(const Array *a, int index)
{
	return a->array[index];
}//用来返回结构体数组赋值后的结果



void array_inflate(Array *a, int more_size)
{
	int*p = (int *)malloc(sizeof(int) *(a->size + more_size));
	int i;
	for (i = 0; i < a->size; i++) {
		p[i] = a->array[i];//这段代码有个库函数是memcpy，更有效率void *memcpy(void *str1, const void *str2, size_t n)
		//str1:目标数组，str2：源数组，size_t n：是复制多少个字符；
		free(a->array);
		a->array = p;
		a->size += more_size;
	}
}