

#include<stdio.h>
#include<stdlib.h>
#include"array.h"
int main(int argc, char const* argv[])
{
	Array a = array_create(100);
	printf("%d\n", array_size(&a));
	*array_at(&a, 0) = 10;
	array_set(&a, 0, 10);
	printf("array_get=%d\n", array_get(&a, 0));
	printf("*array_at=%d\n", *array_at(&a,0));
	int number;
	int cnt;
	while (number!=-1) {
		scanf("%d", &number);
		if(number!=-1)
		*array_at(&a, cnt++) = number;
		
	array_free(&a);
	return 0;
}