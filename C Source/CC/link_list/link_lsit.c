#include"node.h"
#include<stdio.h>
#include<stdlib.h>
typedef struct _list {
	Node *head;//��Ϊ���list��ֻ����һ��������&head=&list����list��������������
	//�������ĺô����ڣ��Ժ���Ӷ������㣬��Ϊ�ҵ�last����һ���������������ÿ�ζ���head��ʼ
	//�ͻ�ܷ���������������������ݣ��ͺܷ���ķֳ�Ƭ������
	//����ٶ���һ��ָ���������ô�Ϳ�����������ָ���Ǹ�last���Ǿͺܷ���ʡ���˺ܶ����飻
}List;
int main()
{
	List list;
	list.head = NULL;
	//Node *head = NULL;�����ϱ�����ṹ���Ժ�list���head����Node*head��
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);//��ʱ����&list���൱��&head
		}
	} while (number != -1);
	//���Ҫ�������list
	//�������
	print(&list);

	printf("\n");
	return 0;
}
void add(List* plist, int number)//��ʱ��ֱ�Ӵ������ľ���list�ĵ�ַ��Ҳ����head�ĵ�ַ
{
	//���뵽link-list��    ����Ҫ����һ��link-list��Ҳ��������������Node�ṹ��
	Node *p = (Node*)malloc(sizeof(Node));//��̬�����
	/*struct _node r;
	r.value = number;*/
	p->value = number;
	p->next = NULL;//�����µ�һ������������ĩβ��NULL��Ҫ��ԭ�����һ�����ӹ���
	//�ҵ����һ��
	Node *last = plist;//����lastָ��head�����б�����������last��ΪNULLʱ
	if (last) {//last��nextָ����һ����֪����ΪNULL�����һ��ʱ������
		while (last->next) {
			last = last->next;
		}
		//wancheng
		last->next = p;//�����һ�����ӵ��½����Ǹ��� 
	}
	else {
		plist = p;//���һ��ʼlast����NULL����ָ����Ǹ�head����NULL����ôhead=p��
		//��������һ�����⣬���������head��������ûʲô��ϵ����ͺ����Σ����Ը���ַ���ϵ�ַ
		//����ֱ���޸ĵ�ַ��Ķ�����head�ͱ��޸��ˣ�����ֱ�ӷ���

	}
}
void print(List* list)
{
	Node *p;
	for (p = list.head; p; p = p->next) {
		printf("%d\t", p->value);
	}
}