#include <stdio.h>

int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0,a=0;
	printf("���Ѿ������һ��1��100����\n");
	do
	{
		printf("������һ������");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
			printf("���������̫���ˣ�����������"); 
		} 
		else if(a<number)
		{
			printf("���������̫С�ˣ�����������"); 
		} 
		/*else��һ�����Բ���д����Ϊ����������ϱ�����������ʣ��a=number���ⲽ���Է���ѭ��
				������鴦�������ȣ�����ѭ�� 
		{
			printf("����%d�ξͲµ��˴�",count);
			break;
		} */ 
	} while(a!=number);
	printf("����%d�ξͲµ��˴�",count);
	
	
	return 0;
} 