#include<stdio.h>
int main()
{
	int number=0,count=0,sum=0;
/* 
	do 
	{
		scanf("%d",&number);
		if(number!=-1)		//(��һ���ж�number������-1)
		{
			sum+=number;
			count++;
		}
	}while(number!=-1);	//	���ڶ����ж�number������-1�� ������һЩ��Դ�˷� 
*/ 						/*��������߼������� 
						�뵽����if��ʼ��������������������һ��ѭ�� */ 

	scanf("%d",&number);
	while(number!=-1)
	{
		sum+=number;
		count++;
		scanf("%d",&number);
	}  
	printf("ƽ����Ϊ%f\n",1.0*sum/count); 
} 
